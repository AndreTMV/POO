#include <iostream>
using std::cout, std::cin, std::endl;
void leer(char *cadena, unsigned int longitud) {
  cout << "Ingresa una cadena:" << endl;
  cin.get();
  cin.get(cadena, longitud);
}

void reversed(char *cadena, unsigned int longitud) {
  char newCadena[longitud];
  while (*cadena != '\x0') {

    cadena++;
  }
}

int main() {
  char cadena[100];
  return 0;
}
