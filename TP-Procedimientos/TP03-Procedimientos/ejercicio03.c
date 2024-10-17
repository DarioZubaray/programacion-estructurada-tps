#include<stdio.h>

/* Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el promedio  */
/* de lo valores pares y el promedio de los valores impares.  */
/* Luego mostrar por pantalla cuantos numeros superaron el valor 15. */

int sumarValores(int valor1, int valor2) {
	return valor1 + valor2;
}

float validarDivisor(int acumulador, int contador) {
	if (contador != 0 ) {
		return (acumulador * 1.0) / contador;
	}
	return 0.0;
}

void mostrarPromedios(int acumulador, int totalIteraciones, int acumuladorPar, int contadorPar,
						int acumuladorImpar, int contadorImpar, int contadorMayorQuince) {

	float promedioGeneral = (acumulador * 1.0)/totalIteraciones;
	printf("Promedio general %.2f\n", promedioGeneral);

	float promedioValoresPares = validarDivisor(acumuladorPar, contadorPar);
	printf("Promedio valores pares %.2f\n", promedioValoresPares);

	float promedioValoresImpares = validarDivisor(acumuladorImpar, contadorImpar);
	printf("Promedio valores impares %.2f\n", promedioValoresImpares);
	printf("Total numero que superaron el valor 15: %i\n", contadorMayorQuince);
}

int main() {
	int acumulador, acumuladorImpar, acumuladorPar;
	int contador, contadorImpar, contadorPar, contadorMayorQuince;
	int totalIteraciones = 8;
	int valorIngresado;
	for (contador = 1; contador <= totalIteraciones; contador++) {
		printf("Ingrese un valor numerico: \n");
		scanf("%i", &valorIngresado);
		acumulador = sumarValores(acumulador, valorIngresado);
		if (valorIngresado > 15) {
			contadorMayorQuince = sumarValores(contadorMayorQuince, 1);
		}
		if ((valorIngresado % 2) == 0) {
			acumuladorPar = sumarValores(acumuladorPar, valorIngresado);
			contadorPar = sumarValores(contadorPar, 1);
		} else {
			acumuladorImpar = sumarValores(acumuladorImpar, valorIngresado);
			contadorImpar = sumarValores(contadorImpar, 1);
		}
	}
	mostrarPromedios(acumulador, totalIteraciones, acumuladorPar, contadorPar, acumuladorImpar, contadorImpar, contadorMayorQuince);
	return 0;
}
