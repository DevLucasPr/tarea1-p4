#ifndef _TOURGUIADO_H_
#define _TOURGUIADO_H_

#include "DTExpe.h"
#include "DTFecha.h"
#include "Experiencia.h"

#include <set>
#include <string>

using namespace std;

class TourGuiado : public Experiencia
{
private:
    string agencia;
    set<string> lugaresVisitados;

public:
    TourGuiado(string codigoReserva, string descripcion, int precioBase, DTFecha fecha, string agencia, set<string> lugaresVisitados);
    string getAgencia();
    set<string> getLugaresVisitados();
    float calcularCosto();
};

#endif
