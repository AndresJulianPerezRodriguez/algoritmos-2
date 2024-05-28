#include<iostream>
using namespace std;

const double pi = 3.14159265359;

double modulo(double divisor, double dividendo){
	while (divisor > dividendo){
		divisor = divisor - dividendo;
	}
	return divisor;
}

double angulo(double ang){
	bool signo;
	signo = ang<0;
	if (signo){
		ang = -ang;
	}
	ang = modulo(ang,2*pi);
	
	if (ang < pi){
		return (-1*(2*signo-1)*ang);
	}
	else{
		return -1*(2*signo-1)*(ang-2*pi);
	}
}

double factorial(int n){
	double resultado = 1;
	for(int i = 2; i<=n;i++){
		resultado = resultado*i;
	}
	return resultado;
}
double pow(double base, int exponente){
	double resultado = 1;
	for(int i = 0; i<exponente; i++){
		resultado = base*resultado;
	}
	return resultado;
}
double sin(double argumento){
	double suma = 0;
	argumento = angulo(argumento);
	for(int i = 1; i<20; i = i+2){
		suma = suma + pow(-1,(i-1)/2)*pow(argumento,i)/factorial(i);
	}
	return suma;
}

double cos(double argumento){
	double suma = 1;
	argumento = angulo(argumento);
	for(int i = 2; i<20; i = i+2){
		suma = suma + pow(-1,i/2)*pow(argumento,i)/factorial(i);
	}
	return suma;
}

double tan(double argumento){
	return (sin(argumento)/cos(argumento));
}

int main(){
	double argumento;
	cout << "ingrese el ángulo ";
	cin >> argumento;
	cout<<"la tangente del ángulo es " << tan(argumento*pi/180);
}
