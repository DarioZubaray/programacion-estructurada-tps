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
void preguntaringresarvalores(SIN_TIPO mivector, SIN_TIPO largovector);
void procesarsumayproducto(SIN_TIPO mivector, SIN_TIPO largovector, SIN_TIPO sumatotal por referencia, SIN_TIPO productototal por referencia);
void mostrarelementosdescendente(SIN_TIPO mivector, SIN_TIPO largovector);
void mostrarcomponenteindice(SIN_TIPO mivector, SIN_TIPO largovector, SIN_TIPO paridad);

/* 1- Ingresar datos y cargar un vector de 50 elementos, calcular: */
/* - La suma de todos los elementos. */
/* - El producto de todos los elementos. */
/* - Mostrar del vector el elemento 50 al 1. */
/* - Imprimir las componentes de indice par. */
/* - Imprimir las componentes de indice impar. */
void preguntaringresarvalores(SIN_TIPO mivector, SIN_TIPO largovector) {
	SIN_TIPO ingreso;
	float iterador;
	float largovector;
	SIN_TIPO mivector;
	for (iterador=1; iterador<=largovector; ++iterador) {
		printf("Ingrese un valor numerico: \n");
		scanf("%f", ingreso);
		mivector[iterador-1] = ingreso;
	}
}

void procesarsumayproducto(SIN_TIPO mivector, SIN_TIPO largovector, SIN_TIPO sumatotal por referencia, SIN_TIPO productototal por referencia) {
	float iterador;
	float largovector;
	float mivector;
	float productototal;
	float sumatotal;
	for (iterador=1; iterador<=largovector; ++iterador) {
		sumatotal = sumatotal+mivector[iterador-1];
		if (!(productototal)==(0)) {
			productototal = productototal*mivector[iterador-1];
		} else {
			productototal = mivector[iterador-1];
		}
	}
}

void mostrarelementosdescendente(SIN_TIPO mivector, SIN_TIPO largovector) {
	float iterador;
	float largovector;
	SIN_TIPO mivector;
	printf("El valor de los elementos en orden descendente es: \n");
	for (iterador=largovector; iterador>=1; --iterador) {
		if ((iterador)==(largovector)) {
			printf("[%f, ", mivector[iterador-1]);
		} else {
			if (iterador<largovector && iterador>1) {
				printf("%f, ", mivector[iterador-1]);
			} else {
				if ((iterador)==(1)) {
					printf("%f]\n", mivector[iterador-1]);
				}
			}
		}
	}
}

void mostrarcomponenteindice(SIN_TIPO mivector, SIN_TIPO largovector, SIN_TIPO paridad) {
	bool condicion;
	int iterador;
	float largovector;
	SIN_TIPO mivector;
	bool paridad;
	for (iterador=1; iterador<=largovector; ++iterador) {
		if (paridad) {
			condicion = (iterador%2)==(0);
		} else {
			condicion = !(iterador%2)==(0);
		}
		if ((iterador)==(1)) {
			printf("[");
		}
		if (condicion && (iterador<largovector-1)) {
			printf("%f, ", mivector[iterador-1]);
		} else {
			if (condicion) {
				printf("%f]\n", mivector[iterador-1]);
			}
		}
	}
}

int main() {
	int largovector;
	SIN_TIPO mivector[ARREGLO_MAX];
	SIN_TIPO mostrarcomponenteindice[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO mostrarelementosdescendente[ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO preguntaringresarvalores[ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO procesarsumayproducto[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	int productototal;
	int sumatotal;
	largovector = 10;
	preguntaringresarvalores[mivector-1][largovector-1];
	procesarsumayproducto[mivector-1][largovector-1][sumatotal-1][productototal-1];
	printf("La suma de todos los elementos es: %i\n", sumatotal);
	printf("El producto de todos los elementos es: %i\n", productototal);
	mostrarelementosdescendente[mivector-1][largovector-1];
	printf("Componentes de indice Par: \n");
	mostrarcomponenteindice[mivector-1][largovector-1][true-1];
	printf("Componentes de indice Impar: \n");
	mostrarcomponenteindice[mivector-1][largovector-1][false-1];
	printf("\n");
	return 0;
}

