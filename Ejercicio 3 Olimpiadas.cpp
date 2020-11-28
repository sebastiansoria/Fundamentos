//	Elaborar un programa que permita ingresar un número entero 
//	y utilice una función para encontrar el dígito mayor del número, 
//	y posteriormente encontrar la diferencia entre cada uno de sus 
//	dígitos y el digito mayor.


#include <iostream>
#include "conio.h"
using namespace std;
int mayor(int numero, int v[]);
int contador(int numero);
int diferencia(int m,int v[],int n);
int main()
{
 int numero,v[100],m,n;
 cout<<"Ingrese el digito: "<<endl;
 cin>>numero;	
 m=mayor(numero,v);
 cout<<"El digito mayor es : "<<m<<endl;	
 n=contador(numero);
 diferencia(m,v,n);
 
getch();
return 0;
}

int mayor(int numero, int v[])
{
int numero1,d,mayor=-10,i=0;
if(numero<0)
{
numero1=-numero;	
}

if(numero1!=0)
{
while(numero1>0)
 {
	d=numero1%10;
	v[i]=d;	
	i++;
	numero1=numero1/10;
   if(mayor<d)
   {
    mayor=d;
   }
  }	
}else
{
 mayor=0;
}

  
 return mayor;
}

int contador(int numero)
{
	int i=0,d,numero1;
	if(numero<0)
	{
		numero1=-numero;
	}
	while(numero1>0)
 {
	d=numero1%10;
	numero1=numero1/10;
	i++;
  }
  return i;
}

int diferencia(int m,int v[],int n)
{
	for(int i=0;i<n;i++)	
	{
	cout<<i+1<<". "<<"La diferencia entre "<<v[i]<<" y el digito mayor "<<m<<" es igual a "<< m-v[i]<<endl;
	}	
}
