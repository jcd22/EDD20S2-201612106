#pragma once
#include <iostream>;
#include <string>;
#include "Nodo.h";

class ListaSimple {
private:
	Nodo* primero;
	Nodo* ultimo;
	
public:

	ListaSimple();

	//metodos lista simple
	void Insertar(Estudiante*);
	Estudiante* Buscar(int);
	void Eliminar(int);

	//gets y sets
	Nodo* getPrimero();
	void setPrimero(Nodo*);

	Nodo* getUltimo();
	void setUltimo(Nodo*);

};