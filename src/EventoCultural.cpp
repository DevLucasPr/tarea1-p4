#include "../include/EventoCultural.h"

EventoCultural::EventoCultural(string codigoReserva, string descripcion, int precioBase, DTFecha fecha, string ubicacion, bool usoCupon):Experiencia(codigoReserva, descripcion, precioBase, fecha)
{
    this->ubicacion = ubicacion;
    this->usoCupon = usoCupon;
};

void EventoCultural::setUbicacion(string ubicacion)
{
    this->ubicacion = ubicacion;
};

string EventoCultural::getUbicacion()
{
    return this->ubicacion;
};

void EventoCultural::setUsoCupon(bool usoCupon)
{
    this->usoCupon = usoCupon;
};

bool EventoCultural::getUsoCupon()
{
    return this->usoCupon;
};

float EventoCultural::calcularCosto()
{
    float costo;
    costo = (this->getPrecioBase() * this->getTuristas().size());
    if (this->usoCupon)
        {
            costo = costo - (this->getTuristas().size() * 5);
        }
    return costo;
};
