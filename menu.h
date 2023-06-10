#include<iostream>
#include <windows.h>
#include <string.h>
#ifndef CICLO_H
#define CICLO_H
#include <sstream>
#include "VIAJE.h"
using namespace std;

class ciclo{
public:
	void menu();
};





////////////////////////////////////////////////////////////////////////////
int main () {
	ciclo obj1;
	obj1.menu();
	return 0;
}

void ciclo::menu(){
	char repetir = 'S';
	char opcion[9]; 
	char opcion2[2];
	while(repetir !='N'){
		string toString(){
			stringstream s;
			s<<endl<<endl
				s<<"____________________"<<endl;
			s <<"Bienvenido a MotoUver"<<endl;
			s<<"(1) Ingresar nuevo viaje \n  	(2) Detalle viajes por día\n  	(3) Promedios por viaje \n  	(4) Cantidad viajes por día\n   	(5) Viajes por destino\n 	(6) Lugares con más viajes realizados\n  	(7) Calcular ganancia diaria \n 	(8) Ordenar viajes\n  	(9) Salir    ";<<endl;
			s<<endl<<endl;
			return s.str();
		}
			
			cin>>opcion;
			if (strlen(opcion)>1){
				opcion[0]='0';
				viaje v1=viaje(5,10,11,12,32,"casa","mall");
				cout<<v1.toString();
			}
			switch(opcion[0]){
			case '1':
				cout<<"Ingresar nuevo Viaje"<<endl;
				break;
			case '2':
				cout<<"Detalle viajes por dia"<<endl;
				break;
			case '3':
				cout<<"Promedios pro viaje"<<endl;
				break;
			case '4'://opcion para salir 
				cout<<"Cantidad viajes por dia"<<endl; 
				break; 
			case '5':
				cout<<"Promedios por viaje"<<endl;
				break;
			case '6':
				cout<<"Lugares con mas viajes realizados"<<endl;
				break;
			case '7':
				cout<<"Calcular ganancia diaria"<<endl;
				break;
			case '8':
				cout<<"Ordenar viajes: \nIngrese 1 si desea ordenarlos por dias \n Ingrese 2 si desea ordenarlos por monto"<<endl;
				cin>>opcion2;
				switch(opcion2[0]){
				case '1':
					cout<<"Por dia";
					break;
				case '2':
					cout<<"Por monto";
					break;
				}
				break;
			case '9'://opcion para salir 
				repetir= 'N'; 
			default:
				cout<<"Opcion no valida";
			}
			if (repetir != 'N'){
				repetir='   ';
			}
			while (repetir != 'S' && repetir != 'N'){
				cout<<"Deseas repetir el programa ingrese S para si o ingrese N para no  ";
				cin>> repetir;
				repetir = toupper(repetir);//esto es para que al programa no le afecten las letras en mayuscula o minuscula
			}
			system ("cls");
			
	};
