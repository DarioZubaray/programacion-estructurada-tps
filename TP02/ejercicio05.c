#include<stdio.h>

/* 5. Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to,
   indicar e imprimir cuál de estas sumas es mayor */

int main() {
	float numeroUno;
	float numeroDos;
	float numeroTres;
	float numeroCuatro;

	printf("Ingrese un primer número: \n");
	scanf("%f", &numeroUno);
	printf("Ingrese un segundo número: \n");
	scanf("%f", &numeroDos);
	float primeraSuma = numeroUno + numeroDos;

	printf("Ingrese un tercer número: \n");
	scanf("%f", &numeroTres);
	printf("Ingrese un cuarto número: \n");
	scanf("%f", &numeroCuatro);
	float segundaSuma = numeroTres + numeroCuatro;

	if (primeraSuma >= segundaSuma) {
		printf("La primera suma es mayor (o igual)\n");
		printf("%.2f + %.2f = %.2f >= %.2f + %.2f = %.2f\n", numeroUno, numeroDos, primeraSuma, numeroTres, numeroCuatro, segundaSuma);
	} else {
		printf("La segunda suma es mayor\n");
		printf("%.2f + %.2f = %.2f < %.2f + %.2f = %.2f\n", numeroUno, numeroDos, primeraSuma, numeroTres, numeroCuatro, segundaSuma);
	}
	return 0;
}
