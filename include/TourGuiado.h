#ifndef _TOURGUIADO_H_
#define _TOURGUIADO_H_

#include "../include/DTExpe.h"
#include "../include/DTFecha.h"
#include "../include/Experiencia.h"

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

    string getAgencia() const;
    set<string> getLugaresVisitados() const;

    float calcularCosto();
};

#endif
