#include<stdio.h>
#include<stdbool.h>
#include <string.h>

/* 7 - En una carrera de autos se ingresan el número de auto y su tiempo,  */
/* indicar e imprimir cuál ganó y cúal fue el ultimo */

int main() {
	bool continuar = true;
	char mejorAuto[50];
	int mejorTiempo;
	char nuevoAuto[50];
	char peorAuto[50];
	int peorTiempo;
	char respuestaContinuar;
	int tiempoSegundos;

	while (continuar) {
		printf("Ingrese numero de auto:\n");
		scanf("%s", nuevoAuto);
		printf("Ingrese su tiempo en seg:\n");
		scanf("%i", &tiempoSegundos);
		if (mejorTiempo == 0 || tiempoSegundos < mejorTiempo) {
			mejorTiempo = tiempoSegundos;
			strcpy(mejorAuto, nuevoAuto);
		}
		if (tiempoSegundos > peorTiempo) {
			peorTiempo = tiempoSegundos;
			strcpy(peorAuto, nuevoAuto);
		}
		printf("Desea ingresar un nuevo tiempo? s/n\n");
		scanf(" %c", &respuestaContinuar);
		if (respuestaContinuar == 'n' || respuestaContinuar == 'N') {
			continuar = false;
		}
	}
	printf("El auto mas rapido fue: %s con un tiempo de: %i\n", mejorAuto, mejorTiempo);
	printf("El auto mas lento fue: %s con un tiempo de: %i\n", peorAuto, peorTiempo);
	return 0;
}
