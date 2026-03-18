#ifndef _DTEXPE_H_
#define _DTEXPE_H_

#include "DTFecha.h"

#include <set>
#include <string>
using namespace std;

class DTExpe
{
private:
    string codigoReserva, descripcion;
    DTFecha fecha;
    set<string> nombreTurista;

public:
    DTExpe(string codigoReserva, string descripcion, DTFecha fecha, set<string> nombreTurista);

    string getCodigoReserva();
    string getdescripcion();
    DTFecha getFecha();
    set<string> getNombreTurista();
};

#endif
