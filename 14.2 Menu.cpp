// 14.2 Menu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"conio.h"
using namespace std;

int main()
{ 
	int cantidad,opcion;
	float total;
	cout<<"MENU"<<endl;
	cout<<"==="<<endl<<endl;
	cout<<"1.Hamburguesa simple.......Bs. 3"<<endl;
	cout<<"2.Hamburguesa con queso....Bs. 5"<<endl;
	cout<<"3.Papas fritas.............Bs. 2"<<endl;
	cout<<"4.Soda.....................Bs. 2.5"<<endl;
	cout<<"0.Salir"<<endl;
	cin>>opcion;
	switch(opcion)
	{
	case 1: cout<<"Ingrese Cantidad:";
		cin>>cantidad;
		total=cantidad*3;
		break;
    case 2: cout<<"Ingrese Cantidad:";
		cin>>cantidad;
		total=cantidad*5;
		cout<<"El total es: "<<total;
		break;
    case 3: cout<<"Ingrese Cantidad:";
		cin>>cantidad;
		total=cantidad*2;
		cout<<"El total es: "<<total;
    case 4: cout<<"Ingrese Cantidad:";
		cin>>cantidad;
		total=cantidad*2;
		cout<<"El total es: "<<total;
		break;
    case 0: cout<<"Salir:";
		break;
	default: cout<< "Error no existe la opcion";
		break;
		
	}


	getch();
	return 0;
}

