#include "stdafx.h"
#include<iostream>
#include"conio.h"
using namespace std;

int main()
{

int multi=0,n,i;
cout<<"Ingrese el numero del que desea hacer la tabla de multiplicar: ";
cin>>n;
for(i=1;i<=10;i++)
{
	multi= n*i;
	cout<<n<<"*"<<i<<"="<<multi<<endl;
}
getch();
return 0;





}

