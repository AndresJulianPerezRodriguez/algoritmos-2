#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
void salude(){
	string nombre;
	char genero;
	cout << "ingrese su nombre ";
	cin >> nombre;
	cout << "ingrese el género con el que se identifica (M/F) ";
	cin >> genero;
	if ((genero == 'f')||(genero == 'F')){
		cout << "Es un placer conocerla señora " << nombre << endl;
	}
	else if ((genero == 'm')||(genero == 'M')){
		cout << "Es un placer conocerlo señor " << nombre << endl;
	}
	else{
		cout << "Es un placer conocerle " << nombre << endl;
	}
}
void despidase(){
	char vacio;
	cout << "¿Qué hora es?";
	cin >> vacio;
	cout << "¡Ya está muy tarde! \n¡me tengo que ir! \nNos vemos luego, bye";
}
int main(){
	setlocale(LC_ALL, "");
	salude();
	despidase();
}

