#include<stdio.h>

// 7. Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do valor ingresado, imprimir los resultados.

int main() {
	float valorUno;
	float valorDos;

	printf("Ingrese un primer valor:\n");
	scanf("%f", &valorUno);
	printf("Ingrese un segundo valor:\n");
	scanf("%f", &valorDos);

	float suma = valorUno + valorDos;
	float producto = valorUno * valorDos;
	float resta = valorUno - valorDos;

	printf("La suma de %.2f + %.2f es %.2f\n", valorUno, valorDos, suma);
	printf("El producto entre %.2f x %.2f es %f\n", valorUno, valorDos, producto);
	printf("La resta entre %.2f - %.2f es %.2f\n", valorUno, valorDos, resta);
	return 0;
}
