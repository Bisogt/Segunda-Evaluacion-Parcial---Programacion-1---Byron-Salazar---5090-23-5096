#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribir();

int main(){
	escribir();
	
	
	return 0;
}

void escribir(){
	ofstream archivo_parcial;
	string nombre, apellido; 
	int edad;
	double salario;
	
	cout<<"digite el nombre del archivo ";
	getline(cin, Empleados.txt);
	archivo_parcial.open(getline(std::Empleados.txt), ios::out);
	
	if(archivo_parcial.fail()){
		cout<<"no se pudo abrir el archivo ";
		exit(1);
	}
	
	cout<<"\n Escriba el nombre del empleado ";
	getline(cin,nombre);
	
	cout<<"\n Escriba el apellido del empleado ";
	getline(cin,apellido);
	
	cout<<"\n Escriba la edad del empleado ";
	getline(cin,edad);
	
	cout<<"\n Escriba el salario del empleado ";
	getline(cin,salario);
	
	archivo_parcial<<nombre;
	archivo_parcial<<apellido;
	archivo_parcial<<edad;
	archivo_parcial<<salario;
	
	cout<<"\n Texto generado! abra su archivo Empleados.txt ";
	
	archivo_parcial.close();
}
