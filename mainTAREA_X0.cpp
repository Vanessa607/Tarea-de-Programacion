//Este programa fue hecho por 
//Estefany Vanessa Cerritos Zelaya 
//Carnet:CZ18006

//Librerias utlizadas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int c[9]={0,0,0,0,0,0,0,0,0}, turno, jugador;
char denuevo=' ';

char tirada(int i); //Necesaria en COUT, retorna 'X', 'O' o ' '//
int ganador(); //Deduce si hay un ganador, regresa -1, 0 o 1//
void print_XO(); //Imprime el tablero de X 0 //
void turno_jugador();//Turno del jugador
void turno_computadora();//Turno de la computadora
int main()
{
do
{
	
    int h, menu;
    //imprime el menu que contiene 1)jugar 2)instrucciones 3)si el jugador no desea salir 
    cout<<"Menu: \n";
    cout<<"1)Jugar \n";
	cout<<"2)Instrucciones \n";
	cout<<"3)Salir \n";
	cin>>menu;
	
    switch(menu)
 {
  case 1:                 
  	  jugador = 1; 
      turno = 0;
	  do
      {
          turno++;
		  if (jugador) turno_jugador(); else turno_computadora();
           print_XO();     
	  }
       while ((!ganador())&&(turno<=8));
       switch (ganador())
      {
     	 case 0:
		 	 cout<<" ------------ ";
             cout<<" | EMPATAMOS |";
             cout<<" ------------";			
			 break;
                                     
   	     case 1:
             cout<<" ------------";
             cout<<" | TU GANAS |";
             cout<<" ------------";
        	 break;
                                
         case -1:
        	 cout<<" ------------";
             cout<<" |  TE GANE  |";
             cout<<" ------------";
			 break;
      } break;
         	case 2:
         		//Imprime las instrucciones
              cout<<" Vamos a jugar X 0 \n Las casillas estan enumeradas asi: \n 1 |2 |3 \n --+--+-- \n 4 |5 |6 \n --+--+-- \n 7 |8 |9 \n";
              cout<<" Elije una casilla pulsando un numero. Una vez que tires tu, tirare yo. \n Gana quien haga una linea de tres caracteres iguales \n ya sean horizontales, verticales o diagonales \n";
              getchar();
              break;
          
		   
            case 3:
            	//Imprime el mensaje cuando decea salir 
               cout<<"\n Fue un placer jugar contigo";
               getchar();
               exit(1);
              break;    
 } 
         cout<<"\n\n Volver al menu? (s o n) ";
         cin>>denuevo;
         if (denuevo>=97) denuevo-=32;
         if ((denuevo!='s')&&(denuevo!='n'))
         for (h=0;h<=8;h++) c[h]=0;         
}
while (denuevo=='S');             
getchar();

}

 //Esta funcion acomoda los valores en el dibujo del tablero//
void print_XO()
{
   cout<<"\n"<<tirada(c[0])<<"  | "<<tirada(c[1])<<"  | "<<tirada(c[2])<<"\n ---+---+--- \n"<<tirada(c[3])<<"  | "<<tirada(c[4])<<"  | "<<tirada(c[5])<<"\n ---+---+--- \n"<<tirada(c[6])<<"  | "<<tirada(c[7])<<"  | "<<tirada(c[8])<<"\n";
}

char tirada(int i)
{
     switch (i)
     {
            case (-1):
                 return 'X';
                 break;
                 
            case (1):
                 return 'O';
                 break;
                 
            default:
                    return ' ';
     }
}
//Esta funcion compara el arreglo con los patrones de posible ganador//
int ganador() 
{
    if ((c[0]+c[1]+c[2]==3)|| (c[3]+c[4]+c[5]==3)|| (c[6]+c[7]+c[8]==3)|| (c[6]+c[3]+c[0]==3)|| (c[7]+c[4]+c[1]==3)|| (c[8]+c[5]+c[2]==3)|| (c[6]+c[4]+c[2]==3)|| (c[8]+c[4]+c[0]==3)) return 1;
    else if ((c[0]+c[1]+c[2]==-3)|| (c[3]+c[4]+c[5]==-3)|| (c[6]+c[7]+c[8]==-3)|| (c[6]+c[3]+c[0]==-3)|| (c[7]+c[4]+c[1]==-3)|| (c[8]+c[5]+c[2]==-3)|| (c[6]+c[4]+c[2]==-3)|| (c[8]+c[4]+c[0]==-3)) return -1;
    else return 0;
}
 //coloca el caracter en la casilla seleccionada y verifica que no este ocupada//
void turno_jugador()
{
     int quieres;
     cout<<"\n Te toca, En que casilla quieres tirar? [1-9]  ";
     cin>>quieres;
     
     if ((quieres>9)|| (quieres<1)|| (c[quieres-1]!=0))
     {
                       do
                       {
                                     cout<<"\n Esa casilla esta ocupada, intenta en otra: [1-9] ";
                                     fflush(stdin);
                                     
                                     cin>>quieres;
                       }
                       while ((quieres>9)|| (quieres<1)|| (c[quieres-1]!=0));
     }
     
     c[quieres-1]=1;
     jugador = 0;
}
// coloca el valor de la computadora a tirar, en una posicion aleatoria//
void turno_computadora() 
{
     int quiero;
     time_t t;
     cout<<"\n Me toca, tiro en la casilla: ";
     do
     {
                  srand(time(&t));
                  quiero=rand()%9;
     }
     while (c[quiero]!=0);
     cout<<quiero + 1;
     
     c[quiero]=-1;
     jugador = 1;
}
    


