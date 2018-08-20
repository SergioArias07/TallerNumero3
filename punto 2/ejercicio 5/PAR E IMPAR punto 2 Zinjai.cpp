/*
PROGRAMA: escriba un programa que solicite un numero y determinar si es par o impar   
FECHA: 18 de Agosto, 2018
ELABORADO POR: Sergio Daniel Arias 
*/
#include <stdio.h>
using namespace std;
//funcion principal
int main() {
	//variable declarada 
	int numero;
	// mensaje a mostrar en pantalla, para que ingrese el numero
	printf("ingrese un numero para determinar si es PAR o IMPAR: ");
	scanf("%d", &numero);
	//sentencia si, determinando si es par o impar e imprimir el mensaje con su resultado
	if(numero%=2){
		printf("El numero que ingreso es impar");
	}
	else{
		printf("El numero ingresado es par");
	}
	
	return 0;
}

