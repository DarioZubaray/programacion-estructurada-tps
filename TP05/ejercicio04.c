#include<stdio.h>

/* 4 - Cree un array de char y escriba la palabra "Bienvenidos" */

int main() {
	char* mivector[11];
	mivector[0] = "B";
	mivector[1] = "i";
	mivector[2] = "e";
	mivector[3] = "n";
	mivector[4] = "v";
	mivector[5] = "e";
	mivector[6] = "n";
	mivector[7] = "i";
	mivector[8] = "d";
	mivector[9] = "o";
	mivector[10] = "s";

	for (int i = 0; i < 11; i++) {
		printf("Elemento %d: %s\n", i, mivector[i]);
	}

	return 0;
}

