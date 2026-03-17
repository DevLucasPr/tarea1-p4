#include "TourGuiado.h"

TourGuiado::TourGuiado(string codigoReserva, string descripcion, int precioBase, DTFecha fecha, string agencia, set<string> lugaresVisitados) : Experiencia(string codigoReserva, string descripcion, int precioBase, DTFecha fecha);
{
    this->agencia = agencia;
    this->lugaresVisitados = lugaresVisitados;
}
string TourGuiado::getAgencia()
{
    return this->agencia;
}
set<string> TourGuiado::getLugaresVisitados()
{
    return this->lugaresVisitados;
}
float TourGuiado::calcularCosto()
{
    float cantLugaresVisitados;
    cantLugaresVisitados = this->lugaresVisitados.size();
    float costo = this->precioBase + 2 * getCantTuristas() * cantlugaresVisitados;
}