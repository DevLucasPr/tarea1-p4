#ifndef EVENTOCULTURAL
#define EVENTOCULTURAL
#include <string>
#include "../include/Experiencia.h"
#include "../include/DTFecha.h"
using namespace std;

class EventoCultural : public Experiencia {
private:

    string ubicacion;
    bool usoCupon;

public:

    EventoCultural(string codigoReserva, string descripcion, int precioBase, DTFecha fecha, string ubicacion, bool usoCupon); 

    void setUbicacion(string ubicacion) 
    string getUbicacion();

    void setUsoCupon(bool usoCupon); 
    bool getUsoCupon();

    float calcularCosto();
};

#endif