/*
PROGRAMA: escriba un programa que  solicite al usuario ingresar 
un caracter y determinar si es una vocal, y si es mayuscula o minuscula  
FECHA: 18 de Agosto, 2018
ELABORADO POR: Sergio Daniel Arias 
*/
#include <stdio.h> 
// funcion principal 
int main() { 
	//variable declarada 
	char letra; 
	//mensaje en pantalla para que el usuario pueda ingresar el caracter 
	printf("Introduce una letra para determiar lo pedido: "); 
	letra=getchar(); 
	
	//sentencia si-sino para comparar si es vocal o no, 
	//e igualmente si es mayuscula o minuscula y mostrar en pantalla el resultado de lo ingresado 
	
	if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
		printf("La letra %c es una vocal\n", letra);
		printf("y La letra es Minuscula");
	}
	else if(letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
		printf("La letra %c es una vocal\n", letra); 
		printf("y La letra es Mayuscula", letra);
	}
	else {
			printf("La letra %c no es una vocal\n", letra); 
		}
	
}


