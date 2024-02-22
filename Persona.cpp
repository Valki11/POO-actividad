# include <iostream>
using namespace std;
//esta es la clas persona que heredara a la clase estudiante 
class Persona{
	//atributos de una  clase : nombre , apellido, direccion,telefono, fecha_naciemiento
	protected : string nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	
	//contructor
	Persona(){
	}
	Persona(string nom, string ape,string dir,int tel, string fechnac){
		nombres= nom;
		apellidos=ape;
		direccion= dir;
		telefono=tel;
		fecha_nacimiento=fechnac;
		
	}
	// metodos crud = crear , leer , actualizar , borrar
	void crear();
	void leer();
	void actualizar();
	void borrar();
	

		
};
