// presentacion-sonia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <cmath>
using std::cout, std::cin, std::endl;

template <typename T>
class linea
{
public:
    struct punto
    {
        T x, y;
    };
    punto punto1, punto2;
    float longitud;
    linea();
    linea(T, T, T, T);
    bool operator>(const linea &);
    bool operator!=(const linea &);
};

template <typename T>
linea<T>::linea(T x1, T y1, T x2, T y2)
{
    this->punto1.x = x1;
    this->punto1.y = y1;
    this->punto2.x = x2;
    this->punto2.y = y2;
    this->longitud = sqrt(pow((punto2.x - punto1.x), 2) + pow((punto2.y - punto1.y), 2));
}
template <typename T>
linea<T>::linea()
{
    this->punto1.x = 0;
    this->punto1.y = 0;
    this->punto2.x = 0;
    this->punto2.y = 0;
    this->longitud = 0.0;
}
template <typename T>
bool linea<T>::operator>(const linea &p)
{
    if (this->longitud > p.longitud)
    {
        return true;
    }
    else
        return false;
}
template <typename T>
bool linea<T>::operator!=(const linea &p)
{
    if (this->punto1.x != p.punto1.x && this->punto2.y != p.punto2.y)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    linea<int> x(6, 7, 8, 9);
    linea<int> y(6, 7, 8, 9);
    linea<float> linea1(4.5, 1.2, 9.8, 1.9);
    linea<float> linea2(3.5, 0.2, 5.8, 1.1);
    cout << "-------------------Ejemplo 1---------------------------" << endl;
    cout << "Longitud linea x: " << x.longitud << endl;
    cout << "Longitud linea y: " << y.longitud << endl;
    if (x > y)
    {
        cout << "Linea x es mayor que la linea y" << endl;
    }
    else
        cout << "Linea x es menor que la linea y" << endl;
    if (x != y)
    {
        cout << "Las lineas si son diferentes" << endl;
    }
    else
        cout << "Las lineas no son diferentes" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "-------------------Ejemplo 2---------------------------" << endl;
    cout << "Longitud linea 1: " << linea1.longitud << endl;
    cout << "Longitud linea 2: " << linea2.longitud << endl;
    if (linea1 > linea2)
    {
        cout << "Linea x es mayor que la linea y" << endl;
    }
    else
        cout << "Linea x es menor que la linea y" << endl;
    if (linea1 != linea2)
    {
        cout << "Las lineas si son diferentes" << endl;
    }
    else
        cout << "Las lineas no son diferentes" << endl;
    cout << "-------------------------------------------------------" << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
