/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* 10. Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados con m�s de 5 a�os de antig�edad */
int main() {
	float antiguedad;
	float categoria;
	float sueldo;
	printf("Ingrese el sueldo del empleado: \n");
	scanf("%f", &sueldo);
	printf("Ingrese el n�mero de la categoria: \n");
	scanf("%f", categoria);
	printf("Ingrese los a�os de antig�edad\n");
	scanf("%f", &antiguedad);
	if (categoria==1) {
		sueldo = 50*antiguedad+sueldo;
	}
	if (antiguedad>=5) {
		printf("El sueldo final del empleado con mas de 5 a�os en la empresa es de $%f\n", sueldo);
	} else {
		printf("El empleado no cuenta con los a�os m�nimos para visualizar esta informaci�n\n");
	}
	return 0;
}

