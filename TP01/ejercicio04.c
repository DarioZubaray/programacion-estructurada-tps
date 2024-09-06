#include<stdio.h>

// 4. Ingresar los lados de un triángulo calcular su perímetro e imprimirlo.

int main() {
	float ladoUno;
	float ladoDos;
	float ladoTres;

	printf("Ingrese un primer lado del triángulo: \n");
	scanf("%f", &ladoUno);
	printf("Ingrese un segundo lado del triángulo: \n");
	scanf("%f", &ladoDos);
	printf("Ingrese un tercer lado del triángulo: \n");
	scanf("%f", &ladoTres);

	float perimetro = ladoUno + ladoDos + ladoTres;
	printf("El perímetro del triángulo es: %.2f\n", perimetro);
	return 0;
}
