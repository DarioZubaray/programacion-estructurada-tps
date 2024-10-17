#include<stdio.h>

/* 01 - Ingresar 25 numeros, calcular su promedio e imprimirlo. */

float acumularIngreso(int totalIteraciones) {
	int acumulador = 0;
	int contador = 0;
	int numeroIngresado;
	for (contador=1; contador<=totalIteraciones; contador++) {
		printf("Ingrese un numero: \n");
		scanf("%f", &numeroIngresado);
		acumulador += numeroIngresado;
	}
	printf("acumulador: %i\n", acumulador);
	return (acumulador * 1.0) / totalIteraciones;
}

int main() {
	int totalIteraciones = 25;
	float promedioNumeros;
	promedioNumeros = acumularIngreso(totalIteraciones);
	printf("Promedio de numeros es: %%%.2f\n", promedioNumeros);
	return 0;
}
