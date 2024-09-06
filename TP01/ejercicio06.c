#include<stdio.h>
#include<math.h>

// 6. Ingresar los lados de un rectángulo y calcular su diagonal principal, superficie y perímetro. Imprima los resultados solicitados.

int main() {
	float ladoUno;
	float ladoDos;

	printf("Ingrese un lado de un rectángulo: \n");
	scanf("%f", &ladoUno);
	printf("Ingrese otro lado del rectángulo: \n");
	scanf("%f", &ladoDos);

	float diagonalPrincipal = sqrtf(ladoUno*ladoUno + ladoDos*ladoDos);
	printf("La diagonal principal del rectángulo es: %f\n", diagonalPrincipal);

	float superficie = ladoUno*ladoDos;
	printf("La superficie del rectángulo es: %f\n", superficie);

	float perimetro = 2*(ladoUno + ladoDos);
	printf("El perímetro del rectángulo es: %f\n", perimetro);
	return 0;
}
