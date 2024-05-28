#include<iostream>
using namespace std;

double cuadrado(double numero){
	double resultado;
	resultado = numero*numero;
	return resultado;
}
int main(){
	int n;
	cout << "ingrese el número " << endl;
	cin >> n;
	cout << "su número al cuadrado es " << cuadrado(n) <<endl;
	system("pause");
}
