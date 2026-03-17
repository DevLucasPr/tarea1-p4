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
    set<string> turistas;

public:
    DTExpe(string codigoReserva, string descripcion, DTFecha fecha, set<string> turistas);
    string getCodigoReserva();
    string getdescripcion();
    DTFecha getFecha();
    set<string> getTuristas();
    int getCantTuristas();
};

#endif
