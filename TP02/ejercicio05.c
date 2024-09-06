/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 5. Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to,  */
/* indicar e imprimir cuál de estas sumas es mayor */
int main() {
	SIN_TIPO numerocuatro;
	SIN_TIPO numerodos;
	SIN_TIPO numerotres;
	SIN_TIPO numerouno;
	float primerasuma;
	float segundasuma;
	printf("Ingrese un primer número: \n");
	scanf("%f", numerouno);
	printf("Ingrese un segundo número: \n");
	scanf("%f", numerodos);
	primerasuma = numerouno+numerodos;
	printf("Ingrese un tercer número: \n");
	scanf("%f", numerotres);
	printf("Ingrese un cuarto número: \n");
	scanf("%f", numerocuatro);
	segundasuma = numerotres+numerocuatro;
	if (primerasuma>=segundasuma) {
		printf("La primera suma es mayor (o igual)\n");
		printf("%f + %f = %f >= %f + %f = %f\n", numerouno, numerodos, primerasuma, numerotres, numerocuatro, segundasuma);
	} else {
		printf("La segunda suma es mayor\n");
		printf("%f + %f = %f < %f + %f = %f\n", numerouno, numerodos, primerasuma, numerotres, numerocuatro, segundasuma);
	}
	return 0;
}

