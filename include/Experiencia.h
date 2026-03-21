#ifndef EXPERIENCIA
#define EXPERIENCIA

#include "../include/DTFecha.h"
#include "../include/DTExpe.h"
#include "../include/Turista.h"

#include <set>
#include <string>
using namespace std;

class Turista;

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

    string getCodigoReserva() const;
    string getDescripcion() const;
    int getPrecioBase() const;
    DTFecha getFecha() const;
    set<Turista *> getTuristas() const;

    virtual ~Experiencia() = 0;
};

#endif
