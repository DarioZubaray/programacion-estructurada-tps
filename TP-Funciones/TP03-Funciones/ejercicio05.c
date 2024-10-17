#include<stdio.h>

/* 05 - Ingresar la patente y monto de la multa de 50 autos,  */
/* indicar e imprimir cuantos montos superan los $40  */
/* y del total cobrado que porcentaje representa la suma de los que superan los $40. */

int sumarValores(int valor1, int valor2) {
	return valor1 + valor2;
}

float obtenerPorcentaje(int numerador, int denominador) {
	return (numerador * 100.0) / denominador;
}

int main() {
	int totaliteraciones = 5;
	int acumulador, acumuladorMontoMayorACuarenta;
	int contador, contadorMontoMayorACuarenta;
	int valorMulta;

	for (contador=1; contador<=totaliteraciones; ++contador) {
		printf("Ingrese el monto de la multa: \n");
		scanf("%i", &valorMulta);
		acumulador = sumarValores(acumulador, valorMulta);
		if (valorMulta >= 40) {
			contadorMontoMayorACuarenta = sumarValores(contadorMontoMayorACuarenta, 1);
			acumuladorMontoMayorACuarenta = sumarValores(acumuladorMontoMayorACuarenta, valorMulta);
		}
	}
	printf("Cantidad de montos mayores a $40: %i\n", contadorMontoMayorACuarenta);
	float porcentajeMultasMayorACuarenta = obtenerPorcentaje(acumuladorMontoMayorACuarenta, acumulador);
	printf("Porcentaje de multas mayores a $40: %%%.2f\n", porcentajeMultasMayorACuarenta);
	return 0;
}
