#include<iostream>
using namespace std;
int main(){
	int n=37;
	bool x = true;
	for(int i = 2; i<n; i++){
		if(n%i == 0){
			break;
			x = false;
		}
	}
	if (x){
		cout << "el número es primo";
	}
	else{
		cout << "el número no es primo";
	}
}
