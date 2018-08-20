/*
PROGRAMA: escriba un programa que solicite 
al usuario 3 y determinar cual de ellos es el menor  
FECHA: 18 de Agosto, 2018
ELABORADO POR: Sergio Daniel Arias 
*/
#include <stdio.h>
using namespace std;

int main() {
	// variables declaradas 
	int n1, n2, n3;
	//mensaje en pantalla para pedirle al usuario tres numeros
	printf("ingrese 3 numeros para determinar cual es el Menor, GRACIAS \n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	// sentencias si - sino para determinar el mayor 
	if (n1<n2 and n1<n3){
		printf("el numero menor es el: %d", n1);
	}
	else if (n2<n1 and n2<n3){
		printf("el numero menor es el: %d", n2);
	}
	else{
		printf("el numero menor es el: %d", n3);
	}
	
	
	return 0;
}

