
#ifndef _DTFECHA_H_
#define _DTFECHA_H_

class DTFecha
{
private:
    int dia, mes, anio;

public:
    DTFecha(int dia, int mes, int anio);
    int getDia();
    int getMes();
    int getAnio();
    bool operator>(DTFecha);
};

#endif
