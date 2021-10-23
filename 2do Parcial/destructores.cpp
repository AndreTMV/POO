#include <cstring>
#include <iostream>
using std::cout, std::cin, std::endl;

float sueldo;
char puesto[30], nombre[40];

void leer(int ban) {
  if (ban == 1) {
    cout << "Sueldo: ";
    cin >> sueldo;
    cout << "Puesto: ";
    cin.get();
    cin.get(puesto, 30);
    cout << "Nombre: ";
    cin.get();
    cin.get(nombre, 40);
  } else {
    cout << "Sueldo: ";
    cin >> sueldo;
    cout << "Nombre: ";
    cin.get();
    cin.get(nombre, 40);
  }
}
// constructor -> inicializa los objetos,lleva el mismo nombre de la clase
// Cuidar que no exista ambigüedad
// constructor no retorna nada
class empleado {
public:
  float sueldo;
  char puesto[30];
  char nombre[40];
  empleado(){};
  empleado(float, char *, char *);
  empleado(float, char *);
  // destructor -> libera espacio de memoria, no se invoca -> al final se
  // ejecuta
  // ~nombreDeLaClase();
  ~empleado();
  void muestra();
};
empleado::empleado(float sueldo, char *puesto, char *nombre) {
  empleado::sueldo = sueldo;
  strcpy(empleado::puesto, puesto);
  strcpy(empleado::nombre, nombre);
}
empleado::empleado(float sueldo, char *nombre) {
  empleado::sueldo = sueldo;
  strcpy(empleado::nombre, nombre);
}
empleado::~empleado() { cout << "Destruyendo objetos" << endl; }

void empleado::muestra() {
  cout << "Sueldo: " << sueldo << endl;
  cout << "Nombre: " << nombre << endl;
  cout << "Puesto: " << puesto << endl;
}

int main() {
  char opcion;
  while (opcion != 'S') {
    std::cout << "--------------------------------------------------"
              << std::endl;
    cout << "Opciones:\nCrear objeto con 3 valores(A)\nCrear objeto con 2 "
            "valores(B)\nSalir(S)"
         << endl;
    std::cout << "Su opcion: ";
    cin >> opcion;
    std::cout << "--------------------------------------------------"
              << std::endl;
    switch (opcion) {
    case 'A': {
      cout << "Leyendo valores para objeto con 3 parametros" << endl;
      leer(1);
      cin.get();
      empleado obj2(sueldo, puesto, nombre);
      cout << "Objeto con 3 valores:" << endl;
      obj2.muestra();
      break;
    }
    case 'B': {
      cout << "Leyendo valores para objeto con 2 parametros" << endl;
      leer(0);
      cin.get();
      empleado obj1(sueldo, nombre);
      cout << "Objeto con 2 valores:" << endl;
      obj1.muestra();
      break;
    }
    case 'S': {
      std::cout << "Bonito Día" << std::endl;
      return 0;
    }
    default: {
      std::cout << "No conozco esa opción" << std::endl;
      break;
    }
    }
  }
  return 0;
}
