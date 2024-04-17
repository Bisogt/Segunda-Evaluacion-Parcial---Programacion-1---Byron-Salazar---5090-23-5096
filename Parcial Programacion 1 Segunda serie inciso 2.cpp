#include <iostream>
#include <string>
#include<fstream>

using namespace std;

class empleados{
	private:
		string nombre;
		string apellido;
		int edad;
		double salario;
	public:
		empleados(string, string, int, double);
		void nombre();
		void apellido();
		void edad();
		void salario();
		
};
empleados::empleados(string _nombre, string _apellido, int _edad, double _salario){
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	salario = _salario;
}

int main(){
	empleados();
	string nombre, apellido;
	int edad;
	double salario;
	
	cout<<"Ingrese el nombre"<<endl;
	cin>> nombre;
	cout<<"Ingrese el apellido"<<endl;
	cin>> apellido;
	cout<<"Ingrese la edad"<<endl;
	cin>> edad;
	cout<<"Ingrese el salario"<<endl;
	cin>> salario;
	empleados = empleados()
}


