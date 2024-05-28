#include <iostream>
#include <math.h>
using namespace std;
double funcion(double x){
	return 2*x*x*x+7*x*x-5*x-1;
}
double medio(double inf, double sup){
	return (sup+inf)/2;
}
int main(){
	double inf = 0;
	double sup = 1;
	double p = medio(inf,sup);
	double resultado = funcion(p);
	int n;
	while (resultado>0.000001 || resultado < -0.000001){
		if (resultado<0){
			inf = p;
		}
		else{
			sup = p;
		}
		p = medio(inf,sup);
		resultado = funcion(p);
		cout << inf << "\t" << sup << endl;
	}
}
