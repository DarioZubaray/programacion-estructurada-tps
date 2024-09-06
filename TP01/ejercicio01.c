/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 1. Ingresar dos valores enteros, sumarlos e imprimir esta suma. */
int main() {
	SIN_TIPO numerodos;
	SIN_TIPO numerouno;
	float resultado;
	printf("Ingrese un primer número: \n");
	scanf("%f", numerouno);
	printf("Ingrese un segundo número: \n");
	scanf("%f", numerodos);
	resultado = numerouno+numerodos;
	printf("El resultado obtenido es: %f\n", resultado);
	return 0;
}

