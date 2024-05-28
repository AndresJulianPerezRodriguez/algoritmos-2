#include <iostream>
#include <vector>
using namespace std;

vector<int> numeros(int n){
	vector<int> vec(n);
	for(int i = 0; i < n; i++){
		vec[i] = i+1;
	}
	return vec;
}
int main(){
	vector<int> lista;
	int n;
	cout << "ingrese n" << endl;
	cin >> n;
	lista = numeros(n);
	for(int j = 0; j < n; j++){
		cout << lista[j] << endl;
	}
}
