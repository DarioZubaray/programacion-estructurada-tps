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
SIN_TIPO sumarvalor(SIN_TIPO valor1, SIN_TIPO valor2);
SIN_TIPO calcularpromedio(SIN_TIPO numerador, SIN_TIPO denominador);
SIN_TIPO deseacontinuar();
void mostrarresultados(SIN_TIPO contadorpositivos, SIN_TIPO contadornegativos, SIN_TIPO contadorceros, SIN_TIPO contador);

/* 4 - Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros */
SIN_TIPO sumarvalor(SIN_TIPO valor1, SIN_TIPO valor2) {
	SIN_TIPO valor1;
	SIN_TIPO valor2;
	float valorretorno;
	valorretorno = valor1+valor2;
	return valorretorno;
}

SIN_TIPO calcularpromedio(SIN_TIPO numerador, SIN_TIPO denominador) {
	float denominador;
	float numerador;
	float promedio;
	promedio = (numerador*100.0)/denominador;
	return promedio;
}

SIN_TIPO deseacontinuar() {
	bool continuar;
	char respuestacontinuar[MAX_STRLEN];
	printf("Desea ingresar un nuevo valor? (s/n)\n");
	scanf("%f", respuestacontinuar);
	if (strcmp(respuestacontinuar, "n")==0 || strcmp(respuestacontinuar, "N")==0) {
		continuar = false;
	} else {
		continuar = true;
	}
	return continuar;
}

void mostrarresultados(SIN_TIPO contadorpositivos, SIN_TIPO contadornegativos, SIN_TIPO contadorceros, SIN_TIPO contador) {
	SIN_TIPO calcularpromedio[ARREGLO_MAX][ARREGLO_MAX];
	int contador;
	int contadorceros;
	int contadornegativos;
	int contadorpositivos;
	SIN_TIPO promedioceros;
	SIN_TIPO promedionegativos;
	SIN_TIPO promediopositivos;
	promediopositivos = calcularpromedio[contadorpositivos-1][contador-1];
	printf("Su promedio de positvos es: %f\n", promediopositivos);
	promedionegativos = calcularpromedio[contadornegativos-1][contador-1];
	printf("Su promedio de negativos es: %f\n", promedionegativos);
	promedioceros = calcularpromedio[contadorceros-1][contador-1];
	printf("Su promedio de ceros es: %f\n", promedioceros);
}

int main() {
	int contador;
	int contadorceros;
	int contadornegativos;
	int contadorpositivos;
	bool continuar;
	SIN_TIPO deseacontinuar;
	SIN_TIPO mostrarresultados[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	float nuevovalor;
	SIN_TIPO sumarvalor[ARREGLO_MAX][ARREGLO_MAX];
	continuar = true;
	contadorpositivos = 0;
	contadornegativos = 0;
	contadorceros = 0;
	contador = 0;
	while (continuar) {
		printf("Ingrese un valor: \n");
		scanf("%f", nuevovalor);
		contador = sumarvalor[contador-1][0];
		if (nuevovalor>0) {
			contadorpositivos = sumarvalor[contadorpositivos-1][0];
		} else {
			if (nuevovalor<0) {
				contadornegativos = sumarvalor[contadornegativos-1][0];
			} else {
				contadorceros = sumarvalor[contadorceros-1][0];
			}
		}
		continuar = deseacontinuar;
	}
	mostrarresultados[contadorpositivos-1][contadornegativos-1][contadorceros-1][contador-1];
	return 0;
}

