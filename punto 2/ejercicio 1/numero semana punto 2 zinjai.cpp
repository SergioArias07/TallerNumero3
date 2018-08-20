/*
PROGRAMA: Escriba un programa que solicite al usuario un número 
del 1 al 7 y diga el dia de la semana correspondiente 
FECHA: 18 de Agosto, 2018
ELABORADO POR: Sergio Daniel Arias 
*/
#include <iostream>
using namespace std;
//funcion principal 
int main() {
	//variable definida 
	int numero;
	//mesnaje en pantalla para el usario y pueda ingresar el numero 
	printf ("ingrese un numero del 1 al 7 para saber el dia de la semana: ");
	scanf("%d", &numero);
		
    // sentencia si - sino paraa hacer la comparacion del numero con el dia 
	if(numero>7 ){
	printf("no hay dia que coincida con el numero");
	}
		else if (numero == 1){
			printf("El dia de la semana es lunes");
		}
		else if (numero==2){
			printf("El dia de la semana es martes");
		}
		else if (numero==3){
			printf("El dia de la semana es miercoles");
		}
		else if (numero==4){
			printf("El dia de la semana es jueves");
		}
		else if (numero==5){
			printf("El dia de la semana es viernes");
		}
		else if (numero==6){
			printf("El dia de la semana es sabado");
		}
		else{
			printf("El dia de la semana es Domingo");
		}
		
	return 0;
}

