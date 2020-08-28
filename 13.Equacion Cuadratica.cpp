#include"conio.h"
#include"math.h"
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,x1,x2,x11,x22;
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
	
getch();
return 0;	
	
	
	
	
	
	
	
	
	
	
	
	
}




