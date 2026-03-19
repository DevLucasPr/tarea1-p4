#ifndef _DTEXPE_H_
#define _DTEXPE_H_

#include "../include/DTFecha.h"

#include <set>
#include <string>
#include <iostream>
using namespace std;

class DTExpe
{
private:
    string codigoReserva, descripcion;
    DTFecha fecha;
    set<string> nombreTurista;

public:
    DTExpe(string codigoReserva, string descripcion, DTFecha fecha, set<string> nombreTurista);

    string getCodigoReserva() const;
    string getDescripcion() const;
    DTFecha getFecha() const;
    set<string> getNombreTurista() const;
};

ostream &operator<<(ostream &os, const DTExpe &dt); // Sobrecarga del operador de inserción para imprimir el contenido de DTExpe
    // Sobrecargar el operador de inserción de flujo (<<) en un objeto std::ostream.
    // Esta sobrecarga debe permitir imprimir todos los datos del datatype DTExpe siguiendo el
    // siguiente formato: codigoReserva->descripcion(fecha)/turista1,turista2,.,turistaN

#endif
