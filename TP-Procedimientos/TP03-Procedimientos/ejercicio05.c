#include<stdio.h>

/* 05 - Ingresar la patente y monto de la multa de 50 autos,  */
/* indicar e imprimir cuantos montos superan los $40  */
/* y del total cobrado que porcentaje representa la suma de los que superan los $40. */

int sumarValores(int valor1, int valor2) {
	return valor1 + valor2;
}

float obtenerPorcentaje(int numerador, int divisor) {
	return (numerador * 100.0) / divisor;
}

void mostrarResultados(int contadorMontoMayorACuarenta, int acumuladorMontoMayorACuarenta, int acumulador) {
	printf("Cantidad de montos mayores a $40: %i\n", contadorMontoMayorACuarenta);
	float porcentajeMultasMayorACuarenta = obtenerPorcentaje(acumuladorMontoMayorACuarenta, acumulador);
	printf("Porcentaje de multas mayores a $40: %.2f%%\n", porcentajeMultasMayorACuarenta);
}

int main() {
	int acumulador = 0, acumuladorMontoMayorACuarenta = 0;
	int contador = 0, contadorMontoMayorACuarenta = 0;
	int totalIteraciones = 5;
	int valorMulta;

	for (contador = 1; contador <= totalIteraciones; contador++) {
		printf("Ingrese el monto de la multa: \n");
		scanf("%i", &valorMulta);
		acumulador = sumarValores(acumulador, valorMulta);
		if (valorMulta >= 40) {
			contadorMontoMayorACuarenta = sumarValores(contadorMontoMayorACuarenta, 1);
			acumuladorMontoMayorACuarenta = sumarValores(acumuladorMontoMayorACuarenta, valorMulta);
		}
	}
	mostrarResultados(contadorMontoMayorACuarenta, acumuladorMontoMayorACuarenta, acumulador);
	return 0;
}
