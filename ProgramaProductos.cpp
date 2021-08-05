#include<iostream>
#include<cmath>
using namespace std;

int main() {
	string articulos[10];
	float descuento;
	string espacio;
	int i;
	float iva;
	int j;
	float k;
	float precios[10];
	float subtotal;
	float total;
	subtotal = 0;
	descuento = 0;
	iva = 0;
	i = 0;
	j = 0;
	k = 0;
	while (i<10) {
		cout << "Ingrese el nombre del producto " << (i+1) << endl;
		cin >> articulos[i];
		cout << "Mostrar el precio del producto " << (i+1) << endl;
		cin >> precios[i];
		subtotal = subtotal+precios[i];
		i = i+1;
	}
	descuento = subtotal*0.10;
	iva = subtotal*0.12;
	total = (subtotal+iva)-descuento;
	while (j<10) {
		k = 0;
		espacio = "";
		while (k<(20-articulos[j].size())) {
			espacio = espacio+" ";
			k = k+1;
		}
		cout << "" << (j+1) << ".-  " << articulos[j] << espacio << precios[j] << endl;
		j = j+1;
	}
	cout << "     SUBTOTAL            " << round((subtotal*100)+.5)/100 << endl;
	cout << "     IVA 12% +           " << round((iva*100)+.5)/100 << endl;
	cout << "     DESCUENTO 10% -     " << round((descuento*100)+.5)/100 << endl;
	cout << "     TOTAL               " << round((total*100)+.5)/100 << endl;
	return 0;
}

