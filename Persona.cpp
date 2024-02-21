#include <iostream>
using namespace std;
class Persona{
	//atributos: nombres, apellidos, direccion, telefono, fecha_nacimiento
	protected : string nombres, apellidos, direccion;
	int telefono;
	
	//constructor
	Persona(){
	}
	
	Persona(string nom,string ape,string dir, int tel){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		
	}
	//metodos crud = Crear, Leer, Actualizar, Borrar
	void crear();
	void leer();
	void actualizar();
	void borrar();
	
		
	
};

