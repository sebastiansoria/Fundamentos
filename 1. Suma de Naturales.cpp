#include "stafx.h"
#include<iostream>
#include"conio.h"

using namespace std;

int main()
{

int suma=0,n,i;
cout<<"Ingrese hasta que numero desea hacer la suma de numeros naturales: ";
cin>>n;
for(i=0;i<=n;i++)
{
	suma=suma+i;
}
cout<<"La suma de los numeros es: "<<suma;
getch();
return 0;





}

