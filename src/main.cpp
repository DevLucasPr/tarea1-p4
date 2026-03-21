#include "../include/Alojamiento.h"
#include "../include/DTExpe.h"
#include "../include/DTFecha.h"
#include "../include/Experiencia.h"
#include "../include/TipoRegimen.h"
#include "../include/TourGuiado.h"
#include "../include/Turista.h"
#include "../include/EventoCultural.h"

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
	DTFecha f1(18, 05, 2020);
	DTFecha f2(10, 02, 2025);

	Alojamiento *Aloj = new Alojamiento("ALX5489","Hotel moderno",30,f1,"Hotel Lindorf",AllInclusive,5);
	Alojamiento *Aloj2 = new Alojamiento("ALJ4789","Todas las habitaciones con vista al mar",100,f2,"Hotel SeaView",MediaPension,15);

	coleccion_guardarExperiencia(Aloj);
	coleccion_guardarExperiencia(Aloj2);
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
	DTFecha f3(29,8,2024);
	DTFecha f4(29,8,2024);

	std::set<std::string> lg1;
	std::set<std::string> lg2;
	lg1.insert("Plaza Independencia");
	lg1.insert("Plaza Matriz");
	lg2.insert("Puerta de la Ciudadela");
	lg2.insert("Mausoleo");
	lg2.insert("Cabildo");
	lg2.insert("Palacio Salvo");

	TourGuiado *TG = new TourGuiado("TGO4657","Plazas de Montevideo",10,f3,"Paseos SA",lg1);
	TourGuiado *TG2 = new TourGuiado("TGR3257","Puntos emblematicos",5,f4,"Recorre",lg2);

	coleccion_guardarExperiencia(TG);
	coleccion_guardarExperiencia(TG2);
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
	DTFecha f5(29,10,2025);
	EventoCultural *EC = new EventoCultural("ECP1346","Danza en el Solis",10,f5,"Teatro Solis",true);

	coleccion_guardarExperiencia(EC);
}

// d. Imprimir en consola utilizando la inserción de flujo el resultado de ejecutar la
// operación getDT() para cada uno de los objetos Experiencia creados
void parte_d()
{
	for (std::list<Experiencia *>::iterator it = experiencias.begin(); it != experiencias.end(); ++it)
	{
		std::cout << (*it)->getDT() << std::endl;
	}
}

// Crear los siguientes objetos de la clase Turista:
// 4.951.278-9, Vanesa Castro, vcastro.uy@servidor.net
// 1.535.442-0, Karen Santos, karen.s89@internet.uy
void parte_e()
{
	Turista *turista1 = new Turista("4.951.278-9", "Vanesa Castro", "vcastro.uy@servidor.net");
	coleccion_guardarTurista(turista1);

	Turista *turista2 = new Turista("1.535.442-0", "Karen Santos", "karen.s89@internet.uy");
	coleccion_guardarTurista(turista2);
}

// Imprimir en consola el resultado de ejecutar la operación toString para cada uno
//  de los objetos Turista creados
void parte_f()
{
	list<Turista *>::const_iterator iteradorTurista;
	for (iteradorTurista = turistas.begin(); iteradorTurista != turistas.end(); ++iteradorTurista)
	{
		Turista *turista = *iteradorTurista;
		cout << turista->toString() << endl;
	}
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
	Turista *vanesa = coleccion_getTurista("4.951.278-9");
	Turista *karen = coleccion_getTurista("1.535.442-0");

	Experiencia *expHotelModerno = coleccion_getExperiencia("ALX5489");
	Experiencia *expHabVistaMar = coleccion_getExperiencia("ALJ4789");
	Experiencia *expPuntosEmb = coleccion_getExperiencia("TGR3257");
	Experiencia *expDanzaSolis = coleccion_getExperiencia("ECP1346");
	Experiencia *expPlazasMvd = coleccion_getExperiencia("TGO4657");

	// Experiencias Vanesa
	expHotelModerno->agregarTurista(vanesa);
	vanesa->agregarExperiencia(expHotelModerno);

	expHabVistaMar->agregarTurista(vanesa);
	vanesa->agregarExperiencia(expHabVistaMar);

	expPuntosEmb->agregarTurista(vanesa);
	vanesa->agregarExperiencia(expPuntosEmb);

	expDanzaSolis->agregarTurista(vanesa);
	vanesa->agregarExperiencia(expDanzaSolis);

	// Experiencias Karen

	expPuntosEmb->agregarTurista(karen);
	karen->agregarExperiencia(expPuntosEmb);

	expPlazasMvd->agregarTurista(karen);
	karen->agregarExperiencia(expPlazasMvd);
}

// Invocar la operación listarExperiencias(10/12/2023, 0, 1000) para
//  la turista 4.951.278-9 (Vanesa Castro) e imprimir el resultado en consola (un string
//  por línea)
void parte_h()
{
	Turista *tur = coleccion_getTurista("4.951.278-9");
	DTFecha fecha = DTFecha(10, 12, 2023);
	list<string> imprimirExperiencias = tur->listarExperiencias(fecha, 0, 1000);
	for (list<string>::iterator it = imprimirExperiencias.begin(); it != imprimirExperiencias.end(); ++it)
	{
		std::cout << *it << std :: endl;
	}
}


// Ejecutar la eliminación del objeto TGR3257(Puntos emblematicos) de la clase
// Experiencia
void parte_i()
{
	Experiencia *borrar = coleccion_getExperiencia("TGR3257");
	set<Turista *> turistas = borrar->getTuristas();

	for (set<Turista *>::iterator it = turistas.begin(); it != turistas.end(); ++it)
	{
		Turista *turistaBorrar = *it;
		turistaBorrar->eliminarExperiencia(borrar);
	}

	coleccion_eliminarExperiencia(borrar);
	delete borrar;
}

// Invocar la operación listarExperiencias(10/10/2020, 0, 1000)
// para la turista 1.535.442-0 (Karen Santos) e imprimir el resultado en consola (un
// string por línea)
void parte_j()
{
	Turista *turista = coleccion_getTurista("1.535.442-0");
	list<string> experiencias = turista->listarExperiencias(DTFecha(10, 10, 2020), 0, 1000);
	for (list<string>::iterator it = experiencias.begin(); it != experiencias.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}

// Imprimir en consola utilizando la inserción de flujo el resultado de ejecutar la
// operación getDT() para cada uno de los objetos Experiencias creados (mismo
// código que la parte d)
void parte_k()
{
	for (std::list<Experiencia *>::iterator it = experiencias.begin(); it != experiencias.end(); ++it)
	{
		std::cout << (*it)->getDT() << std::endl;
	}
}

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
