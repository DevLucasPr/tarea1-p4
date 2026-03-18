#include "../include/DTFecha.h"

DTFecha::DTFecha()
{
    this->dia = 0;
    this->mes = 0;
    this->anio = 0;
}

DTFecha::DTFecha(int d, int m, int a)
{
    this->dia = d;
    this->mes = m;
    this->anio = a;
}

int DTFecha::getDia()
{
    return this->dia;
}

int DTFecha::getMes()
{
    return this->mes;
}
int DTFecha::getAnio()
{
    return this->anio;
}

bool DTFecha::operator>(DTFecha fecha)
{
    return (this->anio > fecha.anio) || (this->anio == fecha.anio && this->mes > fecha.mes) || (this->anio == fecha.anio && this->mes == fecha.mes && this->dia > fecha.dia);
}