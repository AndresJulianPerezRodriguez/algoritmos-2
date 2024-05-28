#include<iostream>
#include<math.h>
#include<vector>
#include<random>
#include<chrono>
using namespace std;
void mostrar(vector<double> matriz, int dimensiones){
	for(int i = 0;i<dimensiones; i++){
		cout << matriz[i] << "\t";
	}
	cout << endl;
}
double aleatorio(long long int& seed){
	mt19937 gen(seed);
    random_device rd;
    uniform_real_distribution<> dis(0, 1);
	seed = int(dis(gen)*1000000);
	return dis(gen);
}
void generarPuntoAleatorio(vector<double>& coordenada, double min, double max, long long int& seed) {
	mt19937 gen(seed);
    random_device rd;
    uniform_real_distribution<> dis(min, max);
    for(int i; i < coordenada.size();i++){
    	coordenada[i]=dis(gen);
	}
	seed = int(dis(gen)*1000000);
	
}
double ackley(vector<double> parametros){
	const double pi = 3.14159265359;
	vector<double> optimo = {-0.4, 3, -2.3, 2.1,1.89,-3.453};
	int tamano = parametros.size();
	double exponente = 0;
	double angulos = 0;
	for(int i = 0; i < tamano; i++){
		exponente = exponente + (parametros[i]-optimo[i])*(parametros[i]-optimo[i]);
		angulos = angulos + cos(2*pi*(parametros[i]-optimo[i]));
	}
	return -20*exp(-0.2*sqrt(0.5*exponente))-exp((1.0/tamano)*angulos)+exp(1)+20;
}
int main(){
	auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
	mt19937 gen(seed);
    random_device rd;
    uniform_real_distribution<> dis(0, 1);
	seed = int(dis(gen)*100000);
	int dimensiones = 6;
	int particulas = 20;
	vector<double> punto = {-0.4, 3, -2.3, 2.1,1.89,-3.453};
	vector<double> coordenada = {0, 0, 0, 0, 0, 0};
	vector<double> vel = {0, 0, 0, 0, 0, 0};
	double matriz[particulas][dimensiones];
	double velocidades[particulas][dimensiones];
	double p_best[particulas][dimensiones];
	vector<double> PerformanceP={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	vector<double> g_best = {0,0,0,0,0,0};
	double PerformanceG = 20;
	for(int i = 0; i<particulas;i++){
		generarPuntoAleatorio(coordenada, -10, 10, seed);
		generarPuntoAleatorio(vel, -2, 2, seed);
		for(int j = 0; j<dimensiones; j++){
			matriz[i][j] = coordenada[j];
			velocidades[i][j] = vel[j];
			p_best[i][j] = matriz[i][j];
		}
		PerformanceP[i] = ackley(coordenada);
		if (PerformanceP[i] < PerformanceG){
			PerformanceG = PerformanceP[i];
			g_best = coordenada;
		}
	}
	int iteraciones = 200;
	double w = 0.6;
	double c1 = 1.5;
	double c2 = 0.89;
	double r1, r2;
	double fitness;
	for(int iter = 0; iter<iteraciones; iter++){
		for(int i = 0; i<particulas;i++){
			for(int j = 0; j<dimensiones; j++){
				coordenada[j] = matriz[i][j]+velocidades[i][j];
				matriz[i][j] = matriz[i][j]+velocidades[i][j];
			}
			fitness = ackley(coordenada);
			if (fitness < PerformanceP[i]){
				PerformanceP[i] = fitness;
				for(int j = 0; j<dimensiones;j++){
					p_best[i][j]=matriz[i][j];
				}
			}
			if (fitness<PerformanceG){
				PerformanceG = fitness;
				g_best = coordenada;
			}
		}
		for(int i = 0; i<particulas; i++){
			for(int j = 0; j<dimensiones; j++){
				r1 = aleatorio(seed);
				r2 = aleatorio(seed);
				//cout << matriz[i][j] << "\t";
				velocidades[i][j] = w*velocidades[i][j]+c1*r1*(p_best[i][j]-matriz[i][j])+c2*r2*(g_best[j]-matriz[i][j]);
			}
			//cout << endl;
		}
		mostrar(g_best,dimensiones);
	}
	cout << "rendimiento " << PerformanceG << endl;
	cout << "g_best ";
	for(int j = 0; j<dimensiones;j++){
		cout << g_best[j]-punto[j] << ", ";
	}
}
