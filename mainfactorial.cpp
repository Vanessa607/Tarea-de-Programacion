#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int factorial(int num){
	int fact=1;
	for (int x=1; x<=num; x++){
		
		fact = fact*x;
	}
	return fact;
}

 int main(int argc, char** argv[]) 
{
	int num;
	//int fact=1
	
	cout <<"Dijite un numero:";
	cin >>num;
	cout <<"El resultado es:"<<factorial (num)<<endl;
	system("pause");
	
	return 0;
}
