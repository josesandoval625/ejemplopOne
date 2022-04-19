#include "Tarea.h"

Tarea::Tarea()
{
}

Tarea::Tarea(int id, fecha fechaDeCreacion, string nombre, Urgencia _urgencia, int personaRequeridas, int tiempoEstimado, Estado _estado)
:Id(id),FechaDeCreacion(fechaDeCreacion),Nombre(nombre),urgencia(_urgencia),PersonaRequeridas(personaRequeridas),TiempoEstimado(tiempoEstimado),estado(_estado)
{
}
int Id;
fecha FechaDeCreacion;//fecha
string Nombre;
Urgencia urgencia;
int PersonaRequeridas;
int TiempoEstimado;
Estado estado;//estado
Tarea::~Tarea()
{
}

int Tarea::getId() const
{
	return this->Id;
}

string Tarea::getFechaDeCreacion()
{
	return this->FechaDeCreacion.getData();
}

string Tarea::getUrgencia() const
{
	switch (urgencia)
	{
	case Urgencia::SI:
		return "URGENTE.";
		break;
	case Urgencia::NO:
		return "NO-URGENTE.";
		break;
	default:
		return "ERROR";
		break;
	}
}

int Tarea::getPersonasRequeridas() const
{
	return this->PersonaRequeridas;
}

int Tarea::getTiempoEstimado() const
{
	return this->TiempoEstimado;
}

string Tarea::getEstado() const
{
	switch (estado)
	{
	case Estado::ESPERA:
		return "ESPERA.";
		break;
	case Estado::PROCESO:
		return "PROCESO";
		break;
	case Estado::TERMINADO:
		return "TERMINADO";
		break;
	default:
		return "ERROR";
		break;
	}
}

//void Tarea::setFechaDeCracion(Fecha fechaDeCreacion)
//{
//	this->FechaDeCreacion = fechaDeCreacion;
//}

void Tarea::setNombre(string nombre)
{
	this->Nombre = nombre;
}

void Tarea::setUrgencia(Urgencia _urgencia)
{
	this->urgencia = _urgencia;
}

void Tarea::setPersonasRequeridas(int personasRequeridas)
{
	this->PersonaRequeridas = personasRequeridas;
}

void Tarea::setTiempoDeEstado(int tiempoDeEstado)
{
	this->TiempoEstimado = tiempoDeEstado;
}

void Tarea::setEstado(Estado _estado)
{
	this->estado=_estado;
}

string Tarea::getTareaDato()
{
	//nombre-personas requeridas-tiempo estimado-urgencia-estado-fecha de creacion
	return this->Nombre + " - " + to_string(this->PersonaRequeridas) + " - " + to_string(this->TiempoEstimado) + " - " + this->getUrgencia() + " - " + this->getEstado() + " - " + this->FechaDeCreacion.getData() + "\n";
}
