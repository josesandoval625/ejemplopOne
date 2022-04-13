#include"Persona.h"

int main()
{
	cout << "hello world" << endl;
	Persona* hijo = new Persona(1, "jose", "luis", "sandoval", "horna", "masculino", 32, "hijo menor");
	cout << hijo->getPersonaData();

	return 0;
}