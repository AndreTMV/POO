#include <iostream>
using std::cout, std::cin, std::endl;

void pideCadena(char cadena[100]) {
  cin.get();
  cout << "Ingresa una cadena: " << endl;
  cin.get(cadena, 100);
  cout << "Cadena ingresada: " << cadena << endl;
}

void casoA(char cadena[100]) { //->cadena[0]
  pideCadena(cadena);
  while (*cadena != '\0') {
    if (*cadena == 'A' || *cadena == 'a')
      *cadena = 49; //-> '1'
    cadena++;
  }
  cin.get();
}

int consontantes(char cadena[100]) {
  pideCadena(cadena);
  cin.get();
  unsigned int totalConsonantes = 0;
  while (*cadena != '\0') {
    if ((*cadena >= 65 && *cadena <= 122) &&
        (*cadena != 65 && *cadena != 69 && *cadena != 73 && *cadena != 79 &&
         *cadena != 85) &&
        (*cadena != 97 && *cadena != 101 && *cadena != 105 && *cadena != 111 &&
         *cadena != 117)) {
      totalConsonantes++;
    }
    cadena++;
  }
  cout << "La cadena tiene: " << totalConsonantes << " consontantes" << endl;
  cin.get();
  return totalConsonantes;
}

int main() {
  int opcion = 0;
  do {
    system("clear"); // en windows system("cls");
    cout << "--------------------------------------------------" << endl;
    cout << "Estas son las opciones" << endl;
    cout << "Convierte A a 1(A)\n Cuenta consonantes(B) \n Salir(S)" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Ingresa tu opcion:" << endl;
    cin >> opcion;
    if (opcion == 3)
      break;
    else {
      char cadena[100];
      switch (opcion) {
      case 1:
        casoA(cadena);
        cout << "Nueva cadena: " << cadena << endl;
        cin.get();
        break;
      case 2:
        consontantes(cadena);
        cin.get();
        break;
      default:
        std::cout << "Opcion invalida" << std::endl;
      }
    }
    cin.get();
  } while (opcion != 3);
  return 1;
}
