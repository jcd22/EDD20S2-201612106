#include <iostream>;
#include <string>;
#include "ListaSimple.h";

using namespace std;

ListaSimple::ListaSimple() {
	primero = 0;
	ultimo = 0;
}

void ListaSimple::Insertar(Estudiante* estudiante_) {
	Nodo* nuevo = new Nodo(estudiante_);

	if (primero == 0)
	{
		primero = nuevo;
		ultimo = nuevo;
	}
	else {

		ultimo->setSiguiente(nuevo);
		ultimo = nuevo;

	}


}

Estudiante* ListaSimple::Buscar(int carne_) {

	Nodo* aux = primero;
	while (aux != 0)
	{
		if (aux->getEstudiante()->getCarne() == carne_ )
		{
			return aux->getEstudiante();
		}
		aux = aux->getSiguiente();
	}
	cout << "No se encontro ese estudiante" << endl;
}

void ListaSimple::Eliminar(int carne_) {
	if (primero == 0)
	{
		cout << "esta vacia la lista" << endl;
	}
	else {
		if (primero == ultimo)//solo hay 1 nodo
		{
			if (primero->getEstudiante()->getCarne() == carne_)
			{
				primero = 0;
				ultimo = 0;
			}
		}

		else// hay mas de 1 nodo
		{

			Nodo* aux = primero;
			while (aux->getSiguiente() != 0)
			{
				if (aux->getSiguiente() == ultimo)
				{// si es el ultimo
					if (aux->getSiguiente()->getEstudiante() ->getCarne() == carne_)
					{ 
						aux->setSiguiente(0);
						ultimo = aux;
						break;
					}
				}
				 else if (aux->getSiguiente()->getEstudiante()->getCarne() == carne_)
				{ //eliminamos adentro de la lista
					aux->setSiguiente(aux->getSiguiente()->getSiguiente());
					break;
				}
				aux = aux->getSiguiente();
			}
		}
	}

}

//gets y sets

Nodo* ListaSimple::getPrimero() {
	return primero;
}

void ListaSimple::setPrimero(Nodo* primero_) {
	primero = primero_;
}

Nodo* ListaSimple::getUltimo() {
	return ultimo;
}


void ListaSimple::setUltimo(Nodo* ultimo_) {
	ultimo = ultimo_;
}



