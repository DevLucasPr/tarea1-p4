#ifndef _TOURGUIADO_H_
#define _TOURGUIADO_H_
#include <set>
#include <string>
using namespace std;
#include "DTExpe.h"
#include "Experiencia.h"

class TourGuiado::public Experiencia{
    private: 
        string Agencia;
        set<string> lugaresVisitados;
    public:
        TourGuiado(string agencia, set<string> lugaresVisitados);
        string getAgencia();
        set<string> getlugaresVisitados();
        float calcularCosto();
};

#endif