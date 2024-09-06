#include<stdio.h>

// 2. Ingresar un valor indicar e imprimir si es positivo, negativo o cero

int main() {
	float numeroIngresado;
	printf("Ingrese un número:\n");
	scanf("%f", &numeroIngresado);
	if (numeroIngresado >= 0) {
		printf("El numero %.2f es positivo\n", numeroIngresado);
	} else {
		printf("El numero %.2f es negativo\n", numeroIngresado);
	}
	return 0;
}
