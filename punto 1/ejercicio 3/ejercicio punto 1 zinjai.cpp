/*
PROGRAMA: Escriba un programa que calcule el area de un triangulo 
FECHA: 18 de Agosto, 2018
ELABORADO POR: Sergio Daniel Arias 
*/




#include <stdio.h>

// Funcion principal
int main(){
	int base, altura;
	float area1, areaT;
	
	//mensaje en pantalla para los usuarios 
	printf("ingrese la base del triangulo:");
	scanf("%d", &base);
	printf("ingrese la altura del triangulo:");
	scanf("%d", &altura);
	
	// operacion para hallar el resultado (area del triangulo)
	area1 = base*altura;
	areaT = area1/2;
	
	//salida del mensaje 
	printf("el area de su triangulo es de: %f", areaT);
	
	return 0;
}

