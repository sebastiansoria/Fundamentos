// Valor absoluto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"conio.h"
using namespace std;
int main()

{
float a,i;
do{
	
	cout<<"Ingrese el numero del cual quiere saber el valor absoluto: ";
	cin>>a;
	if(a>=0)
	{
		cout<<"El valor absoluto es de "<<a;
	}
	else
	{
		cout<<"El valor absoluto es de "<<-a;
	}
	cout<<endl<<"Pressione 1 para repetir"<<endl<<"Presione 2 para salir"<<endl;
	cin>>i;
}while(i==1);


	getch();
	return 0;
}

