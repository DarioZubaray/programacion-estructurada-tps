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

/* 1 - Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados */
int main() {
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
		printf("Ingre un sueldo:\n");
		scanf("%f", &nuevosueldo);
		acumulador = acumulador+nuevosueldo;
		contador = contador+1;
		printf("Desea ingresar un nuevo sueldo? s/n\n");
		scanf("%f", respuestacontinuar);
		if (strcmp(respuestacontinuar, "n")==0 || strcmp(respuestacontinuar, "N")==0) {
			continuar = false;
		}
	}
	printf("El total de sueldo es: %f\n", acumulador);
	promediosueldos = acumulador/contador;
	printf("Su promedio es: %f\n", promediosueldos);
	return 0;
}

