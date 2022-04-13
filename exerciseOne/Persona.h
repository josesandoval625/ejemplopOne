#pragma once
#include<string>
#include<iostream>
#include<sstream>
#include<stdlib.h>
using namespace std;
class Persona
{

private:
	int Id;
	string PrimerNombre;
	string SegundoNombre;
	string PrimerApellido;
	string SegundoApellido;
	string Genero;
	int Edad;
	string Cargo;
public:
	Persona();
	Persona(int, string, string, string, string, string, int, string);
	Persona(const Persona&);//copy constructor
	Persona& operator=(const Persona&);//assigment operator
	~Persona();
	int getId()const;
	string getPrimerNombre()const;
	string getSegundoNombre()const;
	string getPrimerApellido()const;
	string getSegundoApellido()const;
	string getGenero()const;
	int getEdad()const;
	string getCargo()const;

	void setPrimerNombre(const string& primerNombre);
	void setSegundoNombre(const string& segundoNombre);
	void setPrimerApellido(const string& primerApellido);
	void setSegundoApellido(const string&segundoApellido);
	void setGenero(const string& genero);
	void setEda(const int& edad);
	void setCargo(const string cargo);

	string getPersonaData();








};

