// 11. Peso de Carta.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int P;
	cout<<"Declare el Peso de su carta: ";
	cin>>P;
	do{
	if(P<=0)
		cout<<"Error";
	if((0<P) && (P<50)) 
		cout<<"El costo es Bs. 1.50";
	if((50<P) && (P<=100))
		cout<<"El costo es: Bs. 4.00";
	if((100<P) && (P<=200))
		cout<<"El costo es: Bs. 6.00";
	if((200<P) && (P<350)) 
		cout<<"El costo es Bs. : 10.50";
	if((350<P) && (P<=500))
		cout<<"El costo es: Bs. 15.00";
	if(P>500)
		cout<<"NO PUEDE ENVIAR COMO CARTA ";
	getch();
	return 0;
}

