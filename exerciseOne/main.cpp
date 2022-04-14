#include"Persona.h"
#include"TipoDeDatoFecha.h"
int main()
{
	cout << "hello world" << endl;
	Persona* hijo = new Persona(1, "jose", "luis", "sandoval", "horna", "masculino", 32, "hijo menor");
	cout << hijo->getPersonaData();
	Dia dia = Dia::LUNES;
	cout << static_cast<unsigned>(dia);
	return 0;
}