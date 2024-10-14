#include<stdio.h>
#include<stdbool.h>

/* 6 - Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor */

int maximoregistro(int nuevaTemperatura, int mayorTemperatura) {
	if (nuevaTemperatura > mayorTemperatura) {
		return nuevaTemperatura;
	}
	return mayorTemperatura;
}

int minimoregistro(int nuevaTemperatura, int menorTemperatura) {
	if (nuevaTemperatura < menorTemperatura) {
		return nuevaTemperatura;
	}
	return menorTemperatura;
}

int main() {
	int mayorTemperatura = 0, menorTemperatura = 0;
	int nuevaTemperatura;
	bool continuar = true;
	while (continuar) {
		printf("Ingrese una temperatura: \n");
		scanf("%i", &nuevaTemperatura);
		if (nuevaTemperatura == 1000) {
			continuar = false;
		} else {
			mayorTemperatura = maximoregistro(nuevaTemperatura, mayorTemperatura);
			menorTemperatura = minimoregistro(nuevaTemperatura, menorTemperatura);
		}
	}
	printf("La mayor temperatura registrada es: %i\n", mayorTemperatura);
	printf("La menor temperatura es: %i\n", menorTemperatura);
	return 0;
}
