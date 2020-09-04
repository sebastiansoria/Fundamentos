#include<iostream>
#include"conio.h"
using namespace std;
int main()
{
	float n,suma,i,s;
	do
	{
	
	cout<<"Ingrese el termino n-esimo ";
	cin>>n;
	i=0;
	suma=0;
	
	
	while(i<n)
	{
	i=i+1;
	suma=suma+i;
	
	}
	cout<<"La suma es de: "<<suma<<endl;
	cout<<"Presione 1 si desea hacer otra suamtoria"<<endl;
	cout<<"Presione 2 si desea salir"<<endl;
	
	cin>>s;
	
   }while (s!=2);
	
	
	
	getch();
	return 0;
}
