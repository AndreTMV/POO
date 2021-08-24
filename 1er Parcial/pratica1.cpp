#include <iostream>
#include <conio.h>
#include <stdio.h>

using std::cout, std::cin, std::endl;

void Imprime(char *cadena);
void Consonantes(char *, unsigned int &);
void Menu();
void Aa1(char *);
void Ingresa(char cadena[100]);

int main(){
  char *cadena = new char[100], opcion; 
  unsigned int consonantes = 0;
  while(opcion != 's'){
    cout << "Estas son las opciones:" << endl;
    cout << "-------------------------------" << endl;
    cout << "Aa1(A)\nCuenta Consonantes(B) \nSalir(S)" << endl;
    cout << "Tu opcion:";
    cin >> opcion;
    cout << "-------------------------------" << endl;
    if (opcion == 's' || opcion == 'S')
      break;
    switch(opcion){
      case 'A':{

        cout << "Ingresa cadena:";
        cin.getline(cadena,100);
        fflush(stdin);
        while(*cadena != 0){
          if(*cadena == 'A' || *cadena == 'a'){            
            *cadena = 1;
          }
          cadena++;
        }
        while(*cadena){
          cout << *cadena;
          cadena++;
        }
        cout << endl;
        break;
      }
      case 'B':{
        cout << "Ingresa cadena:";
        cin >> cadena;
        /* gets_s(cadena); */
        fflush(stdin);
        char vocales[] = "AEIOUaeiou";
        while(*cadena != 0){
        if(*cadena >= 41 && *cadena <= 122){
        for (char letra : vocales) {
          if(*cadena != letra){
            consonantes++;
            break;
            }
          }
        }
        cadena++;
      }
      cout << "La cadena tiene" << consonantes << "consonantes" << endl;
      break;
      }
      default:
        cout << "Opcion no valida!" << endl;
        break;
    }
  }
}

void Aa1(char *cadena){
  while(*cadena != 0){
    if(*cadena == 'A' || *cadena == 'a'){            
      *cadena = 1;
    }
      cadena++;
    }
}

void Consonantes(char *cadena, unsigned int &consonantes){
  char vocales[] = "AEIOUaeiou";
  while(*cadena != 0){
    if(*cadena >= 41 && *cadena <= 122){
      for (char letra : vocales) {
        if(*cadena != letra){
          consonantes++;
          break;
          }
        }
      }
    cadena++;
    }
  cout << "La cadena tiene" << consonantes << "consonantes" << endl;
}
   
void Menu(){
  char opcion, cadena[100];
  unsigned int consonantes = 0;
  while(opcion != 's'){
    cout << "Estas son las opciones:" << endl;
    cout << "-------------------------------" << endl;
    cout << "Aa1(A)\nCuenta Consonantes(B) \nSalir(S)" << endl;
    cout << "Tu opcion:";
    cin >> opcion;
    cout << "-------------------------------" << endl;
    if (opcion == 's' || opcion == 'S')
      break;
    switch(opcion){
      case 'A':
        Ingresa(cadena);
        Aa1(cadena);
        Imprime(cadena);
        break;
      case 'B':
        Ingresa(cadena);
        Consonantes(cadena, consonantes);
        break;
      default:
        cout << "Opcion no valida!" << endl;
    }
    cout << endl;
  }
}

void Ingresa(char cadena[100]){
  cout << "ingresa una cadena:";
  cin >> cadena;
  cin.ignore();
  /* fgets(cadena, 100, stdin); */
  /* fflush(stdin); */
}

void Imprime(char *cadena){
  while(*cadena != 0){
    cout << cadena;
    cadena++;
  }
  cout << endl; 
}
