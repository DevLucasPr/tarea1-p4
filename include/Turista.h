#ifndef TURISTA_H
#define TURISTA_H

#include <string>
#include <list>

class Experiencia;
class DTFecha;

class Turista { 

private:
    std::string ci;
    std::string nombre;
    std::string email;
    std::list<Experiencia*> experiencias;

public: 
    Turista(std::string ci, std::string nombre, std::string email);

    std::string getCi();
    std::string getNombre();
    std::string getEmail();

    void setCi(std::string ci);
    void setNombre(std::string nombre);
    void setEmail(std::string email);

    void agregarExperiencia(Experiencia* exp);

    std::string toString();

    std::list<std::string> listarExperiencias(DTFecha desde, float min, float max);
};

#endif


