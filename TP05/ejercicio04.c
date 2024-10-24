/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* 4 - Cree un array de char y escriba la palabra "Bienvenidos" */
int main() {
	float i;
	char mivector[MAX_STRLEN][11];
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
	for (i=1; i<=11; ++i) {
		printf("Elemento %f: %f\n", i, mivector[i-1]);
	}
	return 0;
}

