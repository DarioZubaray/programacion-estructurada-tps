/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* 10. Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados con más de 5 años de antigüedad */
int main() {
	float antiguedad;
	float categoria;
	float sueldo;
	printf("Ingrese el sueldo del empleado: \n");
	scanf("%f", &sueldo);
	printf("Ingrese el número de la categoria: \n");
	scanf("%f", categoria);
	printf("Ingrese los años de antigüedad\n");
	scanf("%f", &antiguedad);
	if (categoria==1) {
		sueldo = 50*antiguedad+sueldo;
	}
	if (antiguedad>=5) {
		printf("El sueldo final del empleado con mas de 5 años en la empresa es de $%f\n", sueldo);
	} else {
		printf("El empleado no cuenta con los años mínimos para visualizar esta información\n");
	}
	return 0;
}

