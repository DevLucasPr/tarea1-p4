#include "Turista.h"
#include "Experiencia.h"
#include "DTFecha.h"


Turista::Turista(std::string ci, std::string nombre, std::string email) {
    this->ci = ci;
    this->nombre = nombre;
    this->email = email;
}

std::string Turista::getCi() {
    return ci;
}

std::string Turista::getNombre() {
    return nombre;
}

std::string Turista::getEmail() {
    return email;
}

void Turista::setCi(std::string ci){
    this->ci = ci;
}

void Turista::setNombre(std::string nombre){
    this->nombre = nombre;
}

void Turista::setEmail(std::string email){
    this->email = email;
}

void Turista::agregarExperiencia(Experiencia* exp) {
    experiencias.push_back(exp);
}

std::string Turista::toString() {
    return ci + "->" + nombre + "/" + email;
}

std::list<std::string> Turista::listarExperiencias(DTFecha desde, float min, float max) {

    std::list<std::string> resultado;

    for(std::list<Experiencia*>::iterator it = experiencias.begin(); it != experiencias.end(); ++it) {

        Experiencia* exp = *it;

        if(exp->getFecha() > desde) {

            float costo = exp->calcularCosto();

            if(costo >= min && costo <= max) {
                resultado.push_back(exp->getCodigoReserva());
            }

        }
    }

    return resultado;
}