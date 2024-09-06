#include<stdio.h>

// 9. Ingresar el tiempo trabajado por un operario y considerando que el valor de la hora es de 10 pesos, calcular su sueldo e imprimirlo.

int main() {
	float tiempoTrabajado;

	printf("Ingrese el tiempo trabajado por un operario:\n");
	scanf("%f", &tiempoTrabajado);
	
	const float valorHora = 10;
	float sueldo = valorHora * tiempoTrabajado;
	printf("El sueldo es: $%.2f\n", sueldo);
	return 0;
}
