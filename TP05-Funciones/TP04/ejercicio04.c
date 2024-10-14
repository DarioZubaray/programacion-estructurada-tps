#include<stdio.h>
#include<stdbool.h>

/* 4 - Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros */

int main() {
	int contador = 0;
	int contadorCeros = 0;
	int contadorNegativos = 0;
	int contadorPositivos = 0;
	bool continuar = true;
	float nuevoValor;
	char respuestaContinuar;

	while (continuar) {
		printf("Ingrese un valor:\n");
		scanf("%f", &nuevoValor);
		contador = contador+1;
		if (nuevoValor > 0) {
			contadorPositivos++;
		} else if (nuevoValor < 0) {
			contadorNegativos++;
		} else {
			contadorCeros++;
		}

		printf("Desea ingresar un nuevo valor? s/n\n");
		scanf(" %c", &respuestaContinuar);
		if (respuestaContinuar == 'n' || respuestaContinuar == 'N') {
			continuar = false;
		}
	}

	float promedioPositivos = contadorPositivos * 100 / contador;
	printf("Su promedio de positvos es: %.2f\n", promedioPositivos);
	float promedioNegativos = contadorNegativos * 100 / contador;
	printf("Su promedio de negativos es: %.2f\n", promedioNegativos);
	float promedioCeros = contadorCeros * 100 / contador;
	printf("Su promedio de ceros es: %.2f\n", promedioCeros);
	return 0;
}
