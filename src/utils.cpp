#include <iostream>
#include <ostream>

#include "../include/Experiencia.h"
#include "../include/Turista.h"
#include "../include/utils.h"

void cleanUp()
{
    list<Experiencia *>::iterator iteradorExperiencia;
    for (iteradorExperiencia = experiencias.begin(); iteradorExperiencia != experiencias.end(); ++iteradorExperiencia)
    {
        delete *iteradorExperiencia;
    }
    experiencias.clear();
    map_experiencias.clear();

    list<Turista *>::iterator iteradorTurista;
    for (iteradorTurista = turistas.begin(); iteradorTurista != turistas.end(); ++iteradorTurista)
    {
        delete *iteradorTurista;
    }
    turistas.clear();
    map_turistas.clear();
}