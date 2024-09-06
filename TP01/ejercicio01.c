#include<stdio.h>

// 1. Ingresar dos valores enteros, sumarlos e imprimir esta suma.

int main() {
	float numeroUno;
	float numeroDos;

	printf("Ingrese un primer número: \n");
	scanf("%f", &numeroUno);

	printf("Ingrese un segundo número: \n");
	scanf("%f", &numeroDos);

	float resultado = numeroUno + numeroDos;
	printf("El resultado obtenido es: %.2f\n", resultado);
	return 0;
}
