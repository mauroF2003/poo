#include <iostream>
#include "Persona.cpp"
#include "Cliente.cpp" 
#include "Empleado.cpp" 


using namespace std;

int main() {

    //Cliente objeto1;
    //Empleado objeto2;

   
    int opcion;
    do {
        cout << "Menu:\n";
        cout << "1. Gestionar Cliente\n";
        cout << "2. Gestionar Empleado\n";
        cout << "3. Salir\n";
        cout << "Elija una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
            	{
                // Llamar a un método de la Clase1
                string nit,nombres,apellidos,direccion,fecha_nacimiento;
				int telefono;
				
				cout<<"Ingresar Nit: ";
				cin>>nit;
				cout<<"Ingresar Nombres: ";
				cin>>nombres;
				cout<<"Ingresar Apellidos: ";
				cin>>apellidos;
				cout<<"Ingresar Direccion: ";
				cin>>direccion;
				cout<<"Ingresar su fecha de nacimiento: ";
				cin>>fecha_nacimiento;
				cout<<"Ingresar Telefono: ";
				cin>>telefono;
				//isntancia de un objeto
				Cliente objeto1 = Cliente(nombres,apellidos,direccion,fecha_nacimiento,telefono,nit);
				objeto1.mostrar();
				
				cout<<"Ingresar Nit: ";
				cin>>nit;
				objeto1.setNit(nit);
				objeto1.mostrar();
				//objeto1.metodo1();
                break;
				}
            case 2:
            	{
                string puesto,nombres,apellidos,direccion,fecha_nacimiento;
				int telefono,codigo_empleado;
				
				cout<<"Ingresar Puesto: ";
				cin>>puesto;
				cout<<"Ingresar Nombres: ";
				cin>>nombres;
				cout<<"Ingresar Apellidos: ";
				cin>>apellidos;
				cout<<"Ingresar Direccion: ";
				cin>>direccion;
				cout<<"Ingresar Codigo de empleado: ";
				cin>>codigo_empleado;
				cout<<"Ingresar su fecha de nacimiento: ";
				cin>>fecha_nacimiento;
				cout<<"Ingresar Telefono: ";
				cin>>telefono;
				//isntancia de un objeto
				Empleado objeto2 = Empleado(nombres,apellidos,direccion,fecha_nacimiento,telefono,puesto,codigo_empleado);
				objeto2.mostrar();
				
				cout<<"Ingrese su nuevo puesto: ";
				cin>>puesto;
				objeto2.setPuesto(puesto);
				objeto2.mostrar();
                break;
            }
            case 3:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 3);

    return 0;
}
