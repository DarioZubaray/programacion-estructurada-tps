/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/* En C no se puede dimensionar un arreglo estático con una dimensión no constante.
   PSeInt sobredimensionará el arreglo utilizando un valor simbólico ARREGLO_MAX.
   Sería posible crear un arreglo dinámicamente con los operadores new y delete, pero
   este mecanismo aún no está soportado en las traducciones automáticas de PSeInt. */
#define ARREGLO_MAX 100

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

// Declaraciones adelantadas de las funciones
void deseacontinuar(SIN_TIPO continuar por referencia);
void validarmejortiempo(SIN_TIPO tiemposegundos, SIN_TIPO nuevoauto, SIN_TIPO mejortiempo por referencia, SIN_TIPO mejorauto por referencia);
void validarpeortiempo(SIN_TIPO tiemposegundos, SIN_TIPO nuevoauto, SIN_TIPO peortiempo por referencia, SIN_TIPO peorauto por referencia);
void mostrarresultados(SIN_TIPO mejorauto, SIN_TIPO mejortiempo, SIN_TIPO peorauto, SIN_TIPO peortiempo);

/* 7 - En una carrera de autos se ingresan el numero de auto y su tiempo,  */
/* indicar e imprimir cual gano y cual fue el ultimo */
void deseacontinuar(SIN_TIPO continuar por referencia) {
	bool continuar;
	char respuestacontinuar[MAX_STRLEN];
	printf("Desea ingresar un nuevo valor? (s/n)\n");
	scanf("%f", respuestacontinuar);
	if (strcmp(respuestacontinuar, "n")==0 || strcmp(respuestacontinuar, "N")==0) {
		continuar = false;
	} else {
		continuar = true;
	}
}

void validarmejortiempo(SIN_TIPO tiemposegundos, SIN_TIPO nuevoauto, SIN_TIPO mejortiempo por referencia, SIN_TIPO mejorauto por referencia) {
	SIN_TIPO mejorauto;
	float mejortiempo;
	SIN_TIPO nuevoauto;
	float tiemposegundos;
	if (mejortiempo==0 || tiemposegundos<mejortiempo) {
		mejortiempo = tiemposegundos;
		mejorauto = nuevoauto;
	}
}

void validarpeortiempo(SIN_TIPO tiemposegundos, SIN_TIPO nuevoauto, SIN_TIPO peortiempo por referencia, SIN_TIPO peorauto por referencia) {
	SIN_TIPO nuevoauto;
	SIN_TIPO peorauto;
	SIN_TIPO peortiempo;
	SIN_TIPO tiemposegundos;
	if (tiemposegundos>peortiempo) {
		peortiempo = tiemposegundos;
		peorauto = nuevoauto;
	}
}

void mostrarresultados(SIN_TIPO mejorauto, SIN_TIPO mejortiempo, SIN_TIPO peorauto, SIN_TIPO peortiempo) {
	SIN_TIPO mejorauto;
	SIN_TIPO mejortiempo;
	SIN_TIPO peorauto;
	SIN_TIPO peortiempo;
	printf("El auto mas rapido fue: %f con un tiempo de: %f\n", mejorauto, mejortiempo);
	printf("El auto mas lento fue: %f con un tiempo de: %f\n", peorauto, peortiempo);
}

int main() {
	bool continuar;
	SIN_TIPO deseacontinuar[ARREGLO_MAX];
	char mejorauto[MAX_STRLEN];
	int mejortiempo;
	SIN_TIPO mostrarresultados[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	int nuevoauto;
	char peorauto[MAX_STRLEN];
	int peortiempo;
	SIN_TIPO tiemposegundos;
	int timposegundos;
	SIN_TIPO validarmejortiempo[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	continuar = true;
	while (continuar) {
		printf("Ingrese numero de auto: \n");
		scanf("%f", nuevoauto);
		printf("Ingrese su tiempo en seg: \n");
		scanf("%f", tiemposegundos);
		validarmejortiempo[tiemposegundos-1][nuevoauto-1][mejortiempo-1][mejorauto-1];
		validarmejortiempo[timposegundos-1][nuevoauto-1][peortiempo-1][peorauto-1];
		deseacontinuar[continuar-1];
	}
	mostrarresultados[mejorauto-1][mejortiempo-1][peorauto-1][peortiempo-1];
	return 0;
}

