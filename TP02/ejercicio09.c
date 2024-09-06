/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* 9. Ingresar el sueldo, categoría y antigüedad de un empleado,  */
/* calcular el sueldo final de cada uno de ellos,  */
/* si el empleado es de la categoría 1 se le adicionara $50 por cada año de antigüedad. */
int main() {
	float antiguedad;
	float categoria;
	float sueldofinal;
	float sueldoparcial;
	printf("Ingrese el sueldo del empleado: \n");
	scanf("%f", &sueldoparcial);
	printf("Ingrese el número de la categoria: \n");
	scanf("%f", categoria);
	printf("Ingrese los años de antigüedad\n");
	scanf("%f", &antiguedad);
	if (categoria==1) {
		sueldofinal = 50*antiguedad+sueldoparcial;
		printf("El sueldo final del empleado es $%f\n", sueldofinal);
	} else {
		printf("El sueldo final del empleado es $%f\n", sueldoparcial);
	}
	return 0;
}

