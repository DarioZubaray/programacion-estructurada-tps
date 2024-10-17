#include<stdio.h>

/* 4 - Ingresar 30 valores. Contar cuantos est�n entre 1 y 10, cuantos entre 10 y 20,  */
/* cuantos entre 20 y 30 y cuantos son mas de 30.  */
/* Luego mostrar el porcentaje de cada grupo en el total. */

int perteneceARango(int cotaInferior, int cotaSuperior, int valorIngresado) {
	if (valorIngresado >= cotaInferior && valorIngresado < cotaSuperior) {
		return 1;
	}
	return 0;
}

void asignarAContadores(int valorIngresado, int *contadorPrimeraDecena, int *contadorSegundaDecena, int *contadorTerceraDecena) {
	*contadorPrimeraDecena += perteneceARango(1, 10, valorIngresado);
	*contadorSegundaDecena += perteneceARango(11, 20, valorIngresado);
	*contadorTerceraDecena += perteneceARango(21, 30, valorIngresado);
}

float obtenerPorcentaje(int numerador, int divisor) {
	return (numerador * 100.0) / divisor;
}

void mostrarPorcentajes(int totalIteraciones, int contadorPrimeraDecena, int contadorSegundaDecena, int contadorTerceraDecena) {
	float porcentajePrimeraDecena = obtenerPorcentaje(contadorPrimeraDecena, totalIteraciones);
	printf("Porcentaje valores en primera decena: %.2f%%\n", porcentajePrimeraDecena);

	float porcentajeSegundaDecena = obtenerPorcentaje(contadorSegundaDecena, totalIteraciones);
	printf("Porcentaje valores en segunda decena: %.2f%%\n", porcentajeSegundaDecena);

	float porcentajeTerceraDecena = obtenerPorcentaje(contadorTerceraDecena, totalIteraciones);
	printf("Porcentaje valores en tercera decena o mas: %.2f%%\n", porcentajeTerceraDecena);
}

int main() {
	int contador = 0, contadorPrimeraDecena = 0, contadorSegundaDecena = 0, contadorTerceraDecena = 0;
	int totalIteraciones = 5;
	int valorIngresado;

	for (contador = 1; contador <= totalIteraciones; contador++) {
		printf("Ingrese un valor numerico: \n");
		scanf("%i", &valorIngresado);
		asignarAContadores(valorIngresado, &contadorPrimeraDecena, &contadorSegundaDecena, &contadorTerceraDecena);
	}
	mostrarPorcentajes(totalIteraciones, contadorPrimeraDecena, contadorSegundaDecena, contadorTerceraDecena);
	return 0;
}
