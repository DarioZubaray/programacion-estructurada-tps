/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 4. Ingresar tres valores, sumarlos, calcular el promedio  */
/* e indicar e imprimir cuál de estos valores es mayor al promedio */
int main() {
	float promedio;
	float resultadosuma;
	SIN_TIPO valordos;
	SIN_TIPO valortres;
	SIN_TIPO valoruno;
	printf("Ingrese un primer valor: \n");
	scanf("%f", valoruno);
	printf("Ingrese un segundo valor: \n");
	scanf("%f", valordos);
	printf("Ingrese un tercer valor: \n");
	scanf("%f", valortres);
	resultadosuma = valoruno+valordos+valortres;
	printf("El resultado de la sumatoria es: %f\n", resultadosuma);
	promedio = resultadosuma/3;
	printf("El promedio de los números ingresados es: %f\n", promedio);
	if (valoruno>valordos) {
		if (valoruno>valortres) {
			printf("El valor %f es el mayor.\n", valoruno);
		} else {
			printf("El valor %f es el mayor.\n", valortres);
		}
	} else {
		if (valordos>valortres) {
			printf("El valor %f es el mayor.\n", valordos);
		} else {
			printf("El valor %f es el mayor.\n", valortres);
		}
	}
	return 0;
}

