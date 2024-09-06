/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* 7. Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do valor ingresado, imprimir los resultados. */
int main() {
	float producto;
	float resta;
	float suma;
	float valordos;
	float valoruno;
	printf("Ingrese un primer valor:\n");
	scanf("%f", &valoruno);
	printf("Ingrese un segundo valor:\n");
	scanf("%f", &valordos);
	suma = valoruno+valordos;
	producto = valoruno*valordos;
	resta = valoruno-valordos;
	printf("La suma de %f + %f es %f\n", valoruno, valordos, suma);
	printf("El producto entre %f x %f es %f\n", valoruno, valordos, producto);
	printf("La resta entre %f - %f es %f\n", valoruno, valordos, resta);
	return 0;
}

