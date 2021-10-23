#include <cstring>
#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

int main() {
  char opcion;
  while (opcion != 's' || opcion != 'S') {
    unsigned int constantes = 0;
    char *cadena = new char[100];
    char *p;
    cout << "--------------------------------------------------" << endl;
    cout << "Estas son las opciones" << endl;
    cout << "Convierte A a 1(A)\n Cuenta consonantes(B) \n Salir(S)" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Ingresa tu opcion:";
    cin >> opcion;
    if (opcion == 's' || opcion == 'S')
      break;
    fflush(stdout);
    switch (opcion) {
    case 'A': {
      cout << "Ingresa una cadena:";
      cin.get();
      cin.get(cadena, 100);
      p = &cadena[0];
      while (*p != 0) {
        if (*p == 'A' || *p == 'a')

          *p = 49;
        p++;
      }
      cout << cadena << endl;
      break;
    }
    case 'B': {
      cout << "Ingresa una cadena:";
      cin.get();
      cin.get(cadena, 100);
      p = &cadena[0];
      while (*p != 0) {
        if ((*p >= 65 && *p <= 122) &&
            (*p != 65 && *p != 69 && *p != 73 && *p != 79 && *p != 85) &&
            (*p != 97 && *p != 101 && *p != 105 && *p != 111 && *p != 117)) {
          constantes++;
        }
        p++;
      }
      cout << "la cadena tiene " << constantes << " consonantes" << endl;
      break;
    }
    default:
      cout << "Esa no es una opción valida!!" << endl;
    }
    delete[] cadena;
  }
}
