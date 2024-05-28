#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
	double d = 1000000.000001, rd;
	float f = 1000000.000001, rf;
	rf = d-f;
	rd = d-f;
	cout << typeid(rd).name() <<rd << endl;
	cout << typeid(rf).name() <<rf << endl;
	cout << rd-rf << endl;
	
}
