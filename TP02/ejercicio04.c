#include<stdio.h>

/* 4. Ingresar tres valores, sumarlos, calcular el promedio
   e indicar e imprimir cuál de estos valores es mayor al promedio */

int main() {
	float valorUno;
	float valorDos;
	float valorTres;

	printf("Ingrese un primer valor: \n");
	scanf("%f", &valorUno);
	printf("Ingrese un segundo valor: \n");
	scanf("%f", &valorDos);
	printf("Ingrese un tercer valor: \n");
	scanf("%f", &valorTres);

	float resultadoSuma = valorUno + valorDos + valorTres;
	printf("El resultado de la sumatoria es: %.2f\n", resultadoSuma);

	float promedio = resultadoSuma/3;
	printf("El promedio de los números ingresados es: %.2f\n", promedio);

	if (valorUno > valorDos) {
		if (valorUno > valorTres) {
			printf("El valor %.2f es el mayor.\n", valorUno);
		} else {
			printf("El valor %.2f es el mayor.\n", valorTres);
		}
	} else {
		if (valorDos > valorTres) {
			printf("El valor %.2f es el mayor.\n", valorDos);
		} else {
			printf("El valor %.2f es el mayor.\n", valorTres);
		}
	}
	return 0;
}
