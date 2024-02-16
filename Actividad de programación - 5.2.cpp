/*************************************************************

NOMBRE: Roberto perez Zamora
FECHA: 13/02/24
PROGRAMA: Actividad de programacion - 5.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Elaborar una suma de un arreglo con las siguientes características

Tener máximo 10 espacios
El usuario final debe elegir cuando entra un valor a cada posición (no es meter todos los datos al mismo tiempo)
Mostrar lista de valores
Mostrar sumatoria de todos los elementos
Borrado y edición de elementos
Vaciado de arreglo

*************************************************************/

// Bibliotecas
// Incluir biblioteca estandar
#include <iostream>
using namespace std;

// Funcion principal
int main()
{

    bool ciclo = true; //bool para el ciclo
    int ar[10]; // Arreglo de 10 espacios
    int op;     // Opciones del menu
    int val;     // valores del usuario
    int pos = 0; // posicion del arreglo
    int suma = 0;// suma de los valores
    // Iniciar el ciclo de retorno del programa

    while (ciclo)
    {
        cout << "1. Ingresar valores" << endl;
        cout << "2. Sumar valores" << endl;
        cout << "3. Borrado y edicion de elementos" << endl;
        cout << "4. Insertar valores en" << endl;
        cout << "5. Vaciado de arreglo" << endl;
        cout << "6. Salir" << endl;
        cout << "Elegir una opcion" << endl;
        cin >> op;

        switch (op)
        { // Caso 1: Ingresar valores
        case 1:

            // Si la posicion es igual a 10 o mayor
            if (pos == 10)
            {
                cout << "El arreglo esta lleno" << endl;
            }
            else
            {
                cout << "Ingresar valor" << endl;
                cin >> val;    // Pedir el valor al usuario
                ar[pos] = val; // Guardar el valor en la posicion
                pos++;         // Aumentar la posicion
                break;
            }

        // Caso 2: Sumar valores
        case 2:

            for (int i = 0; i < pos; i++)
            {
                suma = suma + ar[i]; // Sumar los valores del arreglo
            } // Fin de for
            cout << "El total de arreglo es de: " << suma << endl;
            break;
            // Fin de case 2

        // Caso 3: Borrado y edicion de elementos
        case 3:

            int pos1;
            cout << "Ingresar la posicion" << endl;
            cin >> pos1; // Pedir la posicion al usuario
            if (pos1 < 0 || pos1 > 9) // Si la posicion es menor a 0 o mayor a 9
            {
                cout << "Posicion no valida" << endl;
            }
            else
            {
                cout << "Ingresar valor" << endl;
                cin >> val; // Pedir el valor al usuario
                ar[pos1] = val; // Guardar el valor en la posicion
            } // Fin de else
            break;
            // Fin de case 3

        // Caso 4: Insertar valores
        case 4:

            int pos2; // Posicion del arreglo
            cout << "Ingresar la posicion" << endl;
            cin >> pos2; // Pedir la posicion al usuario
            if (pos2 < 0 || pos2 > 9) // Si la posicion es menor a 0 o mayor a 9
            {
                cout << "Posicion no valida" << endl;
            }
            else
            {
                cout << "Ingresar valor" << endl;
                cin >> val; // Pedir el valor al usuario
                ar[pos2] = val; // Guardar el valor en la posicion
            } // Fin de else
            break;
            // Fin de case 4

        // Caso 5: Vaciado de arreglo
        case 5:

            for (int i = 0; i < pos; i++) // Iniciar el ciclo de vaciado
            {
                ar[i] = 0; // Vaciar el arreglo
            } // Fin de for
            pos = 0; // Reiniciar la posicion
            cout << "El arreglo ha sido vaciado" << endl;
            break;
            // Fin de case 5

        // Caso 6: Salir
        case 6:
            ciclo = false; // Terminar el ciclo
            break;
            // Fin de case 6
        }
    }
    // Fin de while
    
}
// Fin de main