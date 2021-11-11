//realizar un programa en c++ que contenga constructores, destructores, herencia simple, objetos y clases
//que evalue el siguiente menu:
//caso a, crear y mostrar un objeto de la clase articulo que contendra descripcion, y costo(clase base)
//caso b, crear y mostrar un objeto de la clase heredada venta que va a  contener lo de la clase base mas sus atributos --> venta total + los de la clase base
//caso s salir
#include <iostream>
#include <cstring>
using std::string, std::cout, std::cin, std::endl;
float costo, ventaTotal;
char descripcion[40];

void leer(int ban)
{
    if (ban == 0)
    {
        cout << "Venta total: ";
        cin >> ventaTotal;
    }
    else
    {
        cout << "Costo: ";
        cin >> costo;
        cout << "Descripcion: ";
        cin.get();
        cin.get(descripcion, 40);
    }
}
class articulo
{
public:
    char descripcion[50];
    float costo;
    articulo(char *, float);
    ~articulo();
    void muestra();
};

articulo::articulo(char *descripcion, float costo)
{
    std::strcpy(articulo::descripcion, descripcion);
    this->costo = costo;
}

articulo::~articulo()
{
    cout << "Destruyendo objeto en articulo" << endl;
}

void articulo::muestra()
{
    cout << "descripcion: " << descripcion << endl;
    cout << "costo: " << costo << endl;
}
class venta : public articulo
{
public:
    float ventaTotal;
    venta(float, float, char *);
    ~venta();
    void muestra();
};

venta::venta(float ventaTotal, float costo, char *descripcion) : articulo(descripcion, costo)
{
    this->ventaTotal = ventaTotal;
}

venta::~venta()
{
    cout << "Destruyendo objeto en venta" << endl;
}
void venta::muestra()
{
    cout << "descripcion: " << descripcion << endl;
    cout << "costo: " << costo << endl;
    cout << "Venta total: " << ventaTotal << endl;
}
int main(int argc, char const *argv[])
{
    char opcion;
    while (opcion != 's')
    {
        std::cout << "--------------------------------------------------"
                  << std::endl;
        cout << "Opciones:\nCrear objeto de articulo(a)\nCrear objeto de venta(b) "
                "\nSalir(s)"
             << endl;
        std::cout << "Su opcion: ";
        cin >> opcion;
        std::cout << "--------------------------------------------------"
                  << std::endl;
        switch (opcion)
        {
        case 'a':
        {
            cout << "Creando objeto de articulo" << endl;
            leer(1);
            articulo obj1(descripcion, costo);
            cout << "Mostrando valores" << endl;
            obj1.muestra();
            break;
        }
        case 'b':
        {
            cout << "Creando objeto de venta" << endl;
            leer(0);
            venta obj(ventaTotal, costo, descripcion);
            cout << "Mostrando valores" << endl;
            obj.muestra();
            break;
        }
        case 's':
            cout << "Que tenga bonito día" << endl;
            break;
        default:
            cout << "No conozco esa opcion" << endl;
            break;
        }
    }

    return 0;
}
