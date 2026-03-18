#ifndef TURISTA_H
#define TURISTA_H

#include "Experiencia.h"
#include "DTFecha.h"

#include <list>
#include <string>
using namespace std;

class Turista
{

private:
    string ci;
    string nombre;
    string email;
    list<Experiencia *> experiencias;

public:
    Turista(string ci, string nombre, string email);

    string getCi();
    string getNombre();
    string getEmail();

    void setCi(string ci);
    void setNombre(string nombre);
    void setEmail(string email);

    void agregarExperiencia(Experiencia *exp);

    string toString();

    list<string> listarExperiencias(DTFecha desde, float min, float max);
};

#endif
