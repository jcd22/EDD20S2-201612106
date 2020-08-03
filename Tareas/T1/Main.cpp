 a// Importar Librerias
#include <iostream>

// Importar Lista Simple
#include "ListaSimple.h"
#include "Nodo.h"

using namespace std;

int main() {

	/* Pruebas De Lista Simple */
	int l;

	// Crear Nueva Lista
	ListaSimple* nuevaLista = new ListaSimple();
	Estudiante* prueba = new Estudiante("PEdro", 123);
	Estudiante* prueba1 = new Estudiante("PEdro2", 124);
	Estudiante* prueba2 = new Estudiante("PEdro3", 125);
	nuevaLista->Insertar(prueba);
	nuevaLista->Insertar(prueba1);
	nuevaLista->Insertar(prueba2);
	cout <<nuevaLista->Buscar(123)->getNombre()<<endl;
	cout << nuevaLista->Buscar(124)->getNombre() << endl;
	cout << nuevaLista->Buscar(125)->getNombre() << endl;
	cin >> l;
	return 0;
}
