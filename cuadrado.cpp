#include<iostream>
using namespace std;

double cuadrado(double numero){
	double resultado;
	resultado = numero*numero;
	return resultado;
}
int main(){
	int n;
	cout << "ingrese el n�mero " << endl;
	cin >> n;
	cout << "su n�mero al cuadrado es " << cuadrado(n) <<endl;
	system("pause");
}
