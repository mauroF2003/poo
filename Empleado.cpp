
#include <iostream>
using namespace std;

class Empleado : Persona {
	//atributos
	private : 	string puesto;
				int codigo_empleado;
	
	//constructor
	public : 
	Empleado (){
	}
	
	Empleado(string nom,string ape,string dir,string fn,int tel,string pt,int code) : Persona(nom,ape,dir,fn,tel){
		puesto = pt;
		codigo_empleado = code;
	}
	//metodos
	//set (modificar)
	void setPuesto(string pt){puesto = pt;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFechaNacimiento(string fn){fecha_nacimiento = fn;}
	void setTelefono(int tel){telefono = tel;}
	void setCodigo(int code){codigo_empleado = code;}
	//get (mostrar)
	string getPuesto(){return puesto;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFechaNacimiento(){return fecha_nacimiento;}
	int getTelefono(){return telefono;}
	int getCodigo(){return codigo_empleado;}
	//metodos
	void mostrar(){
		cout<<"_____________________"<<endl;
		cout<<"->Elaborado en CRUD<-"<<endl;
		cout<<"_____________________"<<endl;
		cout<<puesto<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<codigo_empleado<<", "<<fecha_nacimiento<<", "<<telefono<<endl;
	}
};

