#include <iostream>
#include <math.h>
using namespace std;
double funcion(double x){
	return cos(x)-log(x);
}
double derivada(double x){
	double pedacito = 0.00001;
	return (funcion(x+pedacito)-funcion(x))/pedacito;
}
int main(){
	double x = 0.1;
	double resultado = funcion(x); 
	int iteraciones = 0;
	while (resultado>0.000001 || resultado < -0.000001){
		x = x-funcion(x)/derivada(x);
		resultado = funcion(x);
		iteraciones++;
	}
	cout << x << endl;
	cout << resultado << endl;
	cout << iteraciones << endl;
}
