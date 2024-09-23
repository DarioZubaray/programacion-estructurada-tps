#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 01 - Ingresar 25 números, calcular su promedio e imprimirlo.

int main(int argc, char *argv[]) {
	int totalIteraciones = 25;
	float acumulador = 0;

	if (argc > 1) {
		char *numerosStr = argv[1];
		char *token;
		char *delimitador = ",";
		token = strtok(numerosStr, delimitador);
		for (int contador = 1; contador <= totalIteraciones; contador++) {
			int numeroParametrizado = atoi(token);
			token = strtok(NULL, delimitador);
			acumulador += numeroParametrizado;
		}

	} else {
		float numeroIngresado;

		for (int contador = 1; contador <= totalIteraciones; contador++) {
			printf("Ingrese un numero: \n");
			scanf("%f", &numeroIngresado);
			acumulador += numeroIngresado;
		}
	}

	printf("acumulador: %.2f\n", acumulador);
	float promedioNumeros = acumulador / totalIteraciones;
	printf("Promedio de numeros es: %.2f\n", promedioNumeros);
	return 0;
}
