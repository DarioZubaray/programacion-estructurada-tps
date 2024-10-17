#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/* 7 - En una carrera de autos se ingresan el numero de auto y su tiempo,  */
/* indicar e imprimir cual gano y cual fue el ultimo */

void deseaContinuar(bool* continuar) {
	char respuestaContinuar[1];
	printf("Desea ingresar un nuevo valor? (s/n)\n");
	scanf(" %c", respuestaContinuar);
	if (strcmp(respuestaContinuar, "n") == 0 || strcmp(respuestaContinuar, "N") == 0) {
		*continuar = false;
	} else {
		*continuar = true;
	}
}

void validarMejorTiempo(int tiempoSegundos, int nuevoAuto, int* mejorTiempo, int* mejorAuto) {
	if (*mejorTiempo == 0 || tiempoSegundos < *mejorTiempo) {
		*mejorTiempo = tiempoSegundos;
		*mejorAuto = nuevoAuto;
	}
}

void validarPeorTiempo(int tiempoSegundos, int nuevoAuto, int* peorTiempo, int* peorAuto) {
	if (*peorTiempo == 0 || tiempoSegundos > *peorTiempo) {
		*peorTiempo = tiempoSegundos;
		*peorAuto = nuevoAuto;
	}
}

void mostrarResultados(int mejorAuto, int mejorTiempo, int peorAuto, int peorTiempo) {
	printf("El auto mas rapido fue: {%i} con un tiempo de: {%i}\n", mejorAuto, mejorTiempo);
	printf("El auto mas lento fue: {%i} con un tiempo de: {%i}\n", peorAuto, peorTiempo);
}

int main() {
	bool continuar = true;
	int mejorAuto = 0, mejorTiempo = 0;
	int peorAuto = 0, peorTiempo = 0;
	int nuevoAuto;
	int tiempoSegundos;
	while (continuar) {
		printf("Ingrese el numero de auto: \n");
		scanf("%i", &nuevoAuto);
		printf("Ingrese su tiempo en seg: \n");
		scanf("%i", &tiempoSegundos);
		validarMejorTiempo(tiempoSegundos, nuevoAuto, &mejorTiempo, &mejorAuto);
		validarPeorTiempo(tiempoSegundos, nuevoAuto, &peorTiempo, &peorAuto);
		deseaContinuar(&continuar);
	}
	mostrarResultados(mejorAuto, mejorTiempo, peorAuto, peorTiempo);
	return 0;
}
