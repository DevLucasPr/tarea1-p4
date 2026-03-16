// #include "../include/DTFecha.h"
// #include "../include/DTExpe.h"
#include "../include/Experiencia.h"
// #include "../include/Turista.h"
#include <set>
#include <string>
#include <iostream>
using namespace std;

Experiencia::Experiencia(string codigoReserva, string descripcion, int precioBase /*,DTFecha fecha*/)
{
    this->codigoReserva = codigoReserva;
    this->descripcion = descripcion;
    this->precioBase = precioBase;
    // this->fecha = fecha;
}

/*
:DTExpe(string codigoReserva,string descripcion,DTFecha fecha,set<string> turistas

DTExpe Experiencia::getDT()
{
    set<string> tur;
    set<Turista*>::const_iterator iteradorTuristas;
    for (iteradorTuristas = this->turistas.begin(); iteradorTuristas != this->turistas.end(); ++iteradorTuristas) {
        Turista* turistaActual = *iteradorTuristas;
        if (turistaActual != NULL) {
            tur.insert(turistaActual->getNombre());
        }
    }
    return DTExpe(this->codigoReserva, this->descripcion,this->fecha,tur);
}

void Experiencia::agregarTurista(Turista* turista)
{
    this->turistas,insert(turista);
}

void Experiencia::eliminarTurista(Turista* turista)
{
    if (this->turistas.find(turista) != turistas.end()) {
        this->turistas.erase(turista);
    }
}

*/

void Experiencia::setCodigoReserva(string codigoReserva)
{
    this->codigoReserva = codigoReserva;
}

void Experiencia::setDescripcion(string descripcion)
{
    this->descripcion = descripcion;
}

void Experiencia::setPrecioBase(int precioBase)
{
    this->precioBase = precioBase;
}

/*
void Experiencia::setFecha(DTFecha fecha) {
    this->fecha = fecha;
}
*/

string Experiencia::getCodigoReserva()
{
    return this->codigoReserva;
}

string Experiencia::getDescripcion()
{
    return this->descripcion;
}

int Experiencia::getPrecioBase()
{
    return this->precioBase;
}

/*
DTFecha Experiencia::getFecha() {
    return this->fecha;
}
*/