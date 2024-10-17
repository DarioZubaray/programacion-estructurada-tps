#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/* 4 - Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros */

void sumarValor(int* valor1, int valor2) {
	*valor1 = *valor1 + valor2;
}

void calcularPromedio(int numerador, int denominador, float* promedio) {
    if(denominador != 0) {
        *promedio = (numerador * 1.0f) / denominador;    
    } else {
		*promedio = 0.0;
	}
}

void deseaContinuar(bool* continuar) {
	char respuestaContinuar[1];
	printf("Desea ingresar un nuevo valor? (s/n)\n");
	scanf(" %c", respuestaContinuar);
	if (strcmp(respuestaContinuar, "n") == 0 || strcmp(respuestaContinuar, "N") == 0) {
		*continuar = false;
	} else {
		*continuar = true;
	}
}

void mostrarResultados(int contadorPositivos, int acumuladorPositivos,
						 int contadorNegativos, int acumuladorNegativos,
						 int contadorCeros) {
	float promedioPositivos, promedioNegativos;
	printf("\nSe registraron {%i} entradas por un total de {%i}, ", contadorPositivos, acumuladorPositivos);
	calcularPromedio(acumuladorPositivos, contadorPositivos, &promedioPositivos);
	printf("Su promedio de positvos es: %.2f\n", promedioPositivos);
	printf("Se registraron {%i} entradas por un total de {%i}, ", contadorNegativos, acumuladorNegativos);
	calcularPromedio(acumuladorNegativos, contadorNegativos, &promedioNegativos);
	printf("Su promedio de negativos es: {%.2f}\n", promedioNegativos);
	printf("Cantidad de ceros es: %i\n", contadorCeros);
}

int main() {
	int contadorCero = 0;
	int contadorNegativo = 0, acumuladorNegativo = 0;
	int contadorPositivo = 0, acumuladorPositivo = 0;
	bool continuar = true;
	int nuevoValor;

	while (continuar) {
		printf("Ingrese un valor: \n");
		scanf("%i", &nuevoValor);
		if (nuevoValor > 0) {
			sumarValor(&contadorPositivo, 1);
			sumarValor(&acumuladorPositivo, nuevoValor);
		} else if (nuevoValor < 0) {
		    printf("Menor que cero!\n");
			sumarValor(&contadorNegativo, 1);
			sumarValor(&acumuladorNegativo, nuevoValor);
		} else {
			sumarValor(&contadorCero, 1);
		}
		deseaContinuar(&continuar);
	}
	mostrarResultados(contadorPositivo, acumuladorPositivo,
						contadorNegativo, acumuladorNegativo,
						contadorCero);
	return 0;
}
