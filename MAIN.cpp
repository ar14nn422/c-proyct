#include <iostream>
#include"VIAJE.h"
#include "coleccion.h"
int main(){
	coleccion dias;
	viaje v1;
	
	v1.solicitarDatos();
	dias.mostrarDetalleViajes(v1);
	cout<<v1.toString();

	
	return 0;
}
	
	
	/*viaje v1=viaje(5,10,11,12,32,"casa","mall");
	cout<<v1.toString();*/
