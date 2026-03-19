#ifndef ALOJAMIENTO
#define ALOJAMIENTO

#include "../include/Experiencia.h"
#include "../include/DTFecha.h"
#include "../include/TipoRegimen.h"

#include <string>
using namespace std;

class Alojamiento : public Experiencia
{
private:
    string hotel;
    TipoRegimen regimen;
    int cantNoches;

public:
    Alojamiento(string codigoReserva, string descripcion, int precioBase, DTFecha fecha, string hotel, TipoRegimen regimen, int cantNoches);

    void setHotel(string hotel);
    void setTipoRegimen(TipoRegimen regimen);
    void setCantNoches(int cantNoches);

    string getHotel() const;
    TipoRegimen getTipoRegimen() const;
    int getCantNoches() const;

    float calcularCosto();
};

#endif