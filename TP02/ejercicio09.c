#include<stdio.h>

/* 9. Ingresar el sueldo, categoría y antigüedad de un empleado,  */
/* calcular el sueldo final de cada uno de ellos,  */
/* si el empleado es de la categoría 1 se le adicionara $50 por cada año de antigüedad. */

int main() {
	float categoria;
	float antiguedad;
	float sueldoParcial;

	printf("Ingrese el sueldo del empleado: \n");
	scanf("%f", &sueldoParcial);
	printf("Ingrese el número de la categoria: \n");
	scanf("%f", &categoria);
	printf("Ingrese los años de antigüedad\n");
	scanf("%f", &antiguedad);

	if (categoria == 1) {
		float sueldoFinal = (50 * antiguedad) + sueldoParcial;
		printf("El sueldo final del empleado es $%.2f\n", sueldoFinal);
	} else {
		printf("El sueldo final del empleado es $%.2f\n", sueldoParcial);
	}
	return 0;
}
