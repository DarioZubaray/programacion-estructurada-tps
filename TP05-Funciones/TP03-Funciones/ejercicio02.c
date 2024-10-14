#include<stdio.h>

/* 02 - Ingresar 10 valores, indicar e imprimir cuantos son positivos, cuantos negativos y cuantos ceros. */

int sumarMasUno(int cantidad) {
	return cantidad + 1;
}

int main() {
	int totalIteraciones = 10;
	int contador, cantidadCeros, cantidadNegativos, cantidadPositivos;
	int valorIngresado;

	for (contador = 1; contador <= totalIteraciones; contador++) {
		printf("Ingrese un valor numerico: \n");
		scanf("%i", &valorIngresado);

		if (valorIngresado > 0) {
			printf("Es positivo\n");
			cantidadPositivos = sumarMasUno(cantidadPositivos);
		} else if (valorIngresado == 0) {
			printf("Es Cero\n");
			cantidadCeros = sumarMasUno(cantidadCeros);
		} else {
			printf("Es negativo\n");
			cantidadNegativos = sumarMasUno(cantidadNegativos);
		}
	}

	printf("Total positivos: %i\n", cantidadPositivos);
	printf("Total negativos: %i\n", cantidadNegativos);
	printf("Total ceros: %i\n", cantidadCeros);
	return 0;
}
