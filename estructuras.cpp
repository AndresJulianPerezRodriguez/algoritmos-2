#include <iostream>
#include <string>
using namespace std;

int main(){
	struct empleado{
		string nombre;
		string cargo;
		int edad;
		double sueldo;
	} persona1 = {"Jhon Jairo Velásquez Vásquez","Jefe de la Mafia de Pablo Emilio Escobar Gaviria",57,3500000},
	  persona2 = {"Pablo Emilio Escobar Gaviria","Jefe de la Mafia",90,35000000000000000};
	cout << persona2.edad;
}
