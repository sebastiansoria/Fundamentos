//#include "stdafx.h"
#include"conio.h"
#include"math.h"
#include<iostream>
using namespace std;
int main()
{
	float x,y,a,b,c,d,x1,x2,x11,x22;
	
	cout<<"Que desea saber?"<<endl;
    cout<<"Si desea saber como conducir un auto, presione 1"<<endl;
    cout<<"Si desea saber como realizar una llamada telefonica, presione 2"<<endl;
    cout<<"Si desea saber como resolver una ecuacion cuadratica, presione 3"<<endl;
    cin>> x;
	if(x==1)
	{
	cout<<"Especifique si conduce un auto con caja mecanica o automatica"<<endl;
	cout<<"Si conduce caja mecanica, presione 1"<<endl;
	cout<<"Si conduce caja automatica, presione 2"<<endl;
	cin>>y;
	if(y==1){
	
	cout<<"Sientese en el asiento del conductor"<<endl;
    cout<<"Inserte la llave en la cerradura que se encuentra detras del costado derecho del volante y girela en direccion de las manesillas del reloj"<<endl;
    cout<<"Pise el embriague hasta el fondo, y posteriormente mueva la palanca a la posicion primera,"<<endl<<"Suelte el embirague gentilmente y una vez que el auto empieze a avanzar, pise el acelerador gentilmente"<<endl;
    cout<<"Suba de caja cuando quiera subir de velocidad una vez que las rpm se aproximen a 2000 "<<endl;
    cout<<"Si quiere frenar, primero pise el embriague hasta el fondo y porsteriormente el freno"<<endl;
    cout<<"Coloque la caja en Neutro y vuelva a partir de ser necesario"<<endl;	
}

    if(y==2){
	
    cout<<"Sientese en el asiento del conductor"<<endl;
    cout<<"Inserte la llave en la cerradura que se encuentra detras del costado derecho del volante y girela en direccion de las manesillas del reloj"<<endl;
    cout<<"Coloque la caja en D mientras aprieta el freno"<<endl;
    cout<<"Suelte e freno y pise el acelerador gentilmente hasta alcanzar la velocidad adecuada"<<endl;
    cout<<"Si quiere frenar, pise el freno gentil y progresivamnete"<<endl;
    cout<<"Coloque la caja en Neutro y vuelva a partir de ser necesario"<<endl;	
    
}
	}
	
	if(x==2)
	{
	cout<<"Desbloquea el telefono"<<endl;
    cout<<"Apreta el icono de un telefono"<<endl;
    cout<<"Escribe el numero al cual querieres llamar"<<endl;
    cout<<"Apreta el icono de llamar"<<endl;
 	cout<<"Para colgar, apreta el icono con un telefono dentro de un circulo rojo "<<endl;

			
			
			
	}	
	
	
	
	if(x==3)
	{
	
	
	cout<<"Este programa resolvera una equacion cuadratica de la forma ax^2 + bx + c"<<endl;
	cout<<"Ingresar a: ";
	cin>>a;
	cout<<"Ingresar b:";
	cin>>b;
	cout<<"Ingresar c: ";
	cin>>c;
	if (a!=0)//Es differente
	{
		d=pow(b,2)-4*a*c;
	if(d==0)
		cout<<"Solucion Unica: "<<-b/(2*a);
	else
		if(d>0)
		{
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			cout<<"Soluciones reales: x1="<<x1<<"   x2="<<x2;
		}
		else
		{
        x1=(sqrt(-d))/(2*a);
		x11=(-b)/(2*a);
		x2=(-sqrt(-d))/(2*a);
		x22=(-b)/(2*a);
		cout<<"Soluciones imaginarias:"<<endl;
		cout<<"x1="<<x11<<"+"<<x1<<"i"<<endl;
		cout<<"x2="<<x22<<x2<<"i"<<endl;
			
			

		}
	

}


	}

	getch();
	return 0;
}
