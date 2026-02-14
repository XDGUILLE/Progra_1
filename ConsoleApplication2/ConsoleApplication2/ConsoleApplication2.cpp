// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int numero = 0;
int opcion = 0;
int contador = 0;
int sumaResult = 0;
float a = 0;
float b = 0;
float result = 0;
int random[4];
bool iguales = true;

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

float suma(float a, float b) {
    cout << "Ingrese los numeros que quiere sumar: \n";
    cin >> a;
    cin >> b;
    cout << a + b;
    return a + b;
}

float resta(float a, float b) {
    cout << "Ingrese los numeros que quiere sumar: \n";
    cin >> a;
    cin >> b;
    cout << a - b;
    return a - b;
}

float multiplicar(float a, float b) {
    cout << "Ingrese los numeros que quiere sumar: \n";
    cin >> a;
    cin >> b;
    cout << a * b;
    return a * b;
}

float dividir(float a, float b) {
    cout << "Ingrese los numeros que quiere sumar: \n";
    cin >> a;
    cin >> b;
    cout << a / b;
    return a / b;
}

float farenheitCelsius(float a) {
    cout << "Ingrese ls grados Farenheit para pasar a Celsius: \n";
    cin >> a;
    result = (a - 32) / 1.8;
    cout << result << endl;
    return result;
}

float celsiusFarenheit(float a) {
    cout << "Ingrese ls grados Celsius para pasar a Farenheit: \n";
    cin >> a;
    result = (a * 1.8) + 32;
    cout << result << endl;
    return result;
}

void numeroAleatorio() {
    srand(time(0));
    for(int i = 0; i < 4; i++) {
        random[i] = rand() % 9 + 1;
    }
    
    for (int j = 0; j < 10; j++) {
        cout << "Adivina el numero: intento #" << j + 1 << endl;
        for (int k = 0; k < 4; k++) {
            cin >> numero;
        }
        for (int l = 0; l < 4; l++) {
            if (numero != random[1]) {
                iguales = false;
            }
        }
        if (iguales) {
            cout << "Todos los numeros son iguales\n";
        }
        else {
            cout << "Los numeros no coinciden\n";
        }
    }
    cout << "Se acabaron tus Intentos suerte a la proxima\n";
}

void escojerOperacion() {
    cout << "Ingrese que operacion desea: \n";
    cout << "---Calculadora---\n";
    cout << "-1.Suma\n";
    cout << "-2.Resta\n";
    cout << "-3.Multiplicar\n";
    cout << "-4.Dividir\n";
    cout << "-5.Farenheit a Celsius\n";
    cout << "-6.Celsius a Farenheit\n";
    cout << "-7.Adivinar numeros Random\n";
    cout << "-8.Salir\n";

    cin >> opcion;

    switch (opcion) {
    case 1:
        suma(a, b);
        break;
    case 2:
        resta(a, b);
        break;
    case 3:
        multiplicar(a, b);
        break;
    case 4:
        dividir(a, b);
        break;
    case 5:
        farenheitCelsius(a);
        break;
    case 6:
        celsiusFarenheit(a);
        break;
    case 7:
        numeroAleatorio();
        break;
    case 8: cout << "Salir \n";
        break;
    default:cout << "Numero invalido \n";
        break;
    }
}

int main()
{
    std::cout << "Hello World!\n";
    do {
        escojerOperacion();
    } while (opcion != 8);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
