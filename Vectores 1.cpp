#include <iostream>

using namespace std;
double promedio(double a[], int tama�o);
int main() {
	double x[100], p;
	int t;
	cout << "Cuantos numeros desea ingresar: ";
	cin >> t;
	if (t <= 100) {
		for (int i = 0; i < t; i++) {
			cout << "Ingrese el valor de x["<<i<<"]: ";
			cin >> x[i];
		}
		p = promedio(x, t);
		cout << "El promedio es: " << p;
	}
	else {
		cout << "El valor no pertenece al rango";	
	}
	return 0;
}
double promedio(double a[], int tama�o) {
	double suma = 0;
	for (int j = 0; j < tama�o; j++) {
		suma = suma + a[j];
	}
	suma = suma / tama�o;
	return suma;
}
