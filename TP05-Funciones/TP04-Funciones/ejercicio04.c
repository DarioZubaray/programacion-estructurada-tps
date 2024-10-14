#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/* 4 - Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros */

int sumarValor(int valor1, int valor2) {
	return valor1 + valor2;
}

float calcularPromedio(int numerador, int denominador) {
	return (numerador*100.0) / denominador;
}

bool deseaContinuar() {
	char respuestacontinuar[1];
	printf("Desea ingresar un nuevo valor? (s/n)\n");
	scanf(" %c", &respuestacontinuar[0]);
	if (strcmp(respuestacontinuar, "n")==0 || strcmp(respuestacontinuar, "N")==0) {
		return false;
	}
	return true;
}

int main() {
	int contador = 0, contadorCeros = 0, contadorNegativos = 0, contadorPositivos = 0;
	bool continuar = true;
	int nuevoValor;
	while (continuar) {
		printf("Ingrese un valor:\n");
		scanf("%i", &nuevoValor);
		contador = sumarValor(contador, 1);
		if (nuevoValor > 0) {
			contadorPositivos = sumarValor(contadorPositivos, 1);
		} else {
			if (nuevoValor < 0) {
				contadorNegativos = sumarValor(contadorNegativos, 1);
			} else {
				contadorCeros = sumarValor(contadorCeros, 1);
			}
		}
		continuar = deseaContinuar();
	}
	float promedioPositivos = calcularPromedio(contadorPositivos, contador);
	printf("Su promedio de positvos es: %.2f\n", promedioPositivos);
	float promedioNegativos = calcularPromedio(contadorNegativos, contador);
	printf("Su promedio de negativos es: %.2f\n", promedioNegativos);
	float promedioCeros = calcularPromedio(contadorCeros, contador);
	printf("Su promedio de ceros es: %.2f\n", promedioCeros);
	return 0;
}
