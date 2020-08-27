#include<iostream>
using namespace std;
int main(){
int Hora, Minuto, Segundo,h,x;

cout<< "Introduce la hora en formato 24 horas"<<endl;
cin>>Hora;
cout<< "Introduce los minutos"<<endl;	
cin>>Minuto;
cout<< "Introduce los segundos"<<endl;	
cin>>Segundo;	
x= Hora-12;
if (Hora>12) {
 
 cout<<"Esta es la hora:";
 cout<< x;
  cout<<":"<< Minuto;
   cout<<":"<< Segundo;
   cout<<" PM";
} else {
cout<<"Esta es la hora:";
 cout<< Hora;
  cout<<":"<< Minuto;
   cout<<":"<< Segundo;
   cout<<" AM";
}


}
