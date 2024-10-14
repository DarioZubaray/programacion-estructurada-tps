#include<stdio.h>

/* 4 - Ingresar 30 valores. Contar cuantos estan entre 1 y 10, cuantos entre 10 y 20,  */
/* cuantos entre 20 y 30 y cuantos son mas de 30.  */
/* Luego mostrar el porcentaje de cada grupo en el total. */

int perteneceARango(int cotaInferior, int cotaSuperior, int valorIngresado) {
	if (valorIngresado > cotaInferior && valorIngresado <= cotaSuperior) {
		return 1;
	} 
	return 0;
}

float obtenerPorcentaje(int numerador, int denominador) {
	return (numerador * 100.0) / denominador;
}

int main() {
	int totalIteraciones = 5;
	int contador;
	int contadorPrimeraDecena, contadorSegundaDecena, contadorTerceraDecena;
	int valorIngresado;

	for (contador = 1; contador <= totalIteraciones; contador++) {
		printf("Ingrese un valor numerico: \n");
		scanf("%i", &valorIngresado);
		contadorPrimeraDecena += perteneceARango(0, 10, valorIngresado);
		contadorSegundaDecena += perteneceARango(10, 20, valorIngresado);
		contadorTerceraDecena += perteneceARango(20, 29, valorIngresado);
	}

	float porcentajePrimeraDecena = obtenerPorcentaje(contadorPrimeraDecena, totalIteraciones);
	printf("Porcentaje valores en primera decena: %%%.2f\n", porcentajePrimeraDecena);
	float porcentajeSegundaDecena = obtenerPorcentaje(contadorSegundaDecena, totalIteraciones);
	printf("Porcentaje valores en segunda decena: %%%.2f\n", porcentajeSegundaDecena);
	float porcentajeTerceraDecena = obtenerPorcentaje(contadorTerceraDecena, totalIteraciones);
	printf("Porcentaje valores en tercera decena o mas: %%%.2f\n", porcentajeTerceraDecena);
	return 0;
}
