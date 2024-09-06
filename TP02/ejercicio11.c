#include<stdio.h>

/* 11. Ingresar las horas trabajadas por un empleado y su categor�a,  */
/* calcular su sueldo sabiendo que los empleados de la categor�a 1 cobran $50,  */
/* la 2 cobra $ 70 y la 3 cobra $ 80 */

int main() {
	float horasTrabajadas;
	float categoria;
	float sueldo;

	printf("Ingrese las horas trabajadas: \n");
	scanf("%f", &horasTrabajadas);
	printf("Ingrese el número de la categoria: \n");
	scanf("%f", &categoria);

	if (categoria == 1) {
		sueldo = 50 * horasTrabajadas;
		printf("El sueldo del empleado es $%.2f\n", sueldo);
	} else {
		if (categoria == 2) {
			sueldo = 70 * horasTrabajadas;
			printf("El sueldo del empleado es $%.2f\n", sueldo);
		} else {
			if (categoria == 3) {
				sueldo = 80 * horasTrabajadas;
				printf("El sueldo del empleado es $%.2f\n", sueldo);
			} else {
				printf("No se reconce la categoria del empleado -> %.2f\n", categoria);
			}
		}
	}
	return 0;
}
