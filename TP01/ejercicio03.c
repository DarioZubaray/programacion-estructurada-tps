#include<stdio.h>

// 3. Ingresar tres valores, sumarlos e imprimir esa suma, se puede sumar de a varios operandos en la misma operación. 

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

	float resultado = valorUno + valorDos + valorTres;
	printf("El resultado obtenido es: %.2f\n", resultado);
	return 0;
}
