#include "../include/EventoCultural.h"

EventoCultural::EventoCultural(string codigoReserva, string descripcion, int precioBase, DTFecha fecha, string ubicacion, bool usoCupon) : Experiencia(codigoReserva, descripcion, precioBase, fecha)
{
    this->ubicacion = ubicacion;
    this->usoCupon = usoCupon;
}

void EventoCultural::setUbicacion(string ubicacion)
{
    this->ubicacion = ubicacion;
}

void EventoCultural::setUsoCupon(bool usoCupon)
{
    this->usoCupon = usoCupon;
}

string EventoCultural::getUbicacion() const
{
    return this->ubicacion;
}

bool EventoCultural::getUsoCupon() const
{
    return this->usoCupon;
}

float EventoCultural::calcularCosto()
{
    int precioBase = this->getPrecioBase();
    int cantidad = this->getTuristas().size();
    if (this->usoCupon)
    {
        return (precioBase * cantidad) - (cantidad * 5);
    }
    return precioBase * cantidad;
}
