#include<stdio.h>

/* 3 - Cree una matriz de enteros de `3x3`. Inicialicela en base a la siguiente tabla: */

int main() {
	int miVector[3][3];
	miVector[0][0] = 100;
	miVector[0][1] = 74;
	miVector[0][2] = 99;
	miVector[1][0] = 11;
	miVector[1][1] = 36;
	miVector[1][2] = 68;
	miVector[2][0] = 23;
	miVector[2][1] = 9;
	miVector[2][2] = 81;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Elemento %d, %d: %d\n", i,j, miVector[i][j]);
		}
	}

	return 0;
}
