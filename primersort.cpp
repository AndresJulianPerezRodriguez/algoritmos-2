#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void sort(double vector[], int tamano){
	double aux;
	for(int i = 1; i<tamano; i++){
		for(int j = 0; j < i; j++){
			if(vector[i]<vector[j]){
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
		}
	}
}

int main(){
	srand(time(0));
	int tamano = 250000;
	double vector[tamano];
	for (int n = 0; n<tamano; n++){
		vector[n] = rand();
	}
	double hora = time(0);
	sort(vector,tamano);
	double tiempo = time(0)-hora;
	cout << tiempo;
}
