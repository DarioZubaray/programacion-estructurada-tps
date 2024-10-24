/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* 3 - Cree una matriz de enteros de `3x3`. Inicialícela en base a la siguiente tabla: */
int main() {
	float i;
	float j;
	float mivector[3][3];
	mivector[0][0] = 100;
	mivector[0][1] = 74;
	mivector[0][2] = 99;
	mivector[1][0] = 11;
	mivector[1][1] = 36;
	mivector[1][2] = 68;
	mivector[2][0] = 23;
	mivector[2][1] = 9;
	mivector[2][2] = 81;
	for (i=1; i<=3; ++i) {
		for (j=1; j<=3; ++j) {
			printf("Elemento %f: %f\n", i, mivector[i-1][j-1]);
		}
	}
	return 0;
}

