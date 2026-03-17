#include <string>
#include "../include/Experiencia.h"
#include "../include/DTFecha.h"
#include "../include/EventoCultural.h"
#include "../include/DTExpe.h"
using namespace std;

EventoCultural::EventoCultural(string codigoReserva, string descripcion, int precioBase, DTFecha fecha, string ubicacion, bool usoCupon)::Experiencia(string codigoReserva, string descripcion, int precioBase, DTFecha fecha)
{

    this->ubicacion = ubicacion;
    this->usoCupon = usoCupon;
};

void EventoCultural::setUbicacion(string ubicacion)
{
    this->ubicacion = ubicacionM;
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
    costo = (this->getPrecioBase() * this->getCantTuristas());
    if
        this->usoCupon
        {
            costo = costo - (this->getCantTuristas() * 5);
        }
    return costo;
};
