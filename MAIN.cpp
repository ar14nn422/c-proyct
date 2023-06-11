#include <iostream>
#include"VIAJE.h"
#include "coleccion.h"
int main(){
	Coleccion dias;
	viaje v1;
	int diaMes, ltrConsumidos;
	float horaFin, horaInicio,km;
	string lugarOrigen, lugarDestino;
		cout<<"Enter para ingresar un viaje..."<<endl;
		getchar();
		
		cout << "Ingrese el día del mes(1-31): ";
		cin >> diaMes;
		cin.ignore();
		
		cout << "Ingrese el lugar de origen: ";
		cin.ignore();
		getline(cin, lugarOrigen);
		
		cout << "Ingrese el lugar de destino: ";
		getline(cin, lugarDestino);
		
		cout << "Ingrese los litros consumidos: ";
		cin >> ltrConsumidos;
		
		
		cout << "Ingrese los kilómetros recorridos: ";
		cin >> km;
		
		cout << "Ingrese la hora de inicio(HH,MM): ";
		cin >> horaInicio;
		cin.ignore();
		
		cout << "Ingrese la hora de fin(HH,MM): ";
		cin >> horaFin;
		cin.ignore();
		
		
		cout<<endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//v1.solicitarDatos();
	dias.insertar(v1);
	cout<<v1.toString();


	
	return 0;
}
	
	
	/*viaje v1=viaje(5,10,11,12,32,"casa","mall");
	cout<<v1.toString();*/
