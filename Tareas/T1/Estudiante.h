
#import <iostream>;
#import <string>;

class Estudiante {

private:
	std::string nombre;
	int carne;

public:
	Estudiante(std::string,int);

	//get y set
	std::string getNombre();
	void setNombre(std::string);

	int getCarne();
	void setCarne(int);

};