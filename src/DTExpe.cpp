#include "DTExpe.h"

DTExpe::DTExpe(string codigoReserva,string descripcion,DTFecha fecha,set<string> turistas){
    this->codigoReserva= codigoReserva;
    this->descripcion= descripcion;
    this->fecha = fecha;
    this->turistas=turistas;
}

string DTExpe::getCodigoReserva(){
    return this->codigoReserva;
}
string DTExpe::getdescripcion(){
    return this->descripcion;
}
DTFecha DTExpe::getFecha(){
    return this->fecha;
}
set<string> DTExpe::getTuristas(){
    return this->turistas;
}
int DTExpe::getCantTuristas(){
    int cantTuristas=getTuristas().size();
    return cantTuristas;
}