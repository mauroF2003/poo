
#include <iostream>
using namespace std;

class Cliente : Persona {
	//atributos
	private : string nit;
	
	//constructor
	public : 
	Cliente (){
	}
	
	Cliente(string nom,string ape,string dir,string fn,int tel,string n) : Persona(nom,ape,dir,fn,tel){
		nit = n;
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFechaNacimiento(string fn){fecha_nacimiento = fn;}
	void setTelefono(int tel){telefono = tel;}
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFechaNacimiento(){return fecha_nacimiento;}
	int getTelefono(){return telefono;}
	//metodos
	void mostrar(){
		cout<<"_____________________"<<endl;
		cout<<"->Elaborado en CRUD<-"<<endl;
		cout<<"_____________________"<<endl;
		cout<<nit<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<fecha_nacimiento<<", "<<telefono<<endl;
	}
};

