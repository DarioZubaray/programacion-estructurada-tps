#include<stdio.h>
#include<stdbool.h>

/* 6 - Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor */

void maximoRegistro(float nuevaTemperatura, float* mayorTemperatura) {
	if (nuevaTemperatura > *mayorTemperatura) {
		*mayorTemperatura = nuevaTemperatura;
	}
}

void minimoRegistro(float nuevaTemperatura, float* menorTemperatura) {
	if (nuevaTemperatura < *menorTemperatura) {
		*menorTemperatura = nuevaTemperatura;
	}
}

void mostrarResultados(float mayorTemperatura, float menorTemperatura) {
	printf("La mayor temperatura registrada es: %.2f\n", mayorTemperatura);
	printf("La menor temperatura es: %.2f\n", menorTemperatura);
}

int main() {
	float mayorTemperatura = 0;
	float menorTemperatura = 0;
	float nuevaTemperatura;
	bool continuar = true;
	while (continuar) {
		printf("Ingrese una temperatura: \n");
		scanf("%f", &nuevaTemperatura);
		if (nuevaTemperatura == 1000) {
			continuar = false;
		} else {
			maximoRegistro(nuevaTemperatura, &mayorTemperatura);
			minimoRegistro(nuevaTemperatura, &menorTemperatura);
		}
	}
	mostrarResultados(mayorTemperatura, menorTemperatura);
	return 0;
}
