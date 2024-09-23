#include<stdio.h>

/* 05 - Ingresar la patente y monto de la multa de 50 autos,
   indicar e imprimir cuántos montos superan los $40
   y del total cobrado que porcentaje representa la suma de los que superan los $40. */

int main() {
	float acumulador = 0;
	float acumuladorMontoMayoraCuarenta = 0;
	int contadorMontoMayoraCuarenta = 0;
	int totalIteraciones = 50;
	float valorMulta;

	for (int contador = 1; contador <= totalIteraciones; contador++) {
		printf("Ingrese el monto de la multa: \n");
		scanf("%f", &valorMulta);
		acumulador += valorMulta;
		if (valorMulta >= 40) {
			contadorMontoMayoraCuarenta++;
			acumuladorMontoMayoraCuarenta += valorMulta;
		}
	}
	printf("Cantidad de montos mayores a $40: %i\n", contadorMontoMayoraCuarenta);
	float porcentajeMultasMayoraCuarenta = acumuladorMontoMayoraCuarenta * 100 / acumulador;
	printf("Porcentaje de multas mayores a $40: %f\n", porcentajeMultasMayoraCuarenta);
	return 0;
}
