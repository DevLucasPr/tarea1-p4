#ifndef _DTEXPE_H_
#define _DTEXPE_H_
#include <set>
#include <string>
using namespace std;
#include "DTFecha.h"

class DTExpe{
    private:
        string codigoReserva, descripcion;
        DTFecha fecha;
        set<string> turistas;
    public:
        DTExpe(string,string, DTFecha, set<string>);
        string getCodigoReserva();
        string getdescripcion();
        DTFecha getFecha();
        set<string> getTuristas();
        int getCantTuristas();

};


#endif