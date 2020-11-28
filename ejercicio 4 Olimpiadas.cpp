#include<iostream>
#include"stdlib.h"
#include"conio.h"
using namespace std;

int main(){
float ac,l,at=1,r,a,b,h;
int o;	
	do{
		cout<< "--------MENU-----------"<<endl;
		cout<<"---CALCULADOR DE AREA---"<<endl;
		cout<<"------------------------"<<endl;
		cout<<"1.Calcular el area de un cuadrado"<<endl;
		cout<<"2.Calcular area de un circulo"<<endl;
		cout<<"3.calcular el area de un triangulo"<<endl;
		cout<<"0.salir"<<endl;
		cout<<"ELIJA UNA OPCION: "<<endl;
		cin>>o;
		switch(o){
		case 1:
		cout<<"Ingrese el tamaño de un lado del cuadrado: "<<endl;
			    cin>>l;
			    ac=l*l;
				cout<<"area del cuadrado es : "<<ac<<endl;
				break;
		case 2: 
		cout<<"Ingrese el tamaño del radio: "<<endl;
			    cin>>r;
				a=3.14*r*r;
				cout<<"el area del circulo es de : "<<a<<endl;
				break;
		case 3: cout<<"ingrese el tamaño de la base: "<<endl;
			    cin>>b;
			    cout<<"ingrese el tamaño de la altura: "<<endl;
			    cin>>h;
				at= (b*h)/2;
				cout<<"el area del circulo es: "<<at<<endl;
				break;
		case 0: cout<<"salir del menu: ";
			    break;
		default: cout<<"ERROR DE OPCION";
			     break;
		}
		getch();
		system("cls");
	}while(o!=0);
getch();

}
