#ifndef TURISTA_H
#define TURISTA_H

#include "../include/Experiencia.h"
#include "../include/DTFecha.h"

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

    string getCi() const;
    string getNombre() const;
    string getEmail() const;

    void setCi(string ci);
    void setNombre(string nombre);
    void setEmail(string email);

    void agregarExperiencia(Experiencia *exp);

    string toString();

    list<string> listarExperiencias(DTFecha desde, float min, float max);
};

#endif
