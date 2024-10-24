#include<stdio.h>

/* 6 - Desarrolle un programa que almacene en un vector el numero de dias que tiene cada mes  */
/* (supondremos que es un año no bisiesto), pida al usuario que le indique un mes  */
/* (1=enero, 12=diciembre) y muestre en pantalla el numero de dias que tiene ese mes */

int main() {
	int miVector[12];
	miVector[0] = 31;
	miVector[1] = 28;
	miVector[2] = 31;
	miVector[3] = 30;
	miVector[4] = 31;
	miVector[5] = 30;
	miVector[6] = 31;
	miVector[7] = 31;
	miVector[8] = 30;
	miVector[9] = 31;
	miVector[10] = 30;
	miVector[11] = 31;

	printf("Indique un mes para saber su cantidad de dias: \n");
	int mesIngresado;
	scanf("%d", &mesIngresado);

	printf("El mes %d ingresado tiene %d dias.\n", mesIngresado, miVector[mesIngresado+1]);
	return 0;
}
