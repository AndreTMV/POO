//Conclusion --> windows es una mierda
#include <cstring>
#include <iostream>
using std::cout, std::cin, std::endl;

float sueldo;
char puesto[30], nombre[40];

void leer()
{
    cout << "Sueldo: ";
    cin >> sueldo;
    cout << "Puesto: ";
    fflush(stdout);
    fgets(puesto, 30, stdin);
    cin.ignore();
    cout << "Nombre: ";
    fflush(stdout);
    fgets(puesto, 30, stdin);
}
// constructor -> inicializa los objetos,lleva el mismo nombre de la clase
// Cuidar que no exista ambigüedad
class empleado
{
public:
    float sueldo;
    char puesto[30];
    char nombre[40];
    empleado(){};
    empleado(float, char *, char *);
    void muestra();
};
empleado::empleado(float sueldo, char *puesto, char *nombre)
{
    empleado::sueldo = sueldo;
    strcpy(empleado::puesto, puesto);
    strcpy(empleado::nombre, nombre);
}

void empleado::muestra()
{
    cout << "Sueldo: " << sueldo << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Puesto: " << puesto << endl;
}

int main()
{
    empleado ob1(0, " ", " ");
    empleado obj1(12000, "Programador", "André Mejía");
    cout << "Objeto 1:" << endl;
    obj1.muestra();
    cout << "Leyendo datos: " << endl;
    leer();
    empleado obj2(sueldo, puesto, nombre);
    cout << "Objeto 2:" << endl;
    obj2.muestra();
    return 0;
}
