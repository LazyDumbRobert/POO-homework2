#include "Persona.cpp"
#include<iostream>
#include<conio.h>

using namespace std;

class Propietario : Persona{
				//atributos
		private : 	string nit;
					double cui;
				//constructor
		public :
		Propietario ();
		 
		Propietario(string name, string lastname, string adress, string birth, int tel, string n, double c) : Persona(name, lastname, adress, birth, tel){
			n = nit;
			c = cui;
		}		
	//Metodos set y get
	
	//Set (modificar el atributo)
	void setNit(string n){nit = n;}
	void setNombres(string name){nombres = name;}
	void setApellido(string lastname){apellidos = lastname;}
	void setDireccion(string adress){direccion = adress;}
	void setCumpleanos(string birth){fecha = birth;}
	void setel(int tel){telefono = tel;}
	void setcui(double cui){cui = c;}
	
	//Get
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellido(){return apellidos;}
	string getDireccion(){return direccion;}
	string getCumpleanos(){return fecha;}
	int getTel(){return telefono;}
	double getcui(){return cui;}
	
	void mostrar(){
		cout<<"--------------------"<<endl;
		cout<<"Nit: "<<nit<<endl;
		cout<<"Nombre: "<<nombres<<endl;
		cout<<"Apellidos: "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Telefono: "<<telefono<<endl;
		cout<<"Cui: "<<cui<<endl;
		cout<<"Fecha de nacimiento: "<<fecha<<endl;
	}	
};
