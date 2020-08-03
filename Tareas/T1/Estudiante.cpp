#import <string>;
#import <iostream>;
#import 'Estudiante.h';

using namespace std;

Estudiante::Estudiante(string nombre_,int carne_){

	nombre = nombre_;
	carne = carne_;

}

//gets y sets

string Estudiante::getNombre() {
	return nombre;
}

void Estudiante::setNombre(string nombre_) {
	nombre = nombre_;
}

int Estudiante::getCarne() {
	return carne;
}

void Estudiante::setCarne(int carne_){
	carne = carne_;
}
