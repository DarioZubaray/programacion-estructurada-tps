#include<stdio.h>
#include<stdbool.h>

/* 1 - Ingrese 20 valores en un vector e imprimalo ordenado  */
/* utilizando el algoritmo bubblesort u ordenamiento por burbujeo. */

void ingresarValores(int miVector[5], int longitudVector) {
	bool continuar = true;
	int valorNumerico;
	int i = 0;
	while (continuar) {
		printf("Ingrese un valor numerico: \n");
		scanf("%i", &valorNumerico);
		miVector[i] = valorNumerico;
		i++;
		if (valorNumerico == 0 || i >= longitudVector) {
			continuar = false;
		}
	}
}

void mostrarVector(char *textoAMostrar, int miVector[5], int longitudVector) {
	printf("%s [", textoAMostrar);
	for (int i = 0; i < longitudVector; i++) {
		printf("%i, ", miVector[i]);
	}
	printf("]\n");
}

void ordernarPorBurbujeo(int miVector[5], int longitudVector) {
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 1; j < longitudVector - i; j++) {
			if (miVector[j-1] > miVector[j]) {
				int temporal = miVector[j];
				miVector[j] = miVector[j - 1];
				miVector[j - 1] = temporal;
			}
		}
	}
}

int main() {
	int longitudVector = 5;
	int miVector[longitudVector];

	printf("Ingrese hasta un maximo de %i numeros\n", longitudVector);
	printf("(Ingrese 0 para terminar)\n");

	ingresarValores(miVector, longitudVector);

	mostrarVector("Orden inicial: ", miVector, longitudVector);
	ordernarPorBurbujeo(miVector, longitudVector);
	mostrarVector("Orden por burbujeo: ", miVector, longitudVector);

	return 0;
}
