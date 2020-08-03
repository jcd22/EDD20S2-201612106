#pragma once
#include <iostream>;
#include <string>;
#include "Estudiante.h";

class Nodo {

private:
	Estudiante* estudiante;
	Nodo* siguiente;

public:
	Nodo(Estudiante*);

	//gets y sets
	Estudiante* getEstudiante();
	void setEstudiante(Estudiante*);

	Nodo* getSiguiente();
	void setSiguiente(Nodo*);

};