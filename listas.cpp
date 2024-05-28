#include<iostream>
using namespace std;
int main(){
	int n1 = 15, n2 = 26465, n3 = -332
	;
	if (n1 > n2){
		if (n1 > n3){
			cout << n1 << endl;
			if (n2 > n3){
				cout << n2 << endl;
				cout << n3 << endl;
			}
		}
		else{
			cout << n3 << endl;
			cout << n1 << endl;
			cout << n2 << endl;
		}
	}
	else{
		if(n2 > n3){
			cout << n2 << endl;
			if (n1 > n3){
				cout << n1 << endl;
				cout << n3 << endl;
			}
		}
		else{
			cout << n3 << endl;
			cout << n2 << endl;
			cout << n1 << endl;
		}
	}
	
}
