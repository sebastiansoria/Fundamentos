/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	float a,b,c,d,e,f,x,z ;
	cout<< "sistemas de ecuaciones de la forma: "<<endl; 
	cout<< "ax + bz = c" <<endl;
	cout<< "dx + fz = e" <<endl;
	
	cout<< "digite el valor de a" <<endl;
	cin>> a;
	cout<< " digite el valor de b" <<endl;
	cin >> b;
	cout<< " digite el valor de c" <<endl;
	cin >> c;
	cout<< " digite el valor de d" <<endl;
	cin>> d;
	cout<< " digite el valor de e" <<endl;
	cin >> e;
	cout<< " digite el valor de f" <<endl;
	cin >> f;
	
	x= (-b*e+f*c)/(-b*d+a*f) ;
	z= (-c*d+a*e)/(-b*d+a*f) ;
	
	cout<< "la solucion del sistema de ecuacion es" << endl;
	cout<< "x="<< x <<endl ;
	cout<< "z=" ;
	cout<<z <<endl;

    return 0;
}
