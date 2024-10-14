#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/* 1 - Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados */

float obtenerPromedioSueldos() {
	int contador = 0;
	float acumulador;
	float nuevoSueldo;
	char respuestaContinuar[1];

	bool continuar = true;
	while (continuar) {
		printf("Ingrese un sueldo:\n");
		scanf("%f", &nuevoSueldo);
		acumulador += nuevoSueldo;
		contador++;

		printf("Desea ingresar un nuevo sueldo? (s/n)\n");
		scanf(" %s", &respuestaContinuar[0]);
		if (strcmp((respuestaContinuar), ("n"))==0 || strcmp((respuestaContinuar), ("N"))==0) {
			continuar = false;
		}
	}
	printf("El total de sueldo es: %.2f\n", acumulador);
	return (acumulador * 1.0) / contador;
}

int main() {
	float promedioSueldos = obtenerPromedioSueldos();
	printf("Su promedio es: %.2f\n", promedioSueldos);
	return 0;
}
