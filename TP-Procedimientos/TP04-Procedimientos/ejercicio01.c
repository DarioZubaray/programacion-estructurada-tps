#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/* 1 - Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados */

void obtenerPromedioSueldos(float *promedioSueldos) {
	int contador = 0;
	float acumulador = 0.0;
	float nuevoSueldo;
	char respuestaContinuar[1];
	bool continuar = true;

	while (continuar) {
		printf("Ingrese un sueldo:\n");
		scanf("%f", &nuevoSueldo);
		acumulador += nuevoSueldo;
		contador++;

		printf("Desea ingresar un nuevo sueldo? s/n\n");
		scanf(" %c", respuestaContinuar);
		if (strcmp((respuestaContinuar), ("n")) == 0 || strcmp((respuestaContinuar), ("N")) == 0) {
			continuar = false;
		}
	}
	printf("El total de sueldo es: %.2f\n", acumulador);
	*promedioSueldos = (acumulador*1.0f) /contador;
}

int main() {
	float promedioSueldos = 0;
	obtenerPromedioSueldos(&promedioSueldos);
	printf("Su promedio es: %.2f\n", promedioSueldos);
	return 0;
}
