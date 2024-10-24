/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* 1 - Cree un vector de enteros de 5 posiciones, inicializándolo con los valores del 10,100,94,84,11 */
int main() {
	float i;
	float mivector[5];
	mivector[0] = 10;
	mivector[1] = 100;
	mivector[2] = 94;
	mivector[3] = 84;
	mivector[4] = 11;
	for (i=1; i<=5; ++i) {
		printf("Elemento %f: %f\n", i, mivector[i-1]);
	}
	return 0;
}

