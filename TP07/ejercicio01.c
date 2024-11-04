/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>

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
void ingresarvalores(SIN_TIPO mivector, SIN_TIPO longitudvector);
void mostrarvector(SIN_TIPO textoamostrar, SIN_TIPO mivector, SIN_TIPO longitudvector);
void ordernarporburbujeo(SIN_TIPO mivector, SIN_TIPO longitudvector);

/* 1 - Ingrese 20 valores en un vector e imprimalo ordenado  */
/* utilizando el algoritmo bubblesort u ordenamiento por burbujeo. */
void ingresarvalores(SIN_TIPO mivector, SIN_TIPO longitudvector) {
	bool continuar;
	int iterador;
	int longitudvector;
	int mivector;
	int valornumerico;
	iterador = 1;
	continuar = true;
	while (continuar) {
		printf("Ingrese un valor numerico: \n");
		scanf("%i", &valornumerico);
		mivector[iterador-1] = valornumerico;
		iterador = iterador+1;
		if ((valornumerico)==(0) || iterador>longitudvector) {
			continuar = false;
		}
	}
}

void mostrarvector(SIN_TIPO textoamostrar, SIN_TIPO mivector, SIN_TIPO longitudvector) {
	float i;
	float longitudvector;
	SIN_TIPO mivector;
	SIN_TIPO textoamostrar;
	printf("%f\n", textoamostrar);
	for (i=1; i<=longitudvector; ++i) {
		printf("miVector[%f] : %f\n", i, mivector[i-1]);
	}
}

void ordernarporburbujeo(SIN_TIPO mivector, SIN_TIPO longitudvector) {
	float iteradori;
	float iteradorj;
	float longitudvector;
	SIN_TIPO mivector;
	SIN_TIPO temporal;
	for (iteradori=2; iteradori<=longitudvector; ++iteradori) {
		for (iteradorj=1; iteradorj<=longitudvector-iteradori+1; ++iteradorj) {
			if (mivector[iteradorj-1]>mivector[iteradorj]) {
				temporal = mivector[iteradorj-1];
				mivector[iteradorj-1] = mivector[iteradorj];
				mivector[iteradorj] = temporal;
			}
		}
	}
}

int main() {
	SIN_TIPO ingresarvalores[ARREGLO_MAX][ARREGLO_MAX];
	int longitudvector;
	int mivector[ARREGLO_MAX];
	SIN_TIPO mostrarvector[ARREGLO_MAX];
	SIN_TIPO ordernarporburbujeo[ARREGLO_MAX][ARREGLO_MAX];
	longitudvector = 20;
	printf("Ingrese hasta un maximo de %i numeros\n", longitudvector);
	printf("(Ingrese 0 para terminar)\n");
	ingresarvalores[mivector-1][longitudvector-1];
	mostrarvector["Orden inicial: "-1][mivector-1][longitudvector-1];
	ordernarporburbujeo[mivector-1][longitudvector-1];
	mostrarvector["Orden por burbujeo: "-1][mivector-1][longitudvector-1];
	return 0;
}

