#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int mat [5][5];//declaramos una matriz
	int mat2 [5][5];
	int mat3 [5][5];
	//el ciclo for tiene un contador q inicializa en cero y finaliza cuando sea menor que cinco
	//y se aumentara en una unidad 
	for(int fila=0; fila<5; fila++){//ciclo for para las filas
		for(int col=0; col<5; col++){//ciclo for para las columnas
			mat[fila][col]=0;
			if(fila==col || fila%2==0 && col%2==0 || fila%2==1 && col%2==1){
				mat3[fila][col]=0;
			}
			else {
				mat3[fila][col]=1;
			}
			
		
		}
		
	}
	for(int fila=0; fila<5; fila++){//ciclo for para las filas
		for(int col=0; col<5; col++){//ciclo for para las columnas
			cout<<mat3[fila][col]<<"\t";
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
