#include "../include/Alojamiento.h"

Alojamiento::Alojamiento(string codigoReserva, string descripcion, int precioBase, DTFecha fecha, string hotel, TipoRegimen regimen, int cantNoches) : Experiencia(codigoReserva, descripcion, precioBase, fecha)
{
    this->hotel = hotel;
    this->regimen = regimen;
    this->cantNoches = cantNoches;
}

void Alojamiento::setHotel(string hotel)
{
    this->hotel = hotel;
}

void Alojamiento::setTipoRegimen(TipoRegimen regimen)
{
    this->regimen = regimen;
}

void Alojamiento::setCantNoches(int cantNoches)
{
    this->cantNoches = cantNoches;
}

string Alojamiento::getHotel() const
{
    return this->hotel;
}

TipoRegimen Alojamiento::getTipoRegimen() const
{
    return this->regimen;
}

int Alojamiento::getCantNoches() const
{
    return this->cantNoches;
}

float Alojamiento::calcularCosto()
{
    int precioBase = this->getPrecioBase();
    int noches = this->getCantNoches();
    if (this->getTipoRegimen() == AllInclusive)
    {
        return (precioBase * noches) + (noches * 10);
    }
    return precioBase * noches;
}