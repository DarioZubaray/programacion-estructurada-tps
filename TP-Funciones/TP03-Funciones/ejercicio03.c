#include<stdio.h>

/* Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el promedio  */
/* de lo valores pares y el promedio de los valores impares.  */
/* Luego mostrar por pantalla cuantos numeros superaron el valor 15. */

int sumarValores(int valor1, int valor2) {
	return valor1 + valor2;
}

int main() {
	int acumulador, acumuladorPar, acumuladorImpar;
	int contador, contadorPar, contadorImpar, contadorMayorQuince;
	float promedioGeneral, promedioValoresPares, promedioValoresImpares;

	int totalIteraciones = 8;
	int valorIngresado;

	for (contador = 1 ; contador <= totalIteraciones; contador++) {
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
	promedioGeneral = (acumulador * 1.0) / totalIteraciones;
	printf("Promedio general %.2f\n", promedioGeneral);

	if (contadorPar != 0 ) {
		promedioValoresPares = (acumuladorPar * 1.0) / contadorPar;
	}
	printf("Promedio valores pares %.2f\n", promedioValoresPares);

	if (!(contadorImpar)==(0)) {
		promedioValoresImpares = (acumuladorImpar * 1.0) / contadorImpar;
	}
	printf("Promedio valores impares %%%.2f\n", promedioValoresImpares);
	printf("Total numero que superaron el valor 15: %i\n", contadorMayorQuince);
	return 0;
}
