// 4. Salario.cpp : Defines the entry point for the console application.
//4.	Deducir el salario neto de un trabajador a partir de la lectura del nombre, horas trabajadas al mes, precio por hora, sabiendo que todo 
//lo que se descuenta es un impuesto  RC-IVA de 13% sobre el salario bruto.  Los trabajadores que  ganan más de 8.272 bolivianos están obligados 
//a  pagar el impuesto al Régimen Complementario al Impuesto al Valor Agregado (RC-IVA).  

//#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <string.h>
using namespace std;

int main()
{  
	float b,c;
    char a [30]; 
	cout<<"Escriba el nombre del trabajador a quien quiere deducirle el salario neto: ";
	gets(a);
	cout<<"Escriba las horas trabajadas al mes: ";
	cin>>b;
	cout<<"Escriba el precio por hora: ";
	cin>>c;
	if ((b*c)>8272) {
    cout<<"El salario neto de "<<a;
    cout<<" es de:"<<b*c*0.87;
}
    else {
 cout<<"El salario neto de "<<a;
    cout<<" es de:"<<b*c;}

	getch();
	return 0;
}

