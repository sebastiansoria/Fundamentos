#include<iostream>
using namespace std;
#define MAX 100

void CargarVector(int vecx[MAX], int x);
void MostrarVector(int vecx[MAX],int x);
int main(){
	int n,vec[MAX];
	cout<<"Ejercicio de Vectores"<<endl<<"Ingrese el tamanno del vector: ";
	cin>>n;
	CargarVector(vec,n);
	MostrarVector(vec,n);
	return 0;
	
}


void CargarVector(int vecx[],int x)
{
	for(int i=0;i<x;i++){
	cout<<"Ingrese el valor en la posicion vecx["<<i<<"]:";
	cin>>vecx[i];
	}
}

void MostrarVector(int vecx[],int x)
{
	
	for(int i=0;i<x;i++)
	{
		cout<<"vec["<<i<<"]="<<vecx[i]<<endl;	
	}

}
