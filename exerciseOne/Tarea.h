#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include"TipoDeDatoFecha.h"
#include"TipoDeDatoGeneral.h"
using namespace std;
class Tarea
{
private:
	int Id;
	fecha FechaDeCreacion;//fecha
	string Nombre;
	Urgencia urgencia;
	int PersonaRequeridas;
	int TiempoEstimado;
	Estado estado;//estado

public:
	Tarea();
	Tarea(int, fecha, string, Urgencia, int, int, Estado);
	~Tarea();

	int getId()const;
	string getFechaDeCreacion()const;
	string getUrgencia()const;
	int getPersonasRequeridas()const;
	int getTiempoEstimado()const;
	string getEstado()const;

	void setFechaDeCracion(Fecha fecha);
	void setNombre(string nombre);
	void setUrgencia(Urgencia urgencia);
	void setPersonasRequeridas(int personasRequeridas);
	void setTiempoDeEstado(int tiempoDeEstado);
	void setEstado(Estado estado);

	string getTareaDato();
	//---





};

