#pragma once
#include<string>
#include<sstream>
using namespace std;
enum class Dia {LUNES=1,MARTES=2,MIERCOLES=3,JUEVES=4,VIERNES=5,SABADO=6,DOMINGO=7};
enum class Mes{ENERO=1,FEBRERO=2,MARZO=3,ABRIL=4,MAYO=5,JUNIO=6,JULIO=7,AGOSTO=8,SEPTIEMBRE=9,OCTUBRE=10,NOVIEMBRE=11,DICIEMBRE=12};
struct Fecha
{
private:
	int DiaNumero;
	Dia DiaNombre;
	Mes MesDelAnio;
<<<<<<< HEAD
	int Anio;
=======
	int anio;
>>>>>>> master
public:
	Fecha(int dia, Dia _dia, Mes _mes, int anio);
	~Fecha();
	int getDiaNumero()const;
	string getDiaNombre()const;
<<<<<<< HEAD
	string getMesDelAnio()const;
=======
	string getMes()const;
>>>>>>> master
	int getAnio()const;

	void setDiaNumero(const int& dia);
	void setDiaNombre(const Dia& dia);
<<<<<<< HEAD
	void setMesDelAnio(const Mes& mes);
	void setAnio(const int& anio);
	string getData();
};
typedef struct Fecha fecha;
=======
	void setMes(const Mes& mes);
	void setAnio(const int& anio);
	string getData();

};
>>>>>>> master
