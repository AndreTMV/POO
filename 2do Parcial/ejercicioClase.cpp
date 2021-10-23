#include <iostream>

using std::cout, std::endl, std::cin;

class persona {
public:
  // Propiedades
  char nombre[50];
  int edad;
  char domicilio[60];
  // Metodos
  void leer();
  void muestra();
} Andre, Leo;

void persona::leer() {
  cin.get();
  cout << "Introduzca los valores para la persona:" << endl;
  cout << "Nombre:" << endl;
  cin.get(nombre, 50);
  cin.get();
  cout << "Edad:" << endl;
  cin >> edad;
  cin.get();
  cout << "Domicilio:" << endl;
  cin.get(domicilio, 60);
  cin.get();
}

void persona::muestra() {
  cout << "Mostrando los valores para la persona:" << endl;
  cout << "Nombre:" << nombre << endl;
  cout << "Edad:" << edad << endl;
  cout << "Domicilio:" << domicilio << endl;
}
int main() {
  int opcion = 0;
  while (opcion != 3) {
    cout << "-----------------------------------------------------" << endl;
    cout << "Ingresa una opcion:\n1.-Leer y Mostrar datos de Andre\n2.-Leer y "
            "mostrar datos de Leo\n3.-Salir"
         << endl;
    cout << "-----------------------------------------------------" << endl;
    cin >> opcion;
    switch (opcion) {
    case 1: {
      Andre.leer();
      cin.get();
      Andre.muestra();
      break;
    }
    case 2: {
      Leo.leer();
      cin.get();
      Leo.muestra();
      break;
    }
    case 3: {
      cout << "Bonito día!" << endl;
      break;
    }
    default: {
      cout << "No conozco esa opcion" << endl;
      break;
    }
    }
  }
  return 0;
}
