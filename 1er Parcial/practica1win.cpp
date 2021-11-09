#include <cstring>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{

    char opcion;
    unsigned int constantes = 0;
    while (opcion != 's' || opcion != 'S')
    {
        cout << "--------------------------------------------------" << endl;
        cout << "Estas son las opciones" << endl;
        cout << "Convierte A a 1(A)\n Cuenta consonantes(B) \n Salir(S)" << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "Ingresa tu opcion:";
        cin >> opcion;
        if (opcion == 's' || opcion == 'S')
            break;
        fflush(stdin);
        char cadena[100], *p;
        switch (opcion)
        {
        case 'A':
        {
            cout << "Ingresa una cadena:";
            gets(cadena);
            fflush(stdin);
            p = &cadena[0];
            while (*p != 0)
            {
                if (*p == 'A' || *p == 'a')

                    *p = 49;
                p++;
            }
            cout << cadena << endl;
            memset(cadena, 0, 100);
            break;
        }
        case 'B':
        {
            cout << "Ingresa una cadena:";
            gets(cadena);
            fflush(stdin);
            p = &cadena[0];
            while (*p != 0)
            {
                if ((*p >= 65 && *p <= 122) && (*p != 65 && *p != 69 && *p != 73 && *p != 79 && *p != 85) && (*p != 97 && *p != 101 && *p != 105 && *p != 111 && *p != 117))
                {
                    constantes++;
                }
                p++;
            }
            cout << "la cadena tiene " << constantes << " consonantes" << endl;
            memset(cadena, 0, 100);
            break;
        }
        default:
            cout << "Esa no es una opción valida!!" << endl;
        }
    }
    return 0;
}