#ifndef COLECCION_H
#define COLECCION_H
#include "VIAJE.h"
using namespace std; 

class Coleccion{
private:
	viaje vector[310];
	int viajes;
	int Cantidad;
public:
	coleccion(){//constructor
		viajes =310;
		Cantidad =0;
	}
	coleccion(int pviajes){
		if(pviajes>0 && pviajes<=310){
			viajes=pviajes;
			Cantidad =0;
		}
	}
		viaje getVector(int i){
			return vector [i];
		}
			void setCantidad(int can){
				if((can<=viajes)&&(can>0) )
					Cantidad=can;
			}
				int getViajes(){
					return viajes;
				}
					int getCantidad(){
						return Cantidad;
					}
						/*~coleccion(){//destructor
						}*/
						
						void insertar(viaje obj1){
							if(Cantidad<viaje){
								vector[Cantidad].setHoraFin(obj1.getHoraFin());
								vector[Cantidad].setHoraInicio(obj1.getHoraInicio());
								vector[Cantidad].setLtrConsumidos(obj1.setLtrConsumidos());
								vector[Cantidad].setDiaMes(obj1.getDiaMes());
								vector[Cantidad].setKm(obj1.getKm());
								vector[Cantidad].setLugarDestino(obj1.getLugarDestino());
								vector[Cantidad].setLugarOrigen(obj1.getLugarOrigen());
								setCantidad(Cantidad+1 );
							}
						}
							
							
							string toString(int i){
								stringstream s;
								s<<endl<<endl;
								s<<"--------------------------------------------------";
								s<<endl<<endl<<"Las facturas de este mes son:"<<endl;
								for (int i=0; i<Cantidad; i++){
									s<<"N° factura: "<< i<<endl;
									s<<vector[i].toString();
									s<<endl<<endl;
								}
								return s.str();
							}
								/*insertarFactura(){
									
								}
								totalVenta(){
								}
								gananciaObtenida(){ //promedio paso 3
									
								}*/

};







#endif
