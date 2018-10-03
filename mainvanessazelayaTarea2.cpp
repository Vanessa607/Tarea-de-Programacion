//Este programa fue hecho por
//Estefany Vanessa Cerritos Zelaya
//Carnet:CZ18006

//librerias que se utlizaron
#include <iostream>
#include <windows.h>
#include <iostream>

using namespace std;

//verifica que el campo ingresado sea correcto
int cl (int clear);
//limpia la pantalla
void l();
//funcion principal
int main() {
	
	//variables 
	int sodas;
	int jugos;
	int producto;
	int TotalAgua;
	int TotalAzucar;
	int continuar = 1;
//mientras el valor sea 1, el proceso se repetira infinitamente 	
while(continuar = 1)
{
	//verifica que no de ningun error al ingresar el dato
	do
	{
		//crea las opciones de que proceso desea hacer
		cout << "Que producto desea calcular (1 = soda, 2 = jugo, 3 = salir)" << endl;
		cin >> producto;
		cl(producto);
	}while(producto < 1 || producto > 3);
	
	//divide el proceso en 3 posibilidades dependiendo de lo que el usuario seleccione
	switch(producto){
		
		//si selecciona "1" calculara la produccion de soda
		case 1:
			
			//verifica que no de ningun error al ingresar el dato
			do{
				
				cout << "ingrese la produccion diaria de soda: ";
				cin >> sodas;
				cl(sodas);
				
			}while(sodas < 1);
			
			//calcula cuanta agua y azucar se necesitara
			TotalAgua = 600 * sodas;
			TotalAzucar = 700 * sodas ;
			
			cout << "el total de produccion de soda sera de:" << sodas << "unidades" << endl;	
			//sale del switch
			break;
			
			//si selecciona "2" calculara la produccion de jugo
		case 2:
			
			//verifica que no de ningun error al ingresar el dato
			do{
				
				cout << "ingrese la produccion diaria de jugo: ";
				cin >> jugos;
				cl(jugos);
				
			}while(jugos < 1);
			
			//calcula cuanta agua y azucar se necesitara
			TotalAgua = 600 * jugos;
			TotalAzucar = 700 * jugos ;
			
			cout << "el total de produccion de jugo sera de:" << jugos << "unidades" << endl;
			//sale del switch
			break;
		
		//si lecciona "3" sale del programa	
		case 3:
			
			cout << "Gracias por preferirnos." << endl;
			system("pause");
			//termina el programa
			return 0;
	
	
	}
	
	//muestra el resultado final
	cout << "El total de agua requerida sera de:" << TotalAgua << "ml" <<endl;
	cout << "El total de azuacar requerida sera de:" << TotalAzucar << "g" <<endl;
	system ("pause");
	l();
	
	do
	{
		cout << "Decea repetirel proceso? (1=Si , 2=No) " << endl;
		cin >> continuar;
		cl(continuar);
		
	}while (continuar < 1 || continuar > 2);
	
	if(continuar == 2)
	{
			cout << "Gracias por su preferencia, que tenga un lindo dia." << endl;
			return 0;
	}
}
}

void l()
{
	system("cls");
	
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
	l();
   	//retorna la variable ya revisada
	return clear;		
}
