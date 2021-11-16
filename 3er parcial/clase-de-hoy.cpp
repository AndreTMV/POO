//realizar un programa en c++ que contenga constructores, destructores, herencia simple, objetos y clases
//que evalue el siguiente menu:
// caso a, crear y mostrar un objeto de la clase articulo que contendra descripcion, y costo(clase base)
#include <cstring>
#include <iostream>
using namespace std;
int edad, registro, nomina;
char nombre[40], puesto[40];

void leer(int ban)
{
    if (ban == 0)
    {
        cout << "Registro: ";
        cin >> registro;
    }
    else if (ban == 1)
    {
        cout << "Nomina: ";
        cin >> nomina;
        cout << "Puesto: ";
        cin.get();
        cin.get(puesto, 40);
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

class estudiante
{
public:
    int Registro;
    estudiante(int, int, char *);
    ~estudiante();
    void Muestra();
};
class profesor : public Persona, public estudiante
{
public:
    int nomina;
    char puesto[40];
    profesor(char *, int, int, char *, int);
    void imprimirProfesor();
    ~profesor();
};

profesor::profesor(char *Nombre, int Edad, int Registro, char *puesto, int nomina) : Persona(Nombre, Edad), estudiante(Registro, Edad, Nombre)
{
    strcpy(profesor::puesto, puesto);
    this->nomina = nomina;
}

profesor::~profesor()
{
    cout << "Destruyendo objeto en profesor" << endl;
}

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

estudiante::estudiante(int Registro, int Edad, char *Nombre)
{
    this->Registro = registro;
}

estudiante::~estudiante()
{
    cout << "Borrando el objeto" << endl;
}

void estudiante::Muestra()
{
    cout << "Registro: " << Registro << endl;
}
void profesor::imprimirProfesor()
{
    cout << "Nomina: " << nomina << endl;
    cout << "Puesto: " << puesto << endl;
}
int main(int argc, char const *argv[])
{
    int opcion = 0;
    while (opcion != 4)
    {
        std::cout << "--------------------------------------------------"
                  << std::endl;
        cout << "Opciones:\nCrear objeto de persona(1)\nCrear objeto de estudiante(2) "
                "\nCrear objeto de profesor(3)\nSalir(4)"
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
            leer(3);
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
        {
            cout << "Creando objeto de profesor" << endl;
            leer(1);
            profesor obj1(nombre, edad, registro, puesto, nomina);
            cout << "Mostrando valores" << endl;
            obj1.imprimirProfesor();
            break;
        }
        case 4:
            cout << "Que tenga bonito día" << endl;
            break;
        default:
            cout << "No conozco esa opcion" << endl;
            break;
        }
    }
    return 0;
}
