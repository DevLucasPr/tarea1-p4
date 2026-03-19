#include "../include/TourGuiado.h"

TourGuiado::TourGuiado(string codigoReserva, string descripcion, int precioBase, DTFecha fecha, string agencia, set<string> lugaresVisitados) : Experiencia(codigoReserva, descripcion, precioBase, fecha)
{
    this->agencia = agencia;
    this->lugaresVisitados = lugaresVisitados;
}

string TourGuiado::getAgencia() const
{
    return this->agencia;
}

set<string> TourGuiado::getLugaresVisitados() const
{
    return this->lugaresVisitados;
}

float TourGuiado::calcularCosto()
{
    int precioBase = this->getPrecioBase();
    int cantidadTuristas = this->getTuristas().size();
    int cantidadLugares = this->lugaresVisitados.size();
    return (precioBase * 2 * cantidadTuristas * cantidadLugares);
}