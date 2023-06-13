#include <iostream>
#include "VIAJE.H"
#include "COLECCION.H"
#include <cstdlib> 
#include <limits>
using namespace std;

int main() {
	viaje v1;
	Coleccion coleccion;
	int diaMes, ltrConsumidos;
	float horaFin, horaInicio,km;
	string lugarOrigen, lugarDestino;
	int opcion;
	
	do {
		
		cout << "----- MotoUVer -----" << endl;
		cout<<"\n";
		cout << "1. Ingresar nuevo viaje" << endl;
		cout<<"\n";
		cout << "2. Detalle viajes por día" << endl;
		cout<<"\n";
		cout << "3. Promedios por viaje" << endl;
		cout<<"\n";
		cout << "4. Cantidad viajes por día" << endl;
		cout<<"\n";
		cout << "5. Viajes por destino" << endl;
		cout<<"\n";
		cout << "6. Lugares con mas viajes realizados" << endl;
		cout<<"\n";
		cout << "7. Calcular ganancia diaria" << endl;
		cout<<"\n";
		cout << "8. Ordenar viajes" << endl;
		cout<<"\n";
		cout << "9. Salir" << endl;
		cout<<"\n";
		cout << "Ingrese una opción: ";
		cin >> opcion;

		switch (opcion) {
		case 1:
			
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
			
			cout << "Ingrese la hora de inicio(HH.MM): ";
			cin >> horaInicio;
			cin.ignore();
			
			cout << "Ingrese la hora de fin(HH.MM): ";
			cin >> horaFin;
			cin.ignore();
			
			
			cout<<endl;
			v1.setDiaMes(diaMes);
			v1.setLugarOrigen(lugarOrigen);
			v1.setLugarDestino(lugarDestino);
			v1.setLtrConsumidos(ltrConsumidos);
			v1.setKm(km);
			v1.setHoraInicio(horaInicio);
			v1.setHoraFin(horaFin);
			coleccion.insertar(v1);
			cout<<v1.toString();
			break;
		case 2:
			int numeroDia;
			cout << "Ingrese el numero de día: ";
			cin >> numeroDia;
			cout<<coleccion.detalleViajesPorDia(numeroDia);
			break;
		case 3:
			cout<<"A continuacion se muestran los promedios de los viajes realizados";
			coleccion.promedioViajes();
			cout<<coleccion.toStringPV() << endl;
			break;
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		case 6:
			
			break;
		case 7:
			
			break;
		case 8:
			int opcionOrdenamiento;
			cout << "Ordenar viajes por:" << endl;
			cout << "1. Día (de menor a mayor)" << endl;
			cout << "2. Monto (de mayor a menor)" << endl;
			cout << "Ingrese una opción: ";
			cin >> opcionOrdenamiento;
			if (opcionOrdenamiento == 1) {
				v1;
			} else if (opcionOrdenamiento == 2) {
				
			} else {
				cout << "Opción inválida" << endl;
			}
			break;
		case 9:
			cout << "Saliendo del programa..." << endl;
			break;
		default:
			cout << "Opción inválida" << endl;
		}
		//system("CLS");
		cout << endl;
	} while (opcion != 9);
	
	
	return 0;
}
	
	
	/*viaje v1=viaje(5,10,11,12,32,"casa","mall");
	cout<<v1.toString();*/
/*#include <iostream>
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
}*/
