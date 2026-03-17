#ifndef EXPERIENCIA
#define EXPERIENCIA

#include "DTFecha.h"
#include "DTExpe.h"
#include "Turista.h"

#include <set>
#include <string>
using namespace std;

class Experiencia
{
private:
    string codigoReserva;
    string descripcion;
    int precioBase;
    DTFecha fecha;
    set<Turista *> turistas;

public:
    Experiencia(string codigoReserva, string descripcion, int precioBase, DTFecha fecha);

    DTExpe getDT();
    virtual float calcularCosto() = 0;

    void agregarTurista(Turista *turista);
    void eliminarTurista(Turista *turista);

    void setCodigoReserva(string codigoReserva);
    void setDescripcion(string descripcion);
    void setPrecioBase(int precioBase);
    void setFecha(DTFecha fecha);

    string getCodigoReserva();
    string getDescripcion();
    int getPrecioBase();
    DTFecha getFecha();
    set<Turista *> getTuristas();

    virtual ~Experiencia() = 0;
};

#endif
