// #include "../include/DTFecha.h"
// #include "../include/DTExpe.h"
#include "../include/Experiencia.h"
// #include "../include/Turista.h"
#include <set>
#include <string>
#include <iostream>
using namespace std;

Experiencia::Experiencia(string codigoReserva, string descripcion, int precioBase)
{
    this->codigoReserva = codigoReserva;
    this->descripcion = descripcion;
    this->precioBase = precioBase;
}

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

Experiencia::~Experiencia() {};