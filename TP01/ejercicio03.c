/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 3. Ingresar tres valores, sumarlos e imprimir esa suma, se puede sumar de a varios operandos en la misma operación. */
int main() {
	float resultado;
	SIN_TIPO valordos;
	SIN_TIPO valortres;
	SIN_TIPO valoruno;
	printf("Ingrese un primer valor: \n");
	scanf("%f", valoruno);
	printf("Ingrese un segundo valor: \n");
	scanf("%f", valordos);
	printf("Ingrese un tercer valor: \n");
	scanf("%f", valortres);
	resultado = valoruno+valordos+valortres;
	printf("El resultado obtenido es: %f\n", resultado);
	return 0;
}

