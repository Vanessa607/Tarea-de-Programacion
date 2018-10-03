//Este programa fue hecho por
//Estefany Vanessa Cerritos Zelaya
//carnet:CZ18006

//librerias a  utilizar
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

//limpia la pantalla
void limpiar();
//validaciones
float llamada(int min);
int cl(int clear); 

int main(){
	
	//variables 
	int min;
	
	//imprime en que consiste el programa 
	cout<<"PROGRAMA PARA CALCULAR EL TOTAL A PAGAR POR LOS MINUTOS DE UNA LLAMADA"<<endl;
	cout<<endl;
	
	
	do{
	//ingrese los minutos que el usuario llamo 
	cout<<"Ingrese los minutos de la llamada: ";
	cin>>min;
	cl(min);
}
//mientras minutos sea menor o igual a "1" se repetira el proceso
while (min<=1);
    //imprime lo que el ususario pagara
	cout<<"La cantidad a pagar es: "<<fixed<<setprecision(2)<<llamada(min)<<" centavos de dolar."<<endl;
		
}

void limpiar(){
	system ("cls");
}

float llamada (int min){
	float multi;
	//si habla de 1 a 10 minutos se le cobrara ha $0.05 el minuto 
	if (min>0&&min<=10){
		multi = min*0.05;
	}
	//si habla de 11 a 15 minutos se le cobrara ha $0.08 el minuto 
	else if (min<=11&&min<=15){
		multi = ((min-10)*0.08)+0.50;
	}
	//si habla mas de 15 minutos se le cobrara ha $0.10 el minuto
	else {
		multi = ((min-15)*0.10)+0.90;
	}
	return multi;
}

int cl(int clear)
{	
	if (cin.fail() || clear <= 0)
		{
			//limpia la variable
			cin.clear();
			//borra espacios y caracteres
			cin.ignore();
			cout << "Ingrese un numero valido." <<endl;
			//pausa el programa hasta que el usuario desee
			system("pause");
		}
	limpiar();
	//retorna la variable ya revisada
	return clear;		
}




