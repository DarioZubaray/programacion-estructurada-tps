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
void obtenerpromediosueldos(SIN_TIPO promediosueldos por referencia);

/* 1 - Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados */
void obtenerpromediosueldos(SIN_TIPO promediosueldos por referencia) {
	float acumulador;
	float contador;
	bool continuar;
	float nuevosueldo;
	float promediosueldos;
	char respuestacontinuar[MAX_STRLEN];
	continuar = true;
	acumulador = 0;
	contador = 0;
	while (continuar) {
		printf("Ingrese un sueldo:\n");
		scanf("%f", &nuevosueldo);
		acumulador = acumulador+nuevosueldo;
		contador = contador+1;
		printf("Desea ingresar un nuevo sueldo? s/n\n");
		scanf("%f", respuestacontinuar);
		if (strcmp((respuestacontinuar), ("n"))==0 || strcmp((respuestacontinuar), ("N"))==0) {
			continuar = false;
		}
	}
	printf("El total de sueldo es: %f\n", acumulador);
	promediosueldos = acumulador*1.0/contador;
}

int main() {
	SIN_TIPO obtenerpromediosueldos[ARREGLO_MAX];
	float promediosueldos;
	obtenerpromediosueldos[promediosueldos-1];
	printf("Su promedio es: %f\n", promediosueldos);
	return 0;
}

