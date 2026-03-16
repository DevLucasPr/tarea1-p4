#include "TourGuiado.h"

TourGuiado::TourGuiado(string agencia,set<string> lugaresVisitados){
    this->Agencia=agencia;
    this->lugaresVisitados=lugaresVisitados;
}
string TourGuiado::getAgencia(){
    return this->agencia;
}
set<string> TourGuiado::getLugaresVisitados(){
    return this->lugaresVisitados;
}
float TourGuiado::calcularCosto(){
    cantLugaresVisitados=this->lugaresVisitados.size();
    float costo=this->precioBase + 2*getCantTuristas()*cantlugaresVisitados;
}