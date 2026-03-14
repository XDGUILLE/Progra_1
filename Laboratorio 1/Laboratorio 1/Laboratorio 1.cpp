#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int notas[3][2][3]; // 3 estudiantes  2 cursos   3 tareas
float promedio[3][2];

string secciones[2] = { "A","B" };
int ciclos[2] = { 1,2 };


struct Alumno {
	string nombreAlumno = "";
	string cursos[2];
	int notas[2][3];
};



void mostrarPromedioNotas(Alumno(&alumnos)[3]) {
	for (int i = 0; i < 3; ++i) {
		cout << "Alumno: " << alumnos[i].nombreAlumno << endl;
		for (int j = 0; j < 2; ++j) {
			cout << "  Curso: " << alumnos[i].cursos[j] << endl;
			cout << "  Notas: ";
			for (int k = 0; k < 3; ++k) {
				cout << "Parcial " << k + 1 << ": ";
				cout << alumnos[i].notas[j][k] << " ";
			}
			cout << endl;
		}
		cout << endl; // Línea en blanco entre alumnos
	}
}

void inicializaNotas() {
	Alumno alumnos[3] = {
		{ "Juan", {"Matematicas", "Progra"}, {{85, 90, 78}, {88, 92, 80}} },
		{ "Ana",  {"Matematicas", "Progra"}, {{75, 80, 70}, {82, 88, 84}} },
		{ "Luis", {"Matematicas", "Progra"}, {{90, 92, 88}, {85, 87, 90}} }
	};

	mostrarPromedioNotas(alumnos);
}

int arregloSimple[5] = { 1,2,3,4,5 };
int matriz2x3[2][3] = { {1,2,3},
						{4,5,6}
};
int matriz2x3x4[2][3][4] = {
							{
								{1,2,3,4},
								{5,6,7,8},
								{9,10,11,12}
							},
							{
								{13,14,15,16},
								{17,18,19,20},
								{21,22,23,24}
							}
};

void arreglos() {
	cout << "Arreglo simple" << endl;
	for (int i = 0; i <= 4; i++)
		cout << "posicion " << arregloSimple[i] << endl;
	cout << "Matriz" << endl;
	for (int i = 0; i <= 1; i++) {
		for (int y = 0; y <= 2; y++) {
			cout << "posicion " << matriz2x3[i][y] << " ";
		}
		cout << endl;
	}
	cout << "Cubo" << endl;
	for (int x = 0; x <= 1; x++) {
		for (int y = 0; y <= 2; y++) {
			for (int z = 0; z <= 3; z++) {
				cout << "pos " << matriz2x3x4[x][y][z] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}

void asignaNotas() {
	//estudiante 1
	notas[0][0][0] = 85;
	notas[0][0][1] = 87;
	notas[0][0][2] = 88;

	notas[0][1][0] = 73;
	notas[0][1][1] = 74;
	notas[0][1][2] = 75;

	//estudiante 2
	notas[1][0][0] = 64;
	notas[1][0][1] = 66;
	notas[1][0][2] = 69;

	notas[1][1][0] = 71;
	notas[1][1][1] = 64;
	notas[1][1][2] = 85;

	//estudiante 3
	notas[2][0][0] = 91;
	notas[2][0][1] = 84;
	notas[2][0][2] = 88;

	notas[2][1][0] = 64;
	notas[2][1][1] = 74;
	notas[2][1][2] = 83;
}

void calculaPromedio() {

	float notaPromedio = 0;
	for (int x = 0; x <= 2; x++) {
		for (int y = 0; y <= 1; y++) {
			for (int z = 0; z <= 2; z++) {
				notaPromedio = notaPromedio + notas[x][y][z];
			}
			promedio[x][y] = notaPromedio / 3;
			notaPromedio = 0;
		}
	}
}

void mostrarPromedio() {
	for (int x = 0; x <= 2; x++) {
		for (int y = 0; y <= 1; y++) {
			cout << "El promedio del alumno " << x + 1 << " del curso " << y + 1 <<
				" es de: " << promedio[x][y] << endl;
		}
	}
}

void calificaciones() {
	asignaNotas();
	calculaPromedio();
	mostrarPromedio();
	inicializaNotas();
}
int main()
{
	cout << "Hello World!\n";
	calificaciones();

}
