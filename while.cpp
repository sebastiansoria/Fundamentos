#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,facto,numero;
i=1;
facto=1;
cout<<"Ingrese numero"<<endl;
cin>>numero;
while(i<=numero)
{
	facto=facto*i;
	i=i+1;
}
cout<<"El valor factorial de " <<numero<<" es: "<<facto;
getch();
	
}
