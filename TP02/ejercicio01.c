#include<stdio.h>

// 1. Ingresar dos valores, indicar e imprimir si son iguales

int main() {
	float numeroUno;
	float numeroDos;
	printf("Ingrese un primer número:\n");
	scanf("%f", &numeroUno);
	printf("Ingrese un segundo número:\n");
	scanf("%f", &numeroDos);
	if (numeroUno == numeroDos) {
		printf("Ambos número son iguales\n");
	} else {
		printf("Los número son distintos\n");
	}
	return 0;
}
