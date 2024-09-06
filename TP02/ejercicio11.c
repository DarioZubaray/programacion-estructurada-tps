/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* 11. Ingresar las horas trabajadas por un empleado y su categoría,  */
/* calcular su sueldo sabiendo que los empleados de la categoría 1 cobran $50,  */
/* la 2 cobra $ 70 y la 3 cobra $ 80 */
int main() {
	float categoria;
	float horastrabajadas;
	float sueldo;
	printf("Ingrese las horas trabajadas: \n");
	scanf("%f", &horastrabajadas);
	printf("Ingrese el número de la categoria: \n");
	scanf("%f", categoria);
	if (categoria==1) {
		sueldo = 50*horastrabajadas;
		printf("El sueldo del empleado es $%f\n", sueldo);
	} else {
		if (categoria==2) {
			sueldo = 70*horastrabajadas;
			printf("El sueldo del empleado es $%f\n", sueldo);
		} else {
			if (categoria==3) {
				sueldo = 80*horastrabajadas;
				printf("El sueldo del empleado es $%f\n", sueldo);
			} else {
				printf("No se reconce la categoria del empleado -> %f\n", categoria);
			}
		}
	}
	return 0;
}

