#ifndef EVENTOCULTURAL
#define EVENTOCULTURAL

#include "../include/Experiencia.h"
#include "../include/DTFecha.h"

#include <string>
using namespace std;

class EventoCultural : public Experiencia
{
private:
    string ubicacion;
    bool usoCupon;

public:
    EventoCultural(string codigoReserva, string descripcion, int precioBase, DTFecha fecha, string ubicacion, bool usoCupon);

    void setUbicacion(string ubicacion);
    void setUsoCupon(bool usoCupon);

    string getUbicacion() const;
    bool getUsoCupon() const;

    float calcularCosto();
};

#endif