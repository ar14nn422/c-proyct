#ifndef COLECCION_H
#define COLECCION_H
#include "VIAJE.h"
using namespace std; 

class Coleccion{
private:
	viaje vector[310];
	int viajes;
	int Cantidad;
	double promedioKilometraje;
	double promedioCosto;
	double promedioMontoCobrado ;
	double promedioLitrosGasolina;
public:
	Coleccion(){//constructor
		viajes =310;
		Cantidad =0;
		promedioKilometraje=0;
		promedioCosto=0;
		promedioMontoCobrado=0 ;
		promedioLitrosGasolina=0;
	}
	Coleccion(int pviajes){
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
						
						void insertar(viaje v1){
							if(Cantidad<viajes){
								vector[Cantidad].setHoraFin(v1.setHoraFin());
								vector[Cantidad].setHoraInicio(v1.setHoraInicio());
								vector[Cantidad].setLtrConsumidos(v1.setLtrConsumidos());
								vector[Cantidad].setDiaMes(v1.getDiaMes());
								vector[Cantidad].setKm(v1.setKm());
								vector[Cantidad].setLugarDestino(v1.setLugarDestino());
								vector[Cantidad].setLugarOrigen(v1.getLugarOrigen());
								setCantidad(Cantidad+1 );
							}
						}
							
							
							string detalleViajesPorDia(int numeroDia) {
								stringstream s;
								s << "Detalle de los viajes realizados en el día " << numeroDia << ":\n\n";
								
								for (int i = 0; i < Cantidad; i++) {
									if (vector[i].getDiaMes() == numeroDia) {
										s << "Lugar de origen: " << vector[i].getLugarOrigen() << endl;
										s << "Lugar de destino: " << vector[i].setLugarDestino() << endl;
										s << "Kilómetros recorridos: " << vector[i].setKm() << endl;
										s << "Litros consumidos: " << vector[i].setLtrConsumidos() << endl;
										s << "Hora de inicio: " << vector[i].setHoraInicio() << endl;
										s << "Hora de fin: " << vector[i].setHoraFin() << endl;
										s << "Monto cobrado: " << vector[i].MontoCobrado() << endl;
										s << "Costos: " << vector[i].Costos() << endl;
										s << "--------------------------\n";
									}
								}
								
								return s.str();
							}
							void promedioViajes(){
								int totalViajes=Cantidad;
								double totalKilometraje = 0.0;
								double totalCosto = 0.0;
								double totalMontoCobrado = 0.0;
								double totalLitrosGasolina = 0.0;
								
								for(int i = 0; i < totalViajes; i++){
									totalKilometraje= totalKilometraje +vector[i].setKm();
									totalMontoCobrado= totalMontoCobrado + vector[i].MontoCobrado();
									totalLitrosGasolina= totalLitrosGasolina + vector[i].setLtrConsumidos();
									totalCosto= totalCosto+vector[i].Costos();
								}
								promedioKilometraje = totalKilometraje / totalViajes;
								promedioCosto = totalCosto / totalViajes;
								promedioMontoCobrado = totalMontoCobrado / totalViajes;
								promedioLitrosGasolina = totalLitrosGasolina / totalViajes;
								
								
							}
								string toStringPV(){
									stringstream s;  
									s <<endl <<endl
										<<"--------------------------------------------"<<endl
										<<"El Kilometraje promedio es de: "<<promedioKilometraje  <<endl
										<<"El costo promedio es de " <<promedioCosto<<endl
										<<"El monto promedio Cobrado es de: "<<promedioMontoCobrado<<endl
										<<"El promedio de litros gastados es: "<<promedioLitrosGasolina<<endl;
									return s.str();
								}


};







#endif
