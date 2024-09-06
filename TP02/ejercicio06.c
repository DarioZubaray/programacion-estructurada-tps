/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 6. Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad */
int main() {
	SIN_TIPO alturaprimerapersona;
	SIN_TIPO alturasegundapersona;
	SIN_TIPO edadprimerapersona;
	SIN_TIPO edadsegundapersona;
	printf("Ingrese la edad de la primera persona: \n");
	scanf("%f", edadprimerapersona);
	printf("Ahora ingrese la altura de esta misma: \n");
	scanf("%f", alturaprimerapersona);
	printf("Ingrese la edad de la segunda persona: \n");
	scanf("%f", edadsegundapersona);
	printf("Ahora ingrese la altura de esta misma: \n");
	scanf("%f", alturasegundapersona);
	if (edadprimerapersona>=edadsegundapersona) {
		printf("La estatura de la persona de mayor edad es: %f\n", alturaprimerapersona);
	} else {
		printf("La estatura de la persona de mayor edad es: %f\n", alturasegundapersona);
	}
	return 0;
}

