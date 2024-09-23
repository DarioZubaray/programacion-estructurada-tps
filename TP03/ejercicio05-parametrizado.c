#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 05 - Ingresar la patente y monto de la multa de 50 autos,
   indicar e imprimir cuántos montos superan los $40
   y del total cobrado que porcentaje representa la suma de los que superan los $40. */

int main(int argc, char *argv[]) {
	float acumulador = 0;
	float acumuladorMontoMayoraCuarenta = 0;
	int contadorMontoMayoraCuarenta = 0;
	int totalIteraciones = 50;
	float valorMulta;

	if (argc > 1) {
		char *numerosStr = argv[1];
		char *token;
		char *delimitador = ",";
		token = strtok(numerosStr, delimitador);
		for (int contador = 1; contador <= totalIteraciones; contador++) {
			int numeroParametrizado = atoi(token);
			token = strtok(NULL, delimitador);

			acumulador += numeroParametrizado;
			if (numeroParametrizado >= 40) {
				contadorMontoMayoraCuarenta++;
				acumuladorMontoMayoraCuarenta += numeroParametrizado;
			}
		}
	} else {
		for (int contador = 1; contador <= totalIteraciones; contador++) {
			printf("Ingrese el monto de la multa: \n");
			scanf("%f", &valorMulta);
			acumulador += valorMulta;
			if (valorMulta >= 40) {
				contadorMontoMayoraCuarenta++;
				acumuladorMontoMayoraCuarenta += valorMulta;
			}
		}
	}

	printf("Cantidad de montos mayores a $40: %i\n", contadorMontoMayoraCuarenta);
	float porcentajeMultasMayoraCuarenta = acumuladorMontoMayoraCuarenta * 100 / acumulador;
	printf("Porcentaje de multas mayores a $40: %.2f\n", porcentajeMultasMayoraCuarenta);
	return 0;
}
