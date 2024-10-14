#include<stdio.h>
#include<stdbool.h>

/* 1 - Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados */

int main() {
	float acumulador = 0;
	int contador = 0;
	float nuevoSueldo;
	bool continuar = true;
	char respuestaContinuar;

	while (continuar) {
		printf("Ingrese un sueldo:\n");
		scanf("%f", &nuevoSueldo);
		acumulador += nuevoSueldo;
		contador++;

		printf("Desea ingresar un nuevo sueldo? s/n\n");
		scanf(" %c", &respuestaContinuar);
		if (respuestaContinuar == 'n' || respuestaContinuar == 'N') {
			continuar = false;
		}
	}
	printf("El total de sueldo es: %.2f\n", acumulador);
	float promedioSueldos = acumulador / contador;
	printf("Su promedio es: %.2f\n", promedioSueldos);
	return 0;
}
