/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 3. Ingresar los tres lados de un tri�ngulo e indicar que tipo de tri�ngulo es. */
int main() {
	SIN_TIPO ladodos;
	SIN_TIPO ladotres;
	SIN_TIPO ladouno;
	printf("Ingrese un primer lado del tri�ngulo: \n");
	scanf("%f", ladouno);
	printf("Ingrese un segundo lado del tri�ngulo: \n");
	scanf("%f", ladodos);
	printf("Ingrese un tercer lado del tri�ngulo: \n");
	scanf("%f", ladotres);
	if (ladouno==ladodos && ladodos==ladotres) {
		printf("Es un tri�gunlo con todos sus lados iguales. Equil�tero\n");
	} else {
		if ((ladouno==ladodos && ladodos!=ladotres) || (ladouno!=ladodos && ladouno==ladotres)) {
			printf("Es un tri�gunlo con algunos de sus lados iguales. Is�celes\n");
		} else {
			printf("Es un tri�ngulos con todos sus lados desiguales: Escaleno\n");
		}
	}
	return 0;
}

