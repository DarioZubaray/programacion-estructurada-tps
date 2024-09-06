#include<stdio.h>

/* 7. Ingresar el valor de la hora y el tiempo trabajado por un empleado,  */
/* calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs  */
/* y si trabajo más de 150 hs le dan otros $ 100 adicionales. Imprimir el sueldo */

int main() {
	float valorHora;
	float tiempoTrabajado;

	printf("Ingrese el valor de la hora:\n");
	scanf("%f", &valorHora);
	printf("Ingrese el tiempo trabajado por un operario:\n");
	scanf("%f", &tiempoTrabajado);

	float sueldo = valorHora * tiempoTrabajado;
	if (tiempoTrabajado > 50) {
		sueldo = sueldo + 100;
	}
	if (tiempoTrabajado > 150) {
		sueldo = sueldo+  100;
	}
	printf("El sueldo es: $%.2f\n", sueldo);
	return 0;
}
