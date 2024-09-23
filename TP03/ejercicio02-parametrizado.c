#include<stdio.h>
#include <stdlib.h>
#include <string.h>

// 02 - Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros.

int main(int argc, char *argv[]) {
	int cantidadCeros = 0;
	int cantidadNegativos = 0;
	int cantidadPositivos = 0;
	int totalIteraciones = 10;
	int valorIngresado;

	if (argc > 1) {
		char *numerosStr = argv[1];
		char *token;
		char *delimitador = ",";
		token = strtok(numerosStr, delimitador);
		for (int contador = 1; contador <= totalIteraciones; contador++) {
			int numeroParametrizado = atoi(token);
			token = strtok(NULL, delimitador);

			if (numeroParametrizado > 0) {
				printf("Es positivo\n");
				cantidadPositivos++;
			} else {
				if (numeroParametrizado == 0) {
					printf("Es Cero\n");
					cantidadCeros++;
				} else {
					printf("Es negativo\n");
					cantidadNegativos++;
				}
			}
		}
	} else {
		for (int contador = 1; contador <= totalIteraciones; contador++) {
			printf("Ingrese un valor numérico: \n");
			scanf("%i", &valorIngresado);
			if (valorIngresado > 0) {
				printf("Es positivo\n");
				cantidadPositivos++;
			} else {
				if (valorIngresado == 0) {
					printf("Es Cero\n");
					cantidadCeros++;
				} else {
					printf("Es negativo\n");
					cantidadNegativos++;
				}
			}
		}
	}

	printf("Total positivos: %i\n", cantidadPositivos);
	printf("Total negativos: %i\n", cantidadNegativos);
	printf("Total ceros: %i\n", cantidadCeros);
	return 0;
}
