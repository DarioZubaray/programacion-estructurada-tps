#include<stdio.h>

/* 5 - Ingrese `10` valores en un vector de enteros. Sume todos los valores muestre el resultado en pantalla. */

int main() {
	int miVector[10];
	int sumaTotal = 0;
	int valorNumerico;
	for (int i = 0; i < 10; i++) {
		printf("Ingrese un valor numerico: \n");
		scanf("%d", &valorNumerico);
		miVector[i] = valorNumerico;
	}

	for (int i = 0; i < 10; i++) {
		sumaTotal += miVector[i];
	}
	printf("La suma total de los valores ingresados es: %i\n", sumaTotal);

	return 0;
}
