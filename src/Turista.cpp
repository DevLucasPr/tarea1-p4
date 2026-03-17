#include "Turista.h"
#include "Experiencia.h"
#include "DTFecha.h"

Turista::Turista(string ci, string nombre, string email)
{
    this->ci = ci;
    this->nombre = nombre;
    this->email = email;
}

string Turista::getCi()
{
    return ci;
}

string Turista::getNombre()
{
    return nombre;
}

string Turista::getEmail()
{
    return email;
}

void Turista::setCi(string ci)
{
    this->ci = ci;
}

void Turista::setNombre(string nombre)
{
    this->nombre = nombre;
}

void Turista::setEmail(string email)
{
    this->email = email;
}

void Turista::agregarExperiencia(Experiencia *exp)
{
    experiencias.push_back(exp);
}

string Turista::toString()
{
    return ci + "->" + nombre + "/" + email;
}

list<string> Turista::listarExperiencias(DTFecha desde, float min, float max)
{

    list<string> resultado;

    for (list<Experiencia *>::iterator it = experiencias.begin(); it != experiencias.end(); ++it)
    {

        Experiencia *exp = *it;

        if (exp->getFecha() > desde)
        {

            float costo = exp->calcularCosto();

            if (costo >= min && costo <= max)
            {
                resultado.push_back(exp->getCodigoReserva());
            }
        }
    }

    return resultado;
}