#include<stdio.h>

/* 10. Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados con m�s de 5 a�os de antig�edad */

int main() {
	float sueldo;
	float categoria;
	float antiguedad;

	printf("Ingrese el sueldo del empleado: \n");
	scanf("%f", &sueldo);
	printf("Ingrese el número de la categoria: \n");
	scanf("%f", &categoria);
	printf("Ingrese los años de antigüedad\n");
	scanf("%f", &antiguedad);

	if (categoria == 1) {
		sueldo = (50 * antiguedad) + sueldo;
	}

	if (antiguedad >= 5) {
		printf("El sueldo final del empleado con mas de 5 años en la empresa es de $%.2f\n", sueldo);
	} else {
		printf("El empleado no cuenta con los años mínimos para visualizar esta información\n");
	}
	return 0;
}
