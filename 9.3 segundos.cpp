// 9. Segundos.cpp : Defines the entry point for the console application.
//9.	Construir un algoritmo que lea una cantidad de SEGUNDOS y los convierta en HORAS, MINUTOS Y SEGUNDOS 
//Ejemplo:  3750 Segundos ? 1 Hora, 2 minutos, 30 Segundos


//#include "stdafx.h"
#include"conio.h"
#include"math.h"
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	cout<<"Escribe la cantidad de segundos que deseas covertir: ";
	cin>>a;
	b=a/3600;
	c= (a-floor(b)*3600)/60;
    d=a-floor(b)*3600-floor(c)*60;
	cout<<"son:"<<endl;
	cout<<floor(b);
	cout<<"Hora(s)"<<floor(c);
	cout<<"Minuto(s)"<<floor(d);
	cout<<"Segundo(s)";

	getch();
	return 0;
}

