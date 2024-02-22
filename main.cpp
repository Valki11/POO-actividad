# include "Estudiante.cpp"
# include <iostream>
using namespace std;
main(){
	string carnet,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	cout<<"Ingrese Carnet: ";
	getline(cin,carnet);
	cout<<"Ingrese Nombres: ";
	getline(cin,nombres);
	cout<<"Ingrese Apellidos: ";
	getline(cin,apellidos);
	cout<<"Ingrese Direccion: ";
	getline(cin,direccion);
	cout<<"Ingrese Telefono: ";
    getline(cin,direccion);
	cout<<"Ingrese Fecha de nacimiento : ";
	getline(cin,fecha_nacimiento);
	// instanciar un objeto
	Estudiante obj =Estudiante(nombres,apellidos,direccion,telefono,fecha_nacimiento, carnet);
	obj.mostrar();


};


	

