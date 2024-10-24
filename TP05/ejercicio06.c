/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 6 - Desarrolle un programa que almacene en un vector el número de días que tiene cada mes  */
/* (supondremos que es un año no bisiesto), pida al usuario que le indique un mes  */
/* (1=enero, 12=diciembre) y muestre en pantalla el número de días que tiene ese mes */
int main() {
	SIN_TIPO mesingresado;
	float mivector[12];
	mivector[0] = 31;
	mivector[1] = 28;
	mivector[2] = 31;
	mivector[3] = 30;
	mivector[4] = 31;
	mivector[5] = 30;
	mivector[6] = 31;
	mivector[7] = 31;
	mivector[8] = 30;
	mivector[9] = 31;
	mivector[10] = 30;
	mivector[11] = 31;
	printf("Indique un mes para saber su cantidad de dias: \n");
	scanf("%f", mesingresado);
	printf("El mes ingresado tiene %f dias.\n", mivector[mesingresado-1]);
	return 0;
}

