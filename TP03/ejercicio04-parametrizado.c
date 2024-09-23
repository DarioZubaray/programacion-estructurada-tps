#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 4 - Ingresar 30 valores. Contar cuantos están entre 1 y 10, cuantos entre 10 y 20,
   cuantos entre 20 y 30 y cuantos son mas de 30.
   Luego mostrar el porcentaje de cada grupo en el total. */

int main(int argc, char *argv[]) {
	int contadorPrimeraDecena = 0;
	int contadorSegundaDecena = 0;
	int contadorTerceraDecena = 0;
	int totalIteraciones = 30;
	float valorIngresado;

	if (argc > 1) {
		char *numerosStr = argv[1];
		char *token;
		char *delimitador = ",";
		token = strtok(numerosStr, delimitador);
		for (int contador = 1; contador <= totalIteraciones; contador++) {
			int numeroParametrizado = atoi(token);
			token = strtok(NULL, delimitador);

			if (numeroParametrizado > 0 && numeroParametrizado < 10) {
				contadorPrimeraDecena++;
			} else {
				if (numeroParametrizado < 20) {
					contadorSegundaDecena++;
				} else {
					contadorTerceraDecena++;
				}
			}
		}
	} else {
		for (int contador = 1; contador <= totalIteraciones; contador++) {
			printf("Ingrese un valor numérico: \n");
			scanf("%f", &valorIngresado);
			if (valorIngresado > 0 && valorIngresado < 10) {
				contadorPrimeraDecena++;
			} else {
				if (valorIngresado < 20) {
					contadorSegundaDecena++;
				} else {
					contadorTerceraDecena++;
				}
			}
		}
	}

	float porcentajePrimeraDecena = (float) contadorPrimeraDecena * 100 / totalIteraciones;
	printf("Porcentaje valores en primera decena: %.2f\n", porcentajePrimeraDecena);
	float porcentajeSegundaDecena = (float) contadorSegundaDecena * 100 / totalIteraciones;
	printf("Porcentaje valores en segunda decena: %.2f\n", porcentajeSegundaDecena);
	float porcentajeTerceraDecena = (float) contadorTerceraDecena * 100 / totalIteraciones;
	printf("Porcentaje valores en tercera decena o más: %.2f\n", porcentajeTerceraDecena);
	return 0;
}
