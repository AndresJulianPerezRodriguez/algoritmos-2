#include<iostream>
using namespace std;
int main(){
	int n1, n2, MCD = 1;
	cout << "ingrese n1: ";
	cin >> n1;
	cout << "ingrese n2: ";
	cin >> n2;
	int i = 2;
	while (n1 != i and n2 != 0){
	if((n1%i == 0) and (n2%i == 0)){
	MCD = MCD*i;
	n1 = n1/i;
	n2 = n2/i;
	}
	else{
	i++;
	}
	}
	cout << "el maximo comun divisor es " << MCD;
}
