// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int numero = 0;
int dia = 0;
int contador = 0;
int sumaResult = 0;
float a = 0;
float b = 0;

void ejemploCondicionales() {
    cout << "Ingrese un numero";
    cin >> numero;

    if (numero > 0) {
        cout << "El numero es positivo. " << numero << endl;
    }
    else {
        cout << "El numero no es positivo. " << numero << endl;
    }
}

void usoDeSwitch() {
    cout << "Ingrese un numero de 1 al 7: ";
    //int dia;
    cin >> dia;

    switch (dia) {
    case 1: cout << "Lunes"; break;
    case 2: cout << "Martes"; break;
    case 3: cout << "Miercoles"; break;
    case 4: cout << "Jueves"; break;
    case 5: cout << "Viernes"; break;
    case 6: cout << "Sabado"; break;
    case 7: cout << "Domingo"; break;
    default:cout << "NUmero invalido"; break;
    }
}

void usoFor() {
    for (int i = 1; i <= 5; i++) {
        cout << "Numero: " << i << endl;
    }
}

void usoDeWhile() {
    contador = 1;
    while (contador <= 5) {
        cout << "COntador: " << contador << endl;
        contador++;
    }
}

float suma(float a,float b) {
    cout << "Ingrese los numeros que quiere sumar: ";
    cin >> a;
    cin >> b;
    cout << a + b;
    return a + b;
}

int main()
{
    cout << "Bienvenidos a Progra 1\n";
    cout << "Seccion A" << endl;
    suma(a, b);

}

// Calculadora basica
// Promedio de temperaturas
// Juego de adivinanzas de un numero en 10 minutos


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
