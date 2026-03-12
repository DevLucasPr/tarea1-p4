#ifndef EXPERIENCIA
#define EXPERIENCIA

// #include "../include/DTFecha.h"
// #include "../include/DTExpe.h"
// #include "../include/Turista.h"

#include <set>
#include <string>
using namespace std;

class Experiencia
{
private:
    string codigoReserva;
    string descripcion;
    int precioBase;
    // DTFecha fecha;
    // set<Turista*> turista;
public:
    Experiencia(string codigoReserva, string descripcion, int precioBase);
    // DTExpe getDT():
    virtual float calcularCosto() = 0;

    void setCodigoReserva(string codigoReserva);
    void setDescripcion(string descripcion);
    void setPrecioBase(int precioBase);
    // void setFecha(DTFecha fecha);

    string getCodigoReserva();
    string getDescripcion();
    int getPrecioBase();
    // DTFecha getFecha();

    virtual ~Experiencia() = 0;
};

#endif
