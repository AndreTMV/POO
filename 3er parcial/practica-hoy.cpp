//realizar un programa en c++ que contenga constructores, destructores, herencia simple, objetos y clases
//que evalue el siguiente menu:
//caso a, crear y mostrar un objeto de la clase articulo que contendra descripcion, y costo(clase base)
//caso b, crear y mostrar un objeto de la clase heredada venta que va a  contener lo de la clase base mas sus atributos --> venta total + los de la clase base
//caso s salir
#include <iostream>
#include <cstring>
using std::string, std::cout, std::cin, std::endl;
float costo, ventaTotal;
char descripcion[40], rfc[40];

void leer(int ban)
{
    if (ban == 0)
    {
        cout << "Venta total: ";
        cin >> ventaTotal;
    }
    else if (ban == 1)
    {
        cout << "RFC: ";
        cin.get();
        cin.get(rfc, 40);
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
class venta
{
public:
    float ventaTotal;
    venta(float);
    ~venta();
    void muestra();
};

venta::venta(float ventaTotal)
{
    this->ventaTotal = ventaTotal;
}

venta::~venta()
{
    cout << "Destruyendo objeto en venta" << endl;
}
void venta::muestra()
{
    cout << "Venta total: " << ventaTotal << endl;
}

class factura : public articulo, public venta
{
public:
    char RFC[40];
    factura(char *, float, char *, float);
    ~factura();
    void muestra();
};

factura::factura(char *RFC, float ventaTotal, char *descripcion, float costo) : venta(ventaTotal), articulo(descripcion, costo)
{
    strcpy(this->RFC, RFC);
}

factura::~factura()
{
    cout << "Destruyendo objeto en factura" << endl;
}

void factura::muestra()
{
    cout << "descripcion: " << descripcion << endl;
    cout << "costo: " << costo << endl;
    cout << "Venta total: " << ventaTotal << endl;
    cout << "RFC: " << RFC << endl;
}
int main(int argc, char const *argv[])
{
    char opcion;
    while (opcion != 's')
    {
        std::cout << "--------------------------------------------------"
                  << std::endl;
        cout << "Opciones:\nCrear objeto de articulo(a)\nCrear objeto de venta(b) "
                "\nCrear objeto de factura(c)\nSalir(s)"
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
            leer(3);
            articulo obj1(descripcion, costo);
            cout << "Mostrando valores" << endl;
            obj1.muestra();
            break;
        }
        case 'b':
        {
            cout << "Creando objeto de venta" << endl;
            leer(0);
            venta obj(ventaTotal);
            cout << "Mostrando valores" << endl;
            obj.muestra();
            break;
        }
        case 'c':
        {
            cout << "Creando objeto en factura" << endl;
            leer(1);
            factura obj1(rfc, ventaTotal, descripcion, costo);
            obj1.muestra();
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
