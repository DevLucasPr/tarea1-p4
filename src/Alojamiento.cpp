#include <string>
#include "../include/Experiencia.h"
#include "../include/DTFecha.h"
#include "../include/Alojamiento.h"
#include "../include/TipoRegimen.h"
using namespace std;

Alojamiento::Alojamiento(string codigoReserva, string descripcion, int precioBase, DTFecha fecha, string hotel, TipoRegimen regimen, int cantNoches)::Experiencia(string codigoReserva, string descripcion, int precioBase, DTFecha fecha)
{
    this->hotel = hotel;
    this->regimen = regimen;
    this->cantNoches = cantNoches;
}

void Alojamiento::setHotel(string hotel)
{
    this->hotel = hotel;
};

string Alojamiento::getHotel()
{
    return this->hotel;
};

void Alojamiento::setTipoRegimen(TipoRegimen regimen)
{
    this->regimen = regimen;
};

string Alojamiento::getTipoRegimen()
{
    return this->regimen;
};

void Alojamiento::setCantNoches(int cantNoches)
{
    this->cantNoches = cantNoches;
};

int Alojamiento::getCantNoches()
{
    return this->cantNoches;
};

float Alojamiento::calcularCosto()
{
    float costo;
    costo = (this->getPrecioBase() * this->getCantNoches());
    if (this->getTipoRegimen() == AllInclusive)
    {
        costo = (costo + (this->getCantNoches() * 10));
    }
    return costo;
};