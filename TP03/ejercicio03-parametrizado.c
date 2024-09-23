#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/* Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el promedio
   de lo valores pares y el promedio de los valores impares.
   Luego mostrar por pantalla cuantos numeros superaron el valor 15. */

int main(int argc, char *argv[]) {
	int totalIteraciones = 8;
	float acumulador = 0;
	float acumuladorPar = 0;
	float acumuladorImpar = 0;
	int contador = 0;
	int contadorPar = 0;
	int contadorImpar = 0;
	int contadorMayorQuince = 0;
	float valorIngresado;

	if (argc > 1) {
		char *numerosStr = argv[1];
		char *token;
		char *delimitador = ",";
		token = strtok(numerosStr, delimitador);
		for (int contador = 1; contador <= totalIteraciones; contador++) {
			int numeroParametrizado = atoi(token);
			token = strtok(NULL, delimitador);

			acumulador += numeroParametrizado;
			if (numeroParametrizado > 15) {
				contadorMayorQuince++;
			}

			if ((int) floor(numeroParametrizado) % 2 == 0) {
				acumuladorPar += numeroParametrizado;
				contadorPar++;
			} else {
				acumuladorImpar += numeroParametrizado;
				contadorImpar++;
			}
		}
	} else {
		for (contador = 1; contador <= totalIteraciones; contador++) {
			printf("Ingrese un valor numérico: \n");
			scanf("%f", &valorIngresado);
			acumulador += valorIngresado;
			if (valorIngresado > 15) {
				contadorMayorQuince++;
			}

			if ((int) floor(valorIngresado) % 2 == 0) {
				acumuladorPar += valorIngresado;
				contadorPar++;
			} else {
				acumuladorImpar += valorIngresado;
				contadorImpar++;
			}
		}
	}

	float promedioGeneral = acumulador / totalIteraciones;
	printf("Promedio general %.2f\n", promedioGeneral);
	float promedioValoresPares = acumuladorPar / contadorPar;
	printf("Promedio valores pares %.2f\n", promedioValoresPares);
	float promedioValoresImpares = acumuladorImpar / contadorImpar;
	printf("Promedio valores impares %.2f\n", promedioValoresImpares);
	printf("Total número que superaron el valor 15: %i\n", contadorMayorQuince);
	return 0;
}
