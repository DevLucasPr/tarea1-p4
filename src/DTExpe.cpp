#include "DTExpe.h"
#include "DTFecha.h"

DTExpe::DTExpe(string codigoReserva, string descripcion, DTFecha fecha, set<string> nombreTurista)
{
    this->codigoReserva = codigoReserva;
    this->descripcion = descripcion;
    this->fecha = fecha;
    this->nombreTurista = nombreTurista;
}

string DTExpe::getCodigoReserva()
{
    return this->codigoReserva;
}
string DTExpe::getdescripcion()
{
    return this->descripcion;
}
DTFecha DTExpe::getFecha()
{
    return this->fecha;
}
set<string> DTExpe::getNombreTurista()
{
    return this->nombreTurista;
}