// Do while.cpp : Defines the entry point for the console application.
//
//#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;

int main() 
{
     int n, i=0, mayor, menor;     
     float suma;
     suma=0;
    cout<<"Se le pedirna ingresar numeros hasta que ingrese un valor negativo"<<endl;
	cout<<"Ingresar un número entero: ";
	cin>>n;
	mayor=n;
	menor=n;
	do{
		suma=suma+n;
	if(mayor<n)
		mayor=n;
	if(menor>n)
		menor=n;
	i++;//i=i+1  Suma abreviada
	cout<<"Ingresar un numero entero: ";
	cin>>n;

}
while(n>=0);
	cout<<"El mayor es: "<<mayor <<endl;
	cout<<"El menor es: "<<menor <<endl;
	cout<<"El promedio es: "<<suma/i;

getch();
return 0;
}




