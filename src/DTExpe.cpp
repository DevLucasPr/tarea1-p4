#include "../include/DTExpe.h"

DTExpe::DTExpe(string codigoReserva, string descripcion, DTFecha fecha, set<string> nombreTurista)
{
    this->codigoReserva = codigoReserva;
    this->descripcion = descripcion;
    this->fecha = fecha;
    this->nombreTurista = nombreTurista;
}

string DTExpe::getCodigoReserva() const
{
    return this->codigoReserva;
}

string DTExpe::getDescripcion() const
{
    return this->descripcion;
}

DTFecha DTExpe::getFecha() const
{
    return this->fecha;
}

set<string> DTExpe::getNombreTurista() const
{
    return this->nombreTurista;
}

ostream &operator<<(ostream &os, const DTExpe &dt) // Sobrecarga del operador de inserción para imprimir el contenido de DTExpe
{
    os << dt.getCodigoReserva() << "->" << dt.getDescripcion() << "(";
    DTFecha fecha = dt.getFecha();
    os << fecha.getAnio() << "/" << fecha.getMes() << "/" << fecha.getDia() << ")/"; // Imprime la fecha en formato (año/mes/día)

    const set<string> &turistas = dt.getNombreTurista(); // Obtiene el conjunto de nombres de turistas
    set<string>::const_iterator it; // Iterador para recorrer el conjunto de nombres de turistas
    for (it = turistas.begin(); it != turistas.end(); ++it)
    {
        os << *it; // Imprime el nombre del turista
        set<string>::const_iterator siguiente = it;
        ++siguiente;
        if (siguiente != turistas.end()) // si el siguiente no es el ultimo elemento, agrega una coma
        {
            os << ",";
        }
    }
    return os;
} // lo di todo no esperen que funcioinne :)
