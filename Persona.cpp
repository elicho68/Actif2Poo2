#include <iostream>
using namespace std;
//clases de personas 
class Persona{
	//atributos
	protected : string nombres, apellidos, direccion, fecha_nacimiento;
				int telefono;
				
	//constructor
	protected : 
			Persona(){
			} 
			Persona(string nom, string ape, string dir, int tel,string fn){
				nombres=nom;
				apellidos=ape;
				direccion=dir;
				fecha_nacimiento=fn;
				telefono=tel;
			} 
	//metodo	
	void crear();
	void leer();
	void actualizar();
	void mostrar(); 
}
; 
