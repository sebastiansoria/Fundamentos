//Hacer un programa que determine si una palabra es un Palindormo
#include<iostream>
#include<string>
#define MAX 100
using namespace std;

float invertir(string word, int &error);//se usan parametros de referencia con la variable error
int main()
{
	string word;
	char control='a';
	int error=0;//Ayuda a reparar un error que ocurre al repetir el ciclo: no se lee el primer getline mas que en la primera vuelta
	do
	{
	cout<<"Ingrese la palabra que desea verificar como palindromo: "<<endl;
	if(error==1)//Se annade cuante el ciclo ya fue ejecutado una vez y el getline ya no aparece
	{
	getline(cin,word);	
	}
	
	getline(cin,word);
	invertir(word,error);	
	do
	{
	cout<<"a.Continuar"<<endl<<"b.Cerrar"<<endl;
	cin>>control;
	}while((control!='a')&&(control!='b'));
	
	}while(control=='a');
	
	
}

float invertir(string word,int &error)
{
	
	int length;//Declaracion de variables
	length=word.length();//Guardando el tamanno del vector
	string aux;//Declaracion de un vector string auxiliar en el que guardaremos los valores del string original, pero invertidos
	aux=word.substr(0);//Igualamos el aux al string original para que ambos tengan el mismo tamanno, de lo contrario, aux automaticamente agarraria 
	//un tamanno de 0, y no es posible declacar aux[length]
	
	for(int i=0;i<length;i++)
	{
		aux[i]= word[length-1-i];//Tranfiere los valores de word a aux, pero invertidos, al empezar del ultimo elemento de word
	}
//	cout<<aux<<" aux "<<endl;
//	cout<<word<<" word "<<endl;
	cout<<endl<<"....................................."<<endl<<endl;
	if(aux.compare(word)==0)//El compare solo da 0 si su contenido es igual
	{
	cout<<"La palabra es un palindromo"<<endl;
	}else//aux.compare(word)==-1
	{
	cout<<"La palabra NO es un palindromo"<<endl;	
	}
	cout<<endl<<"....................................."<<endl<<endl;
	error=1;
}
