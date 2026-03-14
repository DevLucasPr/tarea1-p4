
#ifndef _DTFECHA_H_
#define _DTFECHA_H_

class DTFecha{
    private:
        int dia, mes,anio;
    public:
        DTFecha(int, int, int);
        int getDia();
        int getMes();
        int getAnio();
        bool operator>(DTFecha);
};

#endif