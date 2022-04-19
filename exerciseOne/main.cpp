#include"Persona.h"
//#include"TipoDeDatoFecha.h"

#include "Tarea.h"
int main()
{
    cout << "hello world" << endl;
    Persona* hijo = new Persona(1, "jose", "luis", "sandoval", "horna", "masculino", 32, "hijo menor");
    cout << hijo->getPersonaData();
    Dia dia = Dia::LUNES;
    cout << static_cast<unsigned>(dia);
    Dia segundoDia = Dia::LUNES;
    Mes mes = Mes::ABRIL;
    fecha hoy(23, segundoDia , mes, 2022);
    cout << hoy.getData();
    return 0;
}