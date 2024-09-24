/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 7 - En una carrera de autos se ingresan el número de auto y su tiempo,  */
/* indicar e imprimir cuál ganó y cúal fue el último */
int main() {
	bool continuar;
	char mejorauto[MAX_STRLEN];
	int mejortiempo;
	SIN_TIPO nuevoauto;
	char peorauto[MAX_STRLEN];
	int peortiempo;
	char respuestacontinuar[MAX_STRLEN];
	int tiemposegundos;
	continuar = true;
	while (continuar) {
		printf("Ingre numero de auto:\n");
		scanf("%f", nuevoauto);
		printf("Ingrese su tiempo en seg:\n");
		scanf("%f", tiemposegundos);
		if (mejortiempo==0 || tiemposegundos<mejortiempo) {
			mejortiempo = tiemposegundos;
			mejorauto = nuevoauto;
		}
		if (tiemposegundos>peortiempo) {
			peortiempo = tiemposegundos;
			peorauto = nuevoauto;
		}
		printf("Desea ingresar un nuevo tiempo? s/n\n");
		scanf("%f", respuestacontinuar);
		if (strcmp(respuestacontinuar, "n")==0 || strcmp(respuestacontinuar, "N")==0) {
			continuar = false;
		}
	}
	printf("El auto mas rapido fue: %s con un tiempo de: %i\n", mejorauto, mejortiempo);
	printf("El auto mas lento fue: %s con un tiempo de: %i\n", peorauto, peortiempo);
	return 0;
}

