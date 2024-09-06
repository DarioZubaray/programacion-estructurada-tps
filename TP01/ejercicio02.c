/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 2. Ingresar tres valores, imprimir la suma total, sólo sabe sumar de a dos operandos por vez. */
int main() {
	float resultadofinal;
	float resultadoparcial;
	SIN_TIPO valordos;
	float valortres;
	SIN_TIPO valoruno;
	printf("Ingrese un primer valor: \n");
	scanf("%f", valoruno);
	printf("Ingrese un segundo valor: \n");
	scanf("%f", valordos);
	printf("Ingrese un tercer valor: \n");
	scanf("%f", &valortres);
	resultadoparcial = valoruno+valordos;
	resultadofinal = resultadoparcial+valortres;
	printf("El resultado obtenido es: %f\n", resultadofinal);
	return 0;
}

