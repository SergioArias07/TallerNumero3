/*
PROGRAMA: solicitar al usuario que ingrese una variable con 
el valor de un d�lar en pesos colombianos, y en otra variable 
la cantidad de d�lares que tiene, devolver la cnatidad en pesos 
colombianos de d�lares que la persona tiene
FECHA: 18 de Agosto, 2018
ELABORADO POR: Sergio Daniel Arias 
*/

#include <stdio.h>
using namespace std;

//funciion principal
int main() {
	int valor_dolar, cantidad_dolar, total;
	
	//mensaje en pantalla, para que los usuarios puedan ingresar los datos 
	printf ("ingrese el valor del d�lar en pesos colombianos: ");
	scanf("%d", &valor_dolar);
	printf ("ingrese la cantidad de dolares que tiene");
	scanf("%d", &cantidad_dolar);
	
	// operacion para hallar el resultado 
	total=valor_dolar*cantidad_dolar;
	//mensaje de salida
	printf("La cantidad en pesos colombianos es de: %d", total);
	
	return 0;
}

