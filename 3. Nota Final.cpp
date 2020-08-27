// Mayor.cpp : Defines the entry point for the console application.
//3. Construir un algoritmo para calcular la nota de final de un alumno sabiendo que rindió 3 exámenes parciales ponderados como 40 puntos, 
//un examen final de 40 puntos, un proyecto final de 20 puntos.  La nota final es la suma de los tres conceptos.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float a,b,c,d,e,x;

	cout<<"Hola Crack, voy a darte tu nota final, dame los siguientes datos:"<<endl;
    cout<<"Escribe la nota del Primer Parcial: ";
		cin>>a;
	cout<<"Escribe la nota del Segundo Parcial: ";
		cin>>b;
	cout<<"Escribe la nota del Tercer Parcial: ";
		cin>>c;
	cout<<"Escribe la nota del Final: ";
		cin>>d;
	cout<<"Escribe la nota del Practica: ";
		cin>>e;
x= (((a+b+c)/3)*0.4+d*0.4+e*0.2);
		cout<<"Tu nota final
es: "<<x;
	 getch();
	return 0;

}

