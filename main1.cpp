/*Este programa calcula el salario
de los empleados segun sus ventas*/

//Este programa fue hecho por
//Estefany Vanessa Cerritos Zelaya
//Carnet:CZ18006
//Fecha:10 de septiembre de 2018


//libreria utilizada
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {
	
	/*Distintos colores para la fondo y el fuente*/
	//system( " color 8F " ); /*color de fondo:gris y color de fuente:blanco*/
	system( " color 8B " ); /*color de fondo:gris y color de fuente:agua marina claro*/
	//system( " color 5F " ); /*color de fondo:purpura y color de fuente:blanco*/
	
	//Declaracion de variables
	float ventas;
	float sueldos;
	
	//Entrada del dato de ventas
	
	do{
		cout <<" Introduzca las ventas: " <<endl;
		cin >> ventas;	
	}
	while ( ventas <=0 );
	
	/*Si las ventas son menor o igual que 500000 su salario
	sera $80.000*/ 
	if (  ventas > 0 &&  ventas <= 500000){
		sueldos = 80.000;
		cout << " El salario del empleado es de:$ " <<fixed<<setprecision(3)<<sueldos<<endl;
		cout <<'\a';
	}
	
	/*Si las ventas son mayor o igual a 500001 y menor o igual a 1000000
	su salario sera $160.000*/
	else if( ventas >= 500001 && ventas <= 1000000){
		sueldos = 160.000;
		cout << " El salario del empleado es de:$ " <<fixed<<setprecision(3)<<sueldos<<endl;
		cout <<'\a';
	}
	
	/*Si las ventas son mayor o igual a 1000001 y menor o igual a 1500000
	su salario sera $320.000*/
	else if( ventas >= 1000001 && ventas <= 1500000){
		sueldos = 320.000;
		cout << " El salario del empleado es de:$ " <<fixed<<setprecision(3)<<sueldos<<endl;
		cout <<'\a';
	}
	
	/*Si las ventas son mayor o igual a 1500001 y menor o igual a 2500000
	su salario sera $450.000*/
	else if( ventas >= 1500001 && ventas <= 2500000){
		sueldos = 450.000;
		cout << " El salario del empleado es de:$ " <<fixed<<setprecision(3)<<sueldos<<endl;
		cout <<'\a';
	}
	
	/*Si las ventas son mayor o igual a 2500001 y menor o igual a 4000000
	su salario sera $550.000*/
	else if( ventas >= 2500001 && ventas <= 4000000){
		sueldos = 550.000;
		cout << " El salario del empleado es de:$ " <<fixed<<setprecision(3)<<sueldos<<endl;
		cout <<'\a';
	}
	
	/*Si las ventas son mayor o igual a 4000000 
	su salario sera el 20% de las ventas*/
	else if ( ventas > 4000000 ){
		sueldos = ventas * 0.20;
		cout << " El salario del empleado es de:$ " <<fixed<<setprecision(3)<<sueldos<<endl;
		cout <<'\a';
	}

	
	return 0;
}
