#include<stdio.h>

/* 02 - Ingresar 10 valores, indicar e imprimir cuantos son positivos, cuantos negativos y cuantos ceros. */

int sumarMasUno(int cantidad) {
	return cantidad + 1;
}

void mostrarYAsignar(char *aMostrar, int *cantidad) {
	printf("%s\n", aMostrar);
	*cantidad = sumarMasUno(*cantidad);
}

void mostrarResultados(int cantidadPositivos, int cantidadNegativos, int cantidadCeros) {
	printf("Total positivos: %i\n", cantidadPositivos);
	printf("Total negativos: %i\n", cantidadNegativos);
	printf("Total ceros: %i\n", cantidadCeros);
}

int main() {
	int cantidadCeros = 0;
	int cantidadNegativos = 0;
	int cantidadPositivos = 0;
	int contador;
	int totalIteraciones = 5;
	int valorIngresado;

	for (contador = 1; contador <= totalIteraciones; contador++) {
		printf("Ingrese un valor numerico: \n");
		scanf("%i", &valorIngresado);
		if (valorIngresado>0) {
			mostrarYAsignar("Es positivo", &cantidadPositivos);
		} else {
			if (valorIngresado == 0) {
				mostrarYAsignar("Es Cero", &cantidadCeros);
			} else {
				mostrarYAsignar("Es negativo", &cantidadNegativos);
			}
		}
	}
	mostrarResultados(cantidadPositivos, cantidadNegativos, cantidadCeros);  // Pasa los valores, no las direcciones

	return 0;
}
