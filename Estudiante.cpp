#include "Persona.cpp"
# include <iostream>
using namespace std;
class Estudiante : Persona{
	//atributos 
	private :string carnet;
	//constructor
	public : 
		Estudiante(){
	}
	Estudiante(string nom,string ape,string dir,int tel, string fechanac, string carn)
					:Persona(nom, ape,dir,tel,fechanac){
						carnet=carn;
					
	}

  //setters
  void setFecha_nacimiento(string fechanac){fecha_nacimiento=fechanac;}
  void setCarnet(string carn){carnet = carn;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}


  //getters
  string getFecha_nacimiento(){return fecha_nacimiento;}
  string getCarnet(){	return carnet;}
  string getNombres(){	return nombres;}
  string getApellidos(){ return apellidos;}
  string getDireccion(){ return direccion;}
  int getTelefono(){	return telefono;}
  
  
   void mostrar(){
	cout<<carnet<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<endl;
}
};

