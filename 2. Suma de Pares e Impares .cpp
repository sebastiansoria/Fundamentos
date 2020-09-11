
//Suma de los números enteros impares comprendidos entre 1 y N.
//	S=1+3+5+⋯…………+N 



#include "stdafx.h"
#include<iostream>
#include"conio.h"
using namespace std;

int main()
{

int suma=0,n,i;
cout<<"Ingrese el valor de n ";
cin>>n;
for(i=1;i<=n;i++)
{
	suma= i+2;
}
cout<<"La suma es: "<<suma;
getch();
return 0;

