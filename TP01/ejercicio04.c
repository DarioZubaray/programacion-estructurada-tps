/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 4. Ingresar los lados de un tri�ngulo calcular su per�metro e imprimirlo. */
int main() {
	SIN_TIPO ladodos;
	SIN_TIPO ladotres;
	SIN_TIPO ladouno;
	float perimetro;
	printf("Ingrese un primer lado del tri�ngulo: \n");
	scanf("%f", ladouno);
	printf("Ingrese un segundo lado del tri�ngulo: \n");
	scanf("%f", ladodos);
	printf("Ingrese un tercer lado del tri�ngulo: \n");
	scanf("%f", ladotres);
	perimetro = ladouno+ladodos+ladotres;
	printf("El per�metro del tri�ngulo es: %f\n", perimetro);
	return 0;
}

