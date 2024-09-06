#include<stdio.h>

// 2. Ingresar tres valores, imprimir la suma total, sólo sabe sumar de a dos operandos por vez.

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

	float resultadoParcial = valorUno + valorDos;
	float resultadoFinal = resultadoParcial + valorTres;

	printf("El resultado obtenido es: %.2f\n", resultadoFinal);
	return 0;
}
