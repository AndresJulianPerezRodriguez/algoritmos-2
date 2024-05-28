#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include <cstdio>
using namespace std;

struct estudiantes {
	string nom;
	string ape;
	string ced;	
	string em;
};
 
struct materias {
string nomate;
	string des;
	string sem;
};

struct matricula {
string nomest;
	string nomate;
	float not1,not2,not3,def;
};


void agregar_estudiante(){
	ofstream archivo;
	string nombreArchivo,estudiante;
	char rpt;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
		
	archivo.open("estudiantes.txt",ios::out); //Creamos el archivo
	
	
	if(archivo.fail()){ //Si ha ocurrido algun error
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Digite el nombre del estudiante ";
		getline(cin,estudiante);
		archivo<<estudiante<<endl;
		
		cout<<"\nDesea agregar otro estudiante(S/N): ";
		cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
	archivo.close(); //Cerramos el archivo
}
void ver_lista_de_estudiantes(){
	ifstream archivo;
	archivo.open("estudiantes.txt");
	string renglon;
	if ( archivo.is_open() ) {
		while ( archivo ) { // equivalent to myfile.good()
			getline(archivo, renglon);
			cout << renglon << endl;
		}
	}
	else {
		cout << "no pude abrir el archivo" << endl;
	}
}

int main(){
	int x;
	remove("estudiantes.txt");
	do{
	cout<<"--Elija una opcion segun lo necesite--"<<endl;
	cout<<"1. Agregar Estudiante : "<<endl;
	cout<<"2. Ver lista de estudiantes"<<endl;
	cout<<"3. Agregar Materia :"<<endl;
	cout<<"4. Ver Materia :"<<endl;
	cout<<"5. Agregar Matricula"<<endl;
	cout<<"6. Ver Matricula :"<<endl;
	cout<<"7. Salir :"<<endl;
	cout<<"Opcion ";
	cin>>x;
	system("cls");
	switch (x){
		case 1:
			agregar_estudiante();
			break;
		case 2:
			ver_lista_de_estudiantes();
			break;
	}
	}while(x<=7);
	return 0;
} 
