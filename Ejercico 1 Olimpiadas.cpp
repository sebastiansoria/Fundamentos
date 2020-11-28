#include<iostream>
using namespace std;
int funcion(int a, int b);
int main()
{
	int a,b,v=1;
	cout<<"Ingrese el valor del primer numero"<<endl;
	cin>>a;
	cout<<"Ingrese el valor del segundo numero"<<endl;
	cin>>b;
	if(a<b)
	{
		if(b%a==0)
		{
		cout<<a<<" es divisor de "<<b<<endl;
		}
		else
		v=0;	
	}
	else//if a>=b
	{
		if(a==b)
		{
		cout<<"Los numeros son iguales y por ende ambos son divisores del otro"<<endl;
		}
		else//a>b
		{
			if(a%b==0)
			{
			cout<<b<<" es divisor de "<<a<<endl;
			}
			else
			v=0;		
			}	
	}
	if(v==0)
	cout<<"El menor no es divisor del mayor";
}
