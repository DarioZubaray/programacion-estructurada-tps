#include<stdio.h>

/* 1 - Cree un vector de enteros de 5 posiciones, inicializ�ndolo con los valores del 10,100,94,84,11 */

int main() {
	int miVector[5];
	miVector[0] = 10;
	miVector[1] = 100;
	miVector[2] = 94;
	miVector[3] = 84;
	miVector[4] = 11;

	for (int i = 0; i < 5; i++) {
		printf("Elemento %d: %d\n", i, miVector[i-1]);
	}

	return 0;
}
