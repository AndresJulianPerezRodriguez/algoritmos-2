#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
void salude(){
	string nombre;
	char genero;
	cout << "ingrese su nombre ";
	cin >> nombre;
	cout << "ingrese el g�nero con el que se identifica (M/F) ";
	cin >> genero;
	if ((genero == 'f')||(genero == 'F')){
		cout << "Es un placer conocerla se�ora " << nombre << endl;
	}
	else if ((genero == 'm')||(genero == 'M')){
		cout << "Es un placer conocerlo se�or " << nombre << endl;
	}
	else{
		cout << "Es un placer conocerle " << nombre << endl;
	}
}
void despidase(){
	char vacio;
	cout << "�Qu� hora es?";
	cin >> vacio;
	cout << "�Ya est� muy tarde! \n�me tengo que ir! \nNos vemos luego, bye";
}
int main(){
	setlocale(LC_ALL, "");
	salude();
	despidase();
}

