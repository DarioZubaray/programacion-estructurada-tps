/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 1. Ingresar dos valores, indicar e imprimir si son iguales */
int main() {
	SIN_TIPO numerodos;
	SIN_TIPO numerouno;
	printf("Ingrese un primer número:\n");
	scanf("%f", numerouno);
	printf("Ingrese un segundo número:\n");
	scanf("%f", numerodos);
	if (numerouno==numerodos) {
		printf("Ambos números son iguales\n");
	} else {
		printf("Los números son distintos\n");
	}
	return 0;
}

