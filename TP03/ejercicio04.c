#include<stdio.h>

/* 4 - Ingresar 30 valores. Contar cuantos están entre 1 y 10, cuantos entre 10 y 20,
   cuantos entre 20 y 30 y cuantos son mas de 30.
   Luego mostrar el porcentaje de cada grupo en el total. */

int main() {
	int contadorPrimeraDecena = 0;
	int contadorSegundaDecena = 0;
	int contadorTerceraDecena = 0;
	int totalIteraciones = 30;
	float valorIngresado;

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
	float porcentajePrimeraDecena = contadorPrimeraDecena * 100 / totalIteraciones;
	printf("Porcentaje valores en primera decena: %.2f\n", porcentajePrimeraDecena);
	float porcentajeSegundaDecena = contadorSegundaDecena * 100 / totalIteraciones;
	printf("Porcentaje valores en segunda decena: %.2f\n", porcentajeSegundaDecena);
	float porcentajeTerceraDecena = contadorTerceraDecena * 100 / totalIteraciones;
	printf("Porcentaje valores en tercera decena o más: %.2f\n", porcentajeTerceraDecena);
	return 0;
}
