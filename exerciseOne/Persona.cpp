#include "Persona.h"


Persona::Persona()
{
}

Persona::Persona(int id, string primerNombre, string segundoNombre, string primerApellido, string segundoApellido, string genero, int edad, string cargo)
	:Id(id), PrimerNombre(primerNombre),SegundoNombre(segundoNombre),PrimerApellido(primerApellido),SegundoApellido(segundoApellido),Genero(genero),Edad(edad),Cargo(cargo)
{
}



Persona::Persona(const Persona& persona)
{
	this->Id = persona.Id;
	this->PrimerNombre = persona.PrimerNombre;
	this->SegundoNombre = persona.SegundoNombre;
	this->PrimerApellido = persona.PrimerApellido;
	this->SegundoApellido = persona.SegundoApellido;
	this->Genero = persona.Genero;
	this->Edad = persona.Edad;
	this->Cargo = persona.Cargo;
}

Persona& Persona::operator=(const Persona& persona)
{
	if (this != &persona)
	{
		this->Id = persona.Id;
		this->PrimerNombre = persona.PrimerNombre;
		this->SegundoNombre = persona.SegundoNombre;
		this->PrimerApellido = persona.PrimerApellido;
		this->SegundoApellido = persona.SegundoApellido;
		this->Genero = persona.Genero;
		this->Edad = persona.Edad;
		this->Cargo = persona.Cargo;
	}
	return *this;
	// TODO: insert return statement here
}

Persona::~Persona()
{
}

int Persona::getId() const
{
	return this->Id;
}

string Persona::getPrimerNombre() const
{
	return this->PrimerNombre;
}

string Persona::getSegundoNombre() const
{
	return this->SegundoNombre;
}

string Persona::getPrimerApellido() const
{
	return this->PrimerApellido;
}

string Persona::getSegundoApellido() const
{
	return this->SegundoApellido;
}

string Persona::getGenero() const
{
	return this->Genero;
}

int Persona::getEdad() const
{
	return this->Edad;
}

string Persona::getCargo() const
{
	return this->Cargo;
}

void Persona::setPrimerNombre(const string& primerNombre)
{
	this->PrimerApellido = primerNombre;
}

void Persona::setSegundoNombre(const string& segundoNombre)
{
	this->SegundoApellido = segundoNombre;
}

void Persona::setPrimerApellido(const string& primerApellido)
{
	this->PrimerApellido = primerApellido;
}

void Persona::setSegundoApellido(const string& segundoApellido)
{
	this->SegundoApellido = segundoApellido;
}

void Persona::setGenero(const string& genero)
{
	this->Genero = genero;
}

void Persona::setEda(const int& edad)
{
	this->Edad=edad;
}

void Persona::setCargo(const string cargo)
{
	this->Cargo=cargo;
} 

string Persona::getPersonaData()
{
	stringstream buffer;
	buffer << "id................: " <<Id<< endl;
	buffer << "primer nombre.....:" << PrimerNombre <<endl;
	buffer << "segundo nombre....:" << SegundoNombre <<endl;
	buffer << "primerapellido....:" << PrimerApellido <<endl;
	buffer << "segundo apellido..:" << SegundoApellido <<endl;
	buffer << "genero............:" << Genero <<endl;
	buffer << "edad..............:" << Edad <<endl;
	buffer << "cargo.............:" << Cargo <<endl;
	return buffer.str();
}
