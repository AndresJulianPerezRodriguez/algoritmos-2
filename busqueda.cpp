#include <iostream>
using namespace std;
double funcion(double x){
	return (2*x*x*x+7*x*x-5*x-1);
}
int main(){
	double x = 0;
	double resultado = funcion(x);
	double raices[3];
	int cont = 0;
	bool signo_derecha, signo_izquierda;
	if (resultado < 0){
		signo_derecha = false;
		signo_izquierda = false;
	}
	else{
		signo_derecha = true;
		signo_izquierda = true;
	}
	while (cont<3){
		x = x+0.0000001;
		if(signo_derecha){
			if (funcion(x)<=0){
				raices[cont] = x;
				cont++;
				signo_derecha = not(signo_derecha);
			}
		}
		else{
			if (funcion(x)>=0){
				raices[cont] = x;
				cont++;
				signo_derecha = not(signo_derecha);
			}
		}
		if(signo_izquierda){
			if (funcion(-1*x)<=0){
				raices[cont] = -x;
				cont++;
				signo_izquierda = not(signo_izquierda);
			}
		}
		else{
			if (funcion(-1*x)>=0){
				raices[cont] = -x;
				cont++;
				signo_izquierda = not(signo_izquierda);
			}
		}
	}
	for(int i = 0; i < 3; i++){
		cout << raices[i] << endl;
	}
}
