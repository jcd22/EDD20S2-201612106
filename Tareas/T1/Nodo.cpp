#include <iostream>;
#include <string>;
#include "Nodo.h";

using namespace std;

Nodo::Nodo(Estudiante* estudiante_) {
	estudiante = estudiante_;
	siguiente = 0;
}

//gets y sets
Estudiante* Nodo::getEstudiante() {
	return estudiante;
}

void Nodo::setEstudiante(Estudiante* estudiante_) {
	estudiante = estudiante_;
}

Nodo* Nodo::getSiguiente() {
	return siguiente;
}

void Nodo::setSiguiente(Nodo* siguiente_) {
	siguiente = siguiente_;
}