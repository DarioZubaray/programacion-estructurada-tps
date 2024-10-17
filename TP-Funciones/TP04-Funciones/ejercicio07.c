#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/* 7 - En una carrera de autos se ingresan el numero de auto y su tiempo,  */
/* indicar e imprimir cual gano y cual fue el ultimo */

bool deseaContinuar() {
	char respuestaContinuar[1];
	printf("Desea ingresar un nuevo valor? (s/n)\n");
	scanf(" %c", &respuestaContinuar[0]);
	if (strcmp(respuestaContinuar, "n") == 0 || strcmp(respuestaContinuar, "N") == 0) {
		return false;
	}
	return true;
}

int main() {
	bool continuar = true;
	int mejorAuto, mejorTiempo;
	int peorAuto, peorTiempo;
	int nuevoAuto;
	int tiempoSegundos;

	while (continuar) {
		printf("Ingrese numero de auto: \n");
		scanf("%i", &nuevoAuto);
		printf("Ingrese su tiempo en seg: \n");
		scanf("%i", &tiempoSegundos);
		if (mejorTiempo == 0 || tiempoSegundos < mejorTiempo) {
			mejorTiempo = tiempoSegundos;
			mejorAuto = nuevoAuto;
		}
		if (tiempoSegundos > peorTiempo) {
			peorTiempo = tiempoSegundos;
			peorAuto = nuevoAuto;
		}
		continuar = deseaContinuar();
	}
	printf("El auto mas rapido fue: %i con un tiempo de: %i\n", mejorAuto, mejorTiempo);
	printf("El auto mas lento fue: %i con un tiempo de: %i\n", peorAuto, peorTiempo);
	return 0;
}
