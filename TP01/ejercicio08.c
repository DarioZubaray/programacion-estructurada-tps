/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* 8. Ingresar el valor de la hora y el tiempo trabajado por un operario, calcular su sueldo e imprimirlo. */
int main() {
	float sueldo;
	float tiempotrabajado;
	float valorhora;
	printf("Ingrese el valor de la hora:\n");
	scanf("%f", &valorhora);
	printf("Ingrese el tiempo trabajado por un operario:\n");
	scanf("%f", &tiempotrabajado);
	sueldo = valorhora*tiempotrabajado;
	printf("El sueldo es: $%f\n", sueldo);
	return 0;
}

