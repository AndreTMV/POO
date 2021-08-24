#include <iostream>
using std::cout, std::cin, std::endl;


void Menu();
void Mayus(char *);
void CuentaVocales(char *);
void CuentaNumeros(char *);
void IngresaCadena(char *);

int main(){
  Menu();
  return 0;
}

void CuentaVocales(char *cadena){
  auto num_vocales = 0;
  char Vocales[] = "AEIUO";

  while(*cadena){
    for(auto letra:Vocales){
      num_vocales += (letra == *cadena);
    }
    cadena++;
  }
  cout << "La cadena contiene " << num_vocales << " vocales" << endl;
}

void CuentaNumeros(char *cadena){
  auto num_numeros = 0;
  while(*cadena){
    for(auto numero:{'0','1','2','3','4','5','6','7','8','9'}){
      num_numeros += (numero == *cadena);
    }
    cadena++;
  }
  cout << "La cadena contiene " << num_numeros << " numeros" << endl;
}

void Mayus(char *cadena){
  while(*cadena){
    if(*cadena >= 'a' && *cadena <= 'z'){
      *cadena -= 32;
    }
    cadena++;
  }
}


void IngresaCadena(char *cadena){
  cout << "Ingresa una cadena:";
  cin >> cadena;
  cin.ignore();
  Mayus(cadena);
}

void Menu(){
  char opcion, cadena[100];
  while(opcion != 's'){
    cout << "Estas son las opciones:" << endl;
    cout << "-------------------------------" << endl;
    cout << "Cuenta Vocales(1)\nCuenta Numeros(2) \nSalir(S)" << endl;
    cout << "Tu opcion:";
    cin >> opcion;
    cout << "-------------------------------" << endl;
    if (opcion == 's' || opcion == 'S')
      break;
    switch(opcion){
      case '1':
        IngresaCadena(cadena);
        CuentaVocales(cadena);
        break;
      case '2':
        IngresaCadena(cadena);
        CuentaNumeros(cadena);
        break;
      default:
        cout << "Opcion no valida!" << endl;
    }
    cout << endl;
  }
}
