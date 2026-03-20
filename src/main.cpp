#include "../include/Alojamiento.h"
#include "../include/DTExpe.h"
#include "../include/DTFecha.h"
#include "../include/Experiencia.h"
#include "../include/TipoRegimen.h"
#include "../include/TourGuiado.h"
#include "../include/Turista.h"

#include <string>
#include <iostream>
#include <list>
#include <map>

std::list<Experiencia *> experiencias;
std::map<std::string, Experiencia *> map_experiencias;

std::list<Turista *> turistas;
std::map<std::string, Turista *> map_turistas;

void coleccion_guardarExperiencia(Experiencia *exp)
{
	experiencias.push_back(exp);
	std::pair<std::string, Experiencia *> entry(exp->getCodigoReserva(), exp);
	map_experiencias.insert(entry);
}
void coleccion_eliminarExperiencia(Experiencia *exp)
{
	experiencias.remove(exp);
	map_experiencias.erase(exp->getCodigoReserva());
}

void coleccion_guardarTurista(Turista *tur)
{
	turistas.push_back(tur);
	std::pair<std::string, Turista *> entry(tur->getCi(), tur);
	map_turistas.insert(entry);
}

Turista *coleccion_getTurista(std::string ci)
{
	return map_turistas[ci];
}

Experiencia *coleccion_getExperiencia(std::string codigoReserva)
{
	return map_experiencias[codigoReserva];
}

// Crear los siguientes objetos de la clase Alojamiento (con el constructor por
// parámetros):
// codigoReserva -> ALX5489
// descripcion -> Hotel moderno
// precioBase -> 30
// fecha -> 18/05/2020
// hotel -> Hotel Lindorf
// regimen -> AllInclusive
// cantNoches -> 5
//
// codigoReserva -> ALJ4789
// descripcion -> Todas las habitaciones con vista al mar
// precioBase -> 100
// fecha -> 10/02/2025
// hotel -> Hotel SeaView
// regimen -> MediaPension
// cantNoches -> 15
void parte_a()
{
}

// Crear los siguientes objetos de la clase TourGuiado:
// codigoReserva -> TGO4657
// descripcion  -> Plazas de Montevideo
// precioBase -> 10
// fechas -> 29/08/2024
// agencia -> PaseoS SA
// lugaresVisitados -> Plaza Independencia, Plaza Matriz
//
// codigoReserva -> TGR3257
// descripcion  -> Puntos emblematicos
// precioBase -> 5
// fechas -> 29/08/2024
// agencia -> Recorre
// lugaresVisitados -> Puerta de la Ciudadela, Mausoleo, Cabildo, Palacio Salvo
void parte_b()
{
}

// Crear los siguientes objetos de la clase EventoCultural:
// codigoReserva -> ECP1346
// descripcion -> Danza en el Solis
// precioBase -> 10
// fecha -> 29/10/2025
// Ubicacion -> Teatro Solis
// usoCupon -> true
void parte_c()
{
}

// d. Imprimir en consola utilizando la inserción de flujo el resultado de ejecutar la
// operación getDT() para cada uno de los objetos Experiencia creados
void parte_d()
{
	for(std::list<Experiencia*>::iterator it = experiencias.begin(); it != experiencias.end(); ++it) {
        std::cout << (*it)->getDT() << std::endl;
    }
}

// Crear los siguientes objetos de la clase Turista:
// 4.951.278-9, Vanesa Castro, vcastro.uy@servidor.net
// 1.535.442-0, Karen Santos, karen.s89@internet.uy
void parte_e()
{
}

// Imprimir en consola el resultado de ejecutar la operación toString para cada uno
//  de los objetos Turista creados
void parte_f()
{
}

// Registrar las siguientes relaciones entre turistas y experiencias (creando links de la
// relación en ambas direcciones):
// 4.951.278-9 (Vanesa Castro) -> ALX5489 (Hotel moderno)
// 4.951.278-9 (Vanesa Castro) -> ALJ4789 (Todas las habitaciones con vista al mar)
// 4.951.278-9 (Vanesa Castro) -> TGR3257 (Puntos emblematicos)
// 4.951.278-9 (Vanesa Castro) -> ECP1346 (Danza en el Solis)
// 1.535.442-0 (Karen Santos) -> TGO4657 (Plazas de Montevideo)
// 1.535.442-0 (Karen Santos) -> TGR3257 (Puntos emblematicos)
void parte_g()
{
}

// Invocar la operación listarExperiencias(10/12/2023, 0, 1000) para
//  la turista 4.951.278-9 (Vanesa Castro) e imprimir el resultado en consola (un string
//  por línea)
void parte_h(){
	Turista* tur =coleccion_getTurista(4.951.278-9);
	list<string> imprimirExperiencias = tur->listarExperiencias(10/12/2023,0,1000);
	for (list<string>::iterator it=imprimirExperiencias.begin();it != imprimirExperiencias.end();++it){
		string codExp= *it;
		string descExp= coleccion_getExperiencia(codExp)->getDescripcion();
		cout<< codExp << "(" << descExp << ")" <<endl;
	}
}

// Ejecutar la eliminación del objeto TGR3257(Puntos emblematicos) de la clase
// Experiencia
void parte_i(){
	Experiencia* borrar =coleccion_getExperiencia(TGR3257);
	set<Turista*> turistas = borrar->getTuristas();
	for(set<Turista*>::iterator it=turistas.begin();it != turistas.end();++it){
		it->experiencias.erase(borrar);
	}
	coleccion_eliminarExperiencia(borrar);
	delete borrar;
}

// Invocar la operación listarExperiencias(10/10/2020, 0, 1000)
// para la turista 1.535.442-0 (Karen Santos) e imprimir el resultado en consola (un
// string por línea)
void parte_j()
{
}

// Imprimir en consola utilizando la inserción de flujo el resultado de ejecutar la
// operación getDT() para cada uno de los objetos Experiencias creados (mismo
// código que la parte d)
void parte_k()
{
	for(std::list<Experiencia*>::iterator it = experiencias.begin(); it != experiencias.end(); ++it) {
        std::cout << (*it)->getDT() << std::endl;
    }
} 

void cleanUp()
{
}

int main()
{
	std::cout << "parte_a" << std::endl;
	parte_a();
	std::cout << "parte_b" << std::endl;
	parte_b();
	std::cout << "parte_c" << std::endl;
	parte_c();
	std::cout << "parte_d" << std::endl;
	parte_d();
	std::cout << "parte_e" << std::endl;
	parte_e();
	std::cout << "parte_f" << std::endl;
	parte_f();
	std::cout << "parte_g" << std::endl;
	parte_g();
	std::cout << "parte_h" << std::endl;
	parte_h();
	std::cout << "parte_i" << std::endl;
	parte_i();
	std::cout << "parte_j" << std::endl;
	parte_j();
	std::cout << "parte_k" << std::endl;
	parte_k();
	std::cout << "cleanUp" << std::endl;
	cleanUp();
	std::cout << "fin" << std::endl;

	return 0;
}
