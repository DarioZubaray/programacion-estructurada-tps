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

/* 4 - Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros */
int main() {
	float contador;
	float contadorceros;
	float contadornegativos;
	float contadorpositivos;
	bool continuar;
	float nuevovalor;
	float promedioceros;
	float promedionegativos;
	float promediopositivos;
	char respuestacontinuar[MAX_STRLEN];
	continuar = true;
	contadorpositivos = 0;
	contadornegativos = 0;
	contadorceros = 0;
	contador = 0;
	while (continuar) {
		printf("Ingre un valor:\n");
		scanf("%f", nuevovalor);
		contador = contador+1;
		if (nuevovalor>0) {
			contadorpositivos = contadorpositivos+1;
		} else {
			if (nuevovalor<0) {
				contadornegativos = contadornegativos+1;
			} else {
				contadorceros = contadorceros+1;
			}
		}
		printf("Desea ingresar un nuevo valor? s/n\n");
		scanf("%f", respuestacontinuar);
		if (strcmp(respuestacontinuar, "n")==0 || strcmp(respuestacontinuar, "N")==0) {
			continuar = false;
		}
	}
	promediopositivos = contadorpositivos*100/contador;
	printf("Su promedio de positvos es: %f\n", promediopositivos);
	promedionegativos = contadornegativos*100/contador;
	printf("Su promedio de negativos es: %f\n", promedionegativos);
	promedioceros = contadorceros*100/contador;
	printf("Su promedio de ceros es: %f\n", promedioceros);
	return 0;
}

