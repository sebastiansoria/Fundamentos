// ejemplomatriz.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include "conio.h"
#define MAX 10

using namespace std;

void cargar(int MATRIZ[MAX][MAX], int n, int m);
//void mostrar(int MATRIZ[MAX][MAX], int n, int m);
void diagonal(int MATRIZ[MAX][MAX], int n);

int main()
{
	int n,m;
	int MAT[MAX][MAX];
	do {
		cout<<"Ingrese el tamaño de filas de la matriz: ";
		cin>>n;
	} while ((n<=0)||(n>MAX));

	do {
		cout<<"Ingrese el tamaño de columnas de la matriz: ";
		cin>>m;
	} while ((m<=0)||(m>MAX));
	
	if (n==m)
	{
		cargar(MAT,n,m);
		diagonal(MAT,n);
	}
	else
		cout<<"No se puede procesar la diagonal por que no es cuadrada";
	getch();
}



void cargar(int MATRIZ[MAX][MAX], int n, int m)
{
   for(int i = 0; i<n; i++){

	for (int j = 0; j<m; j++){
			cout<<"Ingrese el valor para M["<<i<<"] ["<<j<<"]: ";
			cin >> MATRIZ[i][j];

		}
	}
}

//void mostrar(int MATRIZ[MAX][MAX], int n, int m);
void diagonal(int MATRIZ[MAX][MAX], int n)
{
			cout<<"Los elementos de la diagonal son: ";
			for(int i=0;i<n;i++)
			{
			cout<<"Para el elemento["<<i<<"] , ["<<i<<"] : ";
			cout<<MATRIZ[i][i]<<endl;
			}
			
}
