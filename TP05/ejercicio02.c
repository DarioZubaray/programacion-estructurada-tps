#include<stdio.h>

/* 2 - Cree un vector de `10` posiciones, pida al usuario que ingrese los `10` valores y luego muestrelo de manera inversa. */

int main() {
	int posiciones = 10;
	int miVector[posiciones-1];
	int valorNumerico;

	for (int i = 0; i < posiciones; i++) {
		printf("Ingrese un valor numerico: \n");
		scanf("%d", &valorNumerico);
		miVector[i] = valorNumerico;
	}

	printf("Los valores ingresados de manera inversa son: \n");
	for (int i = posiciones; i > 0; i--) {
		printf("{%d}\n", miVector[i-1]);
	}

	return 0;
}
