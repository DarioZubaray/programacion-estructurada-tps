/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* En C no se puede dimensionar un arreglo estático con una dimensión no constante.
   PSeInt sobredimensionará el arreglo utilizando un valor simbólico ARREGLO_MAX.
   Sería posible crear un arreglo dinámicamente con los operadores new y delete, pero
   este mecanismo aún no está soportado en las traducciones automáticas de PSeInt. */
#define ARREGLO_MAX 100

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

// Declaraciones adelantadas de las funciones
void obtenermatriz(SIN_TIPO mivector);
void calcularproductomatriz(SIN_TIPO mivectora, SIN_TIPO mivectorb, SIN_TIPO mivectorc);

/* 7 - Desarrolle un programa que pida al usuario los datos de dos matrices de `2x2`,  */
/* y calcule y muestre su producto. Investigue como obtener el producto de dos matrices. */
void obtenermatriz(SIN_TIPO mivector) {
	SIN_TIPO coordenada;
	float i;
	float j;
	SIN_TIPO mivector;
	for (i=1; i<=2; ++i) {
		for (j=1; j<=2; ++j) {
			printf("ingrese su coordenada [%f,%f]:\n", i, j);
			scanf("%f", coordenada);
			mivector[i-1][j-1] = coordenada;
		}
	}
}

void calcularproductomatriz(SIN_TIPO mivectora, SIN_TIPO mivectorb, SIN_TIPO mivectorc) {
	float i;
	float j;
	float mivectora;
	float mivectorb;
	float mivectorc;
	for (i=1; i<=2; ++i) {
		for (j=1; j<=2; ++j) {
			mivectorc[i-1][j-1] = (mivectora[i-1][0]*mivectorb[0][j-1])+(mivectora[i-1][1]*mivectorb[1][j-1]);
		}
	}
}

int main() {
	SIN_TIPO calcularproductomatriz[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	float i;
	float j;
	SIN_TIPO mivectora[2][2];
	SIN_TIPO mivectorb[2][2];
	SIN_TIPO mivectorc[2][2];
	SIN_TIPO obtenermatriz[ARREGLO_MAX];
	printf("ingrese un los valores de una matriz 2x2\n");
	obtenermatriz[mivectora-1];
	obtenermatriz[mivectorb-1];
	printf("El producto de las matrices ingresadas es:\n");
	calcularproductomatriz[mivectora-1][mivectorb-1][mivectorc-1];
	for (i=1; i<=2; ++i) {
		for (j=1; j<=2; ++j) {
			printf("[%f,%f] : %f\n", i, j, mivectorc[i-1][j-1]);
		}
	}
	return 0;
}

