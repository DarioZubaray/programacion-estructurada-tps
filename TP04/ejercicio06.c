#include<stdio.h>
#include<stdbool.h>

/* 6 - Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor */

int main() {
	bool continuar = true;
	float mayorTemperatura = 0;
	float menorTemperatura = 0;
	float nuevaTemperatura;

	while (continuar) {
		printf("Ingre una temperatura:\n");
		scanf("%f", &nuevaTemperatura);
		if (nuevaTemperatura == 1000) {
			continuar = false;
		} else {
			if (nuevaTemperatura > mayorTemperatura) {
				mayorTemperatura = nuevaTemperatura;
			}
			if (nuevaTemperatura < menorTemperatura) {
				menorTemperatura = nuevaTemperatura;
			}
		}
	}
	printf("La mayor temperatura registrada es: %.2f\n", mayorTemperatura);
	printf("La menor temperatura es: %.2f\n", menorTemperatura);
	return 0;
}
