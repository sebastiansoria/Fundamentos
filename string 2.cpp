// EjemploString2.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include "conio.h"
#include <string>

using namespace std;

int main()
{
	string nombrecompleto,nombre,apellido;
	int longitud,espacio;
	cout<<"Ingrese el nombre: ";
	getline(cin,nombrecompleto);  // cin pero no tomaria en cuenta el espacio cin>>nombre;
	cout <<"Hola "<<nombrecompleto<<endl;
	espacio=nombrecompleto.find(' ');//Da el valor de la posicion para ' '
	longitud=nombrecompleto.length();//Da el valor de la longitud de la variable string nombrecompleto
	nombre=nombrecompleto.substr(0,espacio);
	apellido=nombrecompleto.substr(espacio+1,longitud-espacio);
	cout<<apellido<<endl;
	nombrecompleto= apellido + ' ' + nombre;
	cout<<nombrecompleto;
	getch();
}
