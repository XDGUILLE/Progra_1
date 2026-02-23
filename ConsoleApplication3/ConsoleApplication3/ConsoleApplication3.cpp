#include <iostream>
using namespace std;

//Potencia
double potencia(double base, int exponente) {
    if (exponente == 0) {
        return 1; // Caso base: cualquier número elevado a 0 es 1
    }
    return base * potencia(base, exponente - 1); // Llamada recursiva
}

// Función recursiva para invertir una cadena
std::string invertirCadena(const std::string& str) {
    if (str.empty()) {
        return ""; // solucion de salida
    }
    return str.back() + invertirCadena(str.substr(0, str.size() - 1)); // Llamada recursiva
}

// Función recursiva para calcular el fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n; // solucion de salida
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Llamada recursiva
}

// Función recursiva para calcular el factorial
int factorial(int n) {
    if (n <= 1) // solucion de salida
        return 1;
    return n * factorial(n - 1); // llamada recursiva
}

int encontrarTermino(int n){
    if (n <= 1) {
        return -7;
    }
    else {
        return encontrarTermino(n - 1) + 12;
    }
}

int recursividadCaso2(int m ,int n){
    if(m == 0 ){
        return n + 1;
    }
    else if(m > 0 && n == 0){
		return recursividadCaso2(m - 1, 1);
    }
    else if (m > 0 && n > 0) {
        return recursividadCaso2(m - 1, recursividadCaso2(m, n - 1));
    }
}

int arregloSimple[5] = { 1,2,3,4,5, };

int matriz2x3[2][3] = { {1,2,3},
                     {4,5,6} 
                     };

int matriz2x3x4[2][3][4] = { 
    { {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12} },
    { {13,14,15,16},
      {17,18,19,20},
      {21,22,23,24} }
};

struct Alunmo {
    string nombreAlumno = "";
    string cursos[2];
    int notas[2][3];
};

void recursividad(string tipoRecursividad) {
    int numero;
    string cadena;
    if (tipoRecursividad == "factorial") {
        cout << "Ingrese un numero para calcular su factorial: ";
        cin >> numero;
        cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
    }
    else if (tipoRecursividad == "fibonacci") {
        cout << "Ingrese un numero para calcular su fibonacci: ";
        cin >> numero;
        cout << "El fibonacci de " << numero << " es: " << fibonacci(numero) << endl;
    }
    else if (tipoRecursividad == "invertirCadena") {
        cout << "Ingrese un string para invertir su orden: ";
        cin >> cadena;
        cout << "El invertir cadena de " << cadena << " es: " << invertirCadena(cadena) << endl;
    }
    else if (tipoRecursividad == "potencia") {
        cout << "Ingrese un exponente para calcular la potencia de base 2: ";
        cin >> numero;
        cout << "La potencia de 2 elevado a " << numero << " es: " << potencia(2, numero) << endl;
    }
	else if (tipoRecursividad == "encontrarTermino") {
        cout << "Ingrese un numero para encontrar el termino: ";
        cin >> numero;
        cout << "El termino " << numero << " es: " << encontrarTermino(numero) << endl;
    }
    else if (tipoRecursividad == "recursividadCaso2") {
        int m, n;
        cout << "Ingrese dos numeros para realizar formula: ";
        cin >> m >> n;
        cout << "El termino con m = " << m << " y n = " << n << " es: " << recursividadCaso2(m,n) << endl;
	}
}

int main()
{
    cout << "Hello World!\n";
    recursividad("recursividadCaso2");

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
