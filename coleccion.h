#ifndef COLECCIONFACTURA_H
#define COLECCIONFACTURA_H
#include "FACTURA.h"
#include<sstream>
class coleccion{
private:
	factura vector[40];
	int tamano;
	int facturas;
public:
	coleccion(){
		tamano=40;
		facturas=0;
	}
	coleccion(int pTam){//constructor con parámtros, inicializa
		if(pTam>0 && pTam<=40){
		tamano=pTam;
		facturas=0;
		}
	}
	void setFacturas(int i){
		vector[i]=vector[i];
	}

	float getTamano(){
		return tamano;
	}
	int getFacturas(){
		return facturas;
	}
	factura getVector(int i){
		return vector[i];
	}
	void insertar(factura obj1){
		vector[facturas].setCedula(obj1.getCedula());
		vector[facturas].setPlatos(obj1.getPlatos());
		vector[facturas].setFrescos(obj1.getFrescos());
		vector[facturas].setHora(obj1.getHora());
		setFacturas(facturas+1);
	}
		void mostrarDetalleViajes() {
			cout<<"Ingrese el día que desea ver:"<<endl;
			cin>>diaMes;
			cout << "Detalle de viajes para el día " << diaMes << ":" << endl;
			
			for (const auto& viaje : viajes) {
				if (viaje.diaMes == dia) {
					cout << "Lugar de origen: " << viaje.lugarOrigen << endl;
					cout << "Lugar de destino: " << viaje.lugarDestino << endl;
					cout << "Hora de inicio: " << viaje.horaInicio << endl;
					cout << "Hora de fin: " << viaje.horaFin << endl;
					cout << "Litros consumidos: " << viaje.ltrConsumidos << endl;
					cout << "Kilómetros recorridos: " << viaje.km << endl;
					cout << "Monto cobrado: " << viaje.montoCobrado << endl;
					cout << "Costos: " << viaje.costos << endl;
					cout << endl;
				}
			}
		}
	string toString(int i){
		stringstream s;
		s <<endl <<endl
			<<"--------------------------------------------"<<endl
			<<endl<<endl<<"Las facturas de este mes son:"<<endl;
		    for(int i=0;i<facturas; i++){
			s<<"N de factura"<<i<<endl;
			s<<vector[i].toString();}
			s<<"--------------------------------------------";
			s<<endl<<endl;
		return s.str();
	}
	float totalVenta(int i){
		for(int i=0; i>=facturas;i++){
			return facturas+=vector[i].total();
		}
	}
	/*float totalPlatos(){
		
	}*/
	
};
#endif
