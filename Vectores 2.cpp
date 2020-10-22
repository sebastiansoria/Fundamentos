// ejemplovector.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "conio.h"
#define MAX 100

using namespace std;

void cargar(int vec[],int n);
void mostrar(int vec[],int n);
void unir(int v1[],int n,int v2[],int m,int vec[],int &tam);
void burbuja (int vec[],int m);

int main(){
	int tam,n,m, A[MAX],B[MAX],C[MAX],opcion,a=1;
	do{
		
		
	cout<<"Que opcion queres mi hibrido gang"<<endl;
	cout<<"1.Cargar"<<endl;
	cout<<"2.Mostrar"<<endl;
	cout<<"3.Concatenar"<<endl;
	cout<<"4.Ordenar"<<endl;
	cin>>opcion;
				do {			
		cout<<"Ingresar el tamaño del primer vector:" ;
		cin>>n;
	} while ((n<=0)||(n>MAX));
	do {
		cout<<"Ingresar el tamaño del segundo vector:" ;
		cin>>m;	
	} while ((m<=0)||(m>MAX));
	
		switch(opcion)
	{
		case 1:
		{
		cargar(B,m); // Cargar el segundo vector
		}
		break;
		case 2:
		{

	cargar(A,n); // Cargar el primer vector
	
	cout<<"-------------------------"<<endl;
	cargar(B,m); // Cargar el segundo vector
	cout<<"-------------------------"<<endl;
	unir(A,n,B,m,C,tam); // Unir los dos vectores en C
	mostrar(C,tam); // Muestro el vector C	
	
		}
		break;
		case 3:
		{
		unir(A,n,B,m,C,tam); // Unir los dos vectores en C	
		}
		break;
		case 4:
		{
			
		cargar(A,n); // Cargar el primer vector
	
		cout<<"-------------------------"<<endl;
		cargar(B,m); // Cargar el segundo vector
		cout<<"-------------------------"<<endl;
		unir(A,n,B,m,C,tam); // Unir los dos vectores en C
		burbuja(C,tam); // Clasificados en orden ascendente
		mostrar(C,tam); // Muestro el vector C	
	
		}
		
		break;
		default:cout<<"Opcion NO valida";
	}
	cout<<"Quieres hacer otra operacion?"<<endl;
	cout<<"Escribe 1 para escoger otra opcion"<<endl;
	cin>>a;
	}
while(a!=0);

	getch();
}

void cargar(int vec[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"Vector["<<i<<"]= ";
		cin>>vec[i];
	}
}

void mostrar(int vec[],int n)
{
	for (int i=0;i<n;i++)
		cout<<"Vector["<<i<<"]= "<<vec[i]<<endl;
}

void unir(int v1[],int n,int v2[],int m,int vec[],int &tam)
{
	for (int i=0;i<n;i++)  // Copio el primer vector v1
		vec[i]=v1[i];
	for (int i=0;i<m;i++) // Copio el segundo vector v2
		vec[i+n]=v2[i];
	tam=n+m;
}

void burbuja (int vec[],int m)
{
	int aux;
	for (int i=0;i<m-1;i++)
	{
		for (int j=i+1;j<m;j++)
			if (vec[i]>vec[j])
			{
				aux=vec[j];
				vec[j]=vec[i];
				vec[i]=aux;
			}
	}	
}			
			

