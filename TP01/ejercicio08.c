#include<stdio.h>

// 8. Ingresar el valor de la hora y el tiempo trabajado por un operario, calcular su sueldo e imprimirlo.

int main() {
	float valorHora;
	float tiempoTrabajado;

	printf("Ingrese el valor de la hora:\n");
	scanf("%f", &valorHora);
	printf("Ingrese el tiempo trabajado por un operario:\n");
	scanf("%f", &tiempoTrabajado);

	float sueldo = valorHora * tiempoTrabajado;
	printf("El sueldo es: $%.2f\n", sueldo);
	return 0;
}
