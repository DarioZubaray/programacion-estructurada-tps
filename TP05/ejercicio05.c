/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 5 - Ingrese `10` valores en un vector de enteros. Sume todos los valores muestre el resultado en pantalla. */
int main() {
	float i;
	float mivector[10];
	int sumatotal;
	SIN_TIPO valornumerico;
	for (i=1; i<=10; ++i) {
		printf("Ingrese un valor numerico: \n");
		scanf("%f", valornumerico);
		mivector[i-1] = valornumerico;
	}
	for (i=1; i<=10; ++i) {
		sumatotal = sumatotal+mivector[i-1];
	}
	printf("La suma total de los valores ingresados es: %i\n", sumatotal);
	return 0;
}

