#ifndef ALOJAMIENTO
#define ALOJAMIENTO
#include <string>
#include "Experiencia.h"
#include "TipoRegimen.h"
using namespace std;

class Alojamiento : public Experiencia {
private:

    string hotel;
    TipoRegimen regimen;
    int cantNoches;

public:

    Alojamiento(string hotel, TipoRegimen regimen, int cantNoches); 

    void setHotel(string hotel); 
    string getHotel();

    void setTipoRegimen(TipoRegimen regimen); 
    TipoRegimen getTipoRegimen();

    void setCantNoches(int cantNoches); 
    int getCantNoches();

    float calcularCosto();
};

#endif