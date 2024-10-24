/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* En C no se puede dimensionar un arreglo estático con una dimensión no constante.
   PSeInt sobredimensionará el arreglo utilizando un valor simbólico ARREGLO_MAX.
   Sería posible crear un arreglo dinámicamente con los operadores new y delete, pero
   este mecanismo aún no está soportado en las traducciones automáticas de PSeInt. */
#define ARREGLO_MAX 100

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 2 - Cree un vector de `10` posiciones, pida al usuario que ingrese los `10` valores y luego muéstrelo de manera inversa. */
int main() {
	float i;
	SIN_TIPO mivector[ARREGLO_MAX];
	int posiciones;
	SIN_TIPO valornumerico;
	posiciones = 5;
	for (i=1; i<=posiciones; ++i) {
		printf("Ingrese un valor numerico: \n");
		scanf("%f", valornumerico);
		mivector[i-1] = valornumerico;
	}
	printf("Los valores ingresados de manera inversa son: \n");
	for (i=posiciones; i>=1; --i) {
		printf("{%f}\n", mivector[i-1]);
	}
	return 0;
}

