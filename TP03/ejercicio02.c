#include<stdio.h>

// 02 - Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros.

int main() {
	int cantidadCeros = 0;
	int cantidadNegativos = 0;
	int cantidadPositivos = 0;
	int totalIteraciones = 10;
	int valorIngresado;

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
	printf("Total positivos: %i\n", cantidadPositivos);
	printf("Total negativos: %i\n", cantidadNegativos);
	printf("Total ceros: %i\n", cantidadCeros);
	return 0;
}
