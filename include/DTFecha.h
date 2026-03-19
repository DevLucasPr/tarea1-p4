
#ifndef _DTFECHA_H_
#define _DTFECHA_H_

class DTFecha
{
private:
    int dia, mes, anio;

public:
    DTFecha();
    DTFecha(int dia, int mes, int anio);

    int getDia() const;
    int getMes() const;
    int getAnio() const;

    bool operator>(DTFecha);
};

#endif
