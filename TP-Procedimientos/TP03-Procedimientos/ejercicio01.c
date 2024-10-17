#include<stdio.h>

/* 01 - Ingresar 25 numeros, calcular su promedio e imprimirlo. */

void mostrarpromedio(int acumulador, int totalIteraciones) {
	printf("acumulador: %i\n", acumulador);
	int promedioNumeros = acumulador / totalIteraciones;
	printf("Promedio de numeros es: %i\n", promedioNumeros);
}

int main() {
	int acumulador = 0;
	int contador = 0;
	int totalIteraciones = 5;
	int numeroingresado;
	for (contador = 1; contador <= totalIteraciones; contador++) {
		printf("Ingrese un numero: \n");
		scanf("%i", &numeroingresado);
		acumulador += numeroingresado;
	}
	mostrarpromedio(acumulador, totalIteraciones);
	return 0;
}
