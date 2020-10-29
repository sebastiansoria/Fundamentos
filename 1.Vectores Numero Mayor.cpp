/*
Hacer un programa para sacar el máximo valor de un vector de valores ya sean reales o
enteros.
*/
#include<iostream>
using namespace std;
void cargar(float max[],int);
float elpepe(float max[],int);
#define MAX 100
int main()
{
int n;
float max[MAX];
cout<<"Este programa imprime el maximo valor entre los elementos de un vector"<<endl<<"Ingrese el tamanno del vector: ";
cin>>n;
cargar(max,n);
cout<<"El numero mayor es: "<<elpepe(max,n)<<endl;

}
void cargar(float max[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese el valor numero ["<<i<<"]: ";
		cin>>max[i];
	}	
}

float elpepe(float max[],int n)
{
	
	// Nota: El valor de max[] va a ser cambiado a cualquiera sea el nuevo valor mayor, se puede resolver pero no se necesario
	float M=max[0];
	for(int i=1;i<n;i++)
	{
		if(M<max[i])
		{
		M=max[i];	
		}
	
	}	
	return M;
	
}
