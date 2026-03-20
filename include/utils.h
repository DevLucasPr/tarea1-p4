#ifndef UTILS
#define UTILS

#include "Experiencia.h"

#include <map>
#include <list>

extern list<Experiencia *> experiencias;
extern map<string, Experiencia *> map_experiencias;
extern list<Turista *> turistas;
extern map<string, Turista *> map_turistas;

void cleanUp();

#endif