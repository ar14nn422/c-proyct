#ifndef VIAJE_H
#define VIAJE_H
#include <sstream>
#include <limits>
using namespace std;

class viaje {
private:
	int diaMes,ltrConsumidos;
	float km,horaInicio, horaFin;
	string lugarOrigen, lugarDestino; 
	
public:
	viaje(){
		horaFin=0.0;
		horaInicio=0.0;
		ltrConsumidos=0;
		diaMes=0;
		km=0.0;
		lugarDestino="Vacï¿½o";
		lugarOrigen="Vacï¿½o";
	}
	viaje(int pdiaMes, int pLtrConsumidos, float pHoraInicio, float pHoraFin, float pKm, string pLugarDestino, string pLugarOrigen){
		diaMes=pdiaMes;
		ltrConsumidos=pLtrConsumidos;
		horaInicio=pHoraInicio;
		horaFin=pHoraFin;
		km=pKm;
		lugarDestino=pLugarDestino;
		lugarOrigen=pLugarOrigen;
	}
	void setDiaMes(int pDiaMes){
			diaMes=pDiaMes;
		}
	void setLugarOrigen(string pLugarOrigen){
				lugarOrigen=pLugarOrigen;
			}
	void setLugarDestino(string pLugarDestino){
	lugarDestino=pLugarDestino;
	}
	void setHoraInicio(float pHoraInicio){
	if(horaInicio>=1 && horaInicio<=24){
	horaInicio=pHoraInicio;
	}
	}
	void setLtrConsumidos(int pLtrConsumidos){
	ltrConsumidos=pLtrConsumidos;
	}
	void setHoraFin(float pHoraFin){
	if(horaFin>=1 && horaFin<=24){
		horaFin=pHoraFin;
	}
	}
	void setKm(float pKm){
	km=pKm;
	}
		
	int getDiaMes(){
	return diaMes;
	}
	string getLugarOrigen(){
	return lugarOrigen;
	}
	string getLugarDestino(){
	return lugarDestino;
		}
	float getHoraInicio(){
	return horaInicio;
	}
		int setLtrConsumidos(){
	return ltrConsumidos;
	}
	float getHoraFin(){
		return horaFin;
	}
	float getKm(){
		return km;
	}
	float MontoCobrado(){
		int min=1000;
		
		if(km>=2)
		return 500*km+min;
	return 0;
	}
	float Adicional(){
		float monto=MontoCobrado();
		if(horaInicio>=22 || horaInicio<=6){
		return monto+(monto*0.25);
		}
		return monto;
		}
	float Costos(){
		int conduccion=150*km;
		float gasolina=(km/5)*850;
		return conduccion+ gasolina;
	}
	void solicitarDatos() {
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
		}
	
	string toString(){
		stringstream s;  
		s <<endl <<endl
	<<"--------------------------------------------"<<endl
		<<"Día del mes:"<<diaMes<<endl
		<<"Kilï¿½metros recorridos: " << km<<endl
		<<"Litros gastados: "<<ltrConsumidos<<endl
		<<"Lugar de origen: " << lugarOrigen<<endl
		<<"Lugar de destino: " << lugarDestino<<endl
		<<"Hora inicio: " << horaInicio<<endl
		<<"Hora fin: " << horaFin<<endl
	<<"--------------------------------------------"<<endl
		<<"Monto cobrado(tarifa mínima 1000): "<<endl
		<<MontoCobrado()<<" colones, 500 por km"<<endl
		<<"Al ser el viaje a las "<<horaInicio<<" se cobra un recargo adicional de 25%, para un total de: "<<Adicional()<<endl
		<<"--------------------------------------------"<<endl
		<<"Gastos: "<<endl
		<<Costos()<<endl
	<<endl<<endl;
		return s.str();
	}
	
};

#endif
