#include <cstring>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

float sueldo;
char puesto[30];
char nombre[40];

void leer() {
  cin >> sueldo;
  gets(puesto);
  gets(nombre);
}

class empleado {
public:
  float sueldo;
  char puesto[30];
  char nombre[40];
  empleado(){};
  empleado(float, char *, char *);
  void muestra();
};

empleado::empleado(float sueldo, char *puesto, char *nombre) {
  empleado::sueldo = sueldo;
  strcpy(empleado::puesto, puesto);
  strcpy(empleado::nombre, nombre);
}

void empleado::muestra() {
  cout << sueldo << endl;
  cout << nombre << endl;
  cout << puesto << endl;
}

int main() {
  empleado obj1(12000, "Progrmador", "Angel Rivera");
  obj1.muestra();
  leer();
  empleado obj2(sueldo, puesto, nombre);
  obj2.muestra();
  return 0;
}
