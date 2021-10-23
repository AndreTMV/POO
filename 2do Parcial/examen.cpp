#include <cstring>
#include <iostream>
using namespace std;

class Venta {
public:
  char nombre[40];
  int edad;
  char puesto[40];
  int sueldo;
  Venta(char *, int, char *, int);
  Venta(char *, int);
};

Venta::Venta(char *nombre, int edad, char *puesto, int sueldo) {
  strcpy(Venta::nombre, nombre);
  Venta::edad = edad;
  strcpy(Venta::puesto, puesto);
  Venta::sueldo = sueldo;
}

Venta::Venta(char *nombre, int edad) {
  strcpy(Venta::nombre, nombre);
  Venta::edad = edad;
}

int main() { return 0; }
