/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 2. Ingresar un valor indicar e imprimir si es positivo, negativo o cero */
int main() {
	float numero;
	SIN_TIPO numeroingresado;
	printf("Ingrese un número:\n");
	scanf("%f", numeroingresado);
	if (numero>=0) {
		printf("El numero %f es positivo\n", numeroingresado);
	} else {
		printf("El numero %f es negativo\n", numeroingresado);
	}
	return 0;
}

