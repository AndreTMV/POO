#include <cstring>
#include <iostream>
using namespace std;
int edad, registro;
char nombre[40];

void leer(int ban)
{
    if (ban == 0)
    {
        cout << "Registro: ";
        cin >> registro;
    }
    else
    {
        cout << "Edad: ";
        cin >> edad;
        cout << "Nombre: ";
        cin.get();
        cin.get(nombre, 40);
    }
}
class Persona
{
public:
    int Edad;
    char Nombre[40];
    Persona(char *, int);
    ~Persona();
    void Muestra();
};

class estudiante : public Persona
{
public:
    int Registro;
    estudiante(int, int, char *);
    ~estudiante();
    void Muestra();
};

Persona::Persona(char *Nombre, int Edad)
{
    strcpy(Persona::Nombre, nombre);
    this->Edad = edad;
}
Persona::~Persona()
{
    cout << "Borrando el objeto" << endl;
}
void Persona::Muestra()
{
    cout << "Nombre: " << Nombre << endl;
    cout << "Edad: " << Edad << endl;
}
estudiante::estudiante(int Registro, int Edad, char *Nombre) : Persona(Nombre, Edad)
{
    this->Registro = registro;
}
estudiante::~estudiante()
{
    cout << "Borrando el objeto" << endl;
}
void estudiante::Muestra()
{
    cout << "Nombre: " << Nombre << endl;
    cout << "Edad: " << Edad << endl;
    cout << "Registro: " << Registro << endl;
}
int main(int argc, char const *argv[])
{
    int opcion = 0;
    while (opcion != 3)
    {
        std::cout << "--------------------------------------------------"
                  << std::endl;
        cout << "Opciones:\nCrear objeto de persona(1)\nCrear objeto de estudiante(2) "
                "\nSalir(3)"
             << endl;
        std::cout << "Su opcion: ";
        cin >> opcion;
        std::cout << "--------------------------------------------------"
                  << std::endl;
        switch (opcion)
        {
        case 1:
        {
            cout << "Creando objeto de persona" << endl;
            leer(1);
            Persona obj1(nombre, edad);
            cout << "Mostrando valores" << endl;
            obj1.Muestra();
            break;
        }
        case 2:
        {
            cout << "Creando objeto de estudiante" << endl;
            leer(0);
            estudiante obj(registro, edad, nombre);
            cout << "Mostrando valores" << endl;
            obj.Muestra();
            break;
        }
        case 3:
            cout << "Que tenga bonito día" << endl;
            break;
        default:
            cout << "No conozco esa opcion" << endl;
            break;
        }
    }

    return 0;
}
