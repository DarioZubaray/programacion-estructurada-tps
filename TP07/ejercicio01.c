#include<stdio.h>
#include<stdbool.h>

/* 1 - Ingrese 20 valores en un vector e imprimalo ordenado  */
/* utilizando el algoritmo bubblesort u ordenamiento por burbujeo. */

void ingresarValores(int miVector[5], int LONGITUD_VECTOR) {
	bool continuar = true;
	int valorNumerico;
	int i = 0;
	while (continuar) {
		printf("Ingrese un valor numerico: \n");
		scanf("%i", &valorNumerico);
		miVector[i] = valorNumerico;
		i++;
		if (valorNumerico == 0 || i >= LONGITUD_VECTOR) {
			continuar = false;
		}
	}
}

void mostrarVector(char *textoAMostrar, int miVector[5], int LONGITUD_VECTOR) {
	printf("%s [", textoAMostrar);
	for (int i = 0; i < LONGITUD_VECTOR; i++) {
		printf("%i, ", miVector[i]);
	}
	printf("]\n");
}

void ordernarPorBurbujeo(int miVector[5], int LONGITUD_VECTOR) {
	for (int i = 0; i < LONGITUD_VECTOR; i++) {
		for (int j = 1; j < LONGITUD_VECTOR - i; j++) {
			if (miVector[j-1] > miVector[j]) {
				int temporal = miVector[j];
				miVector[j] = miVector[j - 1];
				miVector[j - 1] = temporal;
			}
		}
	}
}

int main() {
	int LONGITUD_VECTOR = 5;
	int miVector[LONGITUD_VECTOR];

	printf("Ingrese hasta un maximo de %i numeros\n", LONGITUD_VECTOR);
	printf("(Ingrese 0 para terminar)\n");

	ingresarValores(miVector, LONGITUD_VECTOR);

	mostrarVector("Orden inicial: ", miVector, LONGITUD_VECTOR);
	ordernarPorBurbujeo(miVector, LONGITUD_VECTOR);
	mostrarVector("Orden por burbujeo: ", miVector, LONGITUD_VECTOR);

	return 0;
}
