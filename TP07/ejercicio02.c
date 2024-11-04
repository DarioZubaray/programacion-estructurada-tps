/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>
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
void ordernarporburbujeo(SIN_TIPO mivector, SIN_TIPO longitudvector);
void mostrarvector(SIN_TIPO mivector, SIN_TIPO longitudvector);
void busquedabinaria(SIN_TIPO mivector, SIN_TIPO longitudvector, SIN_TIPO numeroabuscar);
void busquedasecuencial(SIN_TIPO mivector, SIN_TIPO longitudvector, SIN_TIPO numeroabuscar);

/* 2- Cree un programa para ingresar 10 números en un vector y luego que permita introducir un número  */
/* para realizar una búsqueda. Permita que el operador del programa elija que tipo de algoritmo  */
/* quiere utilizar por medio de un menú (debe ser búsqueda binaria o secuencial). */
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

void mostrarvector(SIN_TIPO mivector, SIN_TIPO longitudvector) {
	float iterador;
	SIN_TIPO mivector;
	printf("{");
	for (iterador=1; iterador<=10; ++iterador) {
		printf("%f, ", mivector[iterador-1]);
	}
	printf("}\n");
}

void busquedabinaria(SIN_TIPO mivector, SIN_TIPO longitudvector, SIN_TIPO numeroabuscar) {
	bool encontrado;
	SIN_TIPO longitudvector;
	int medio;
	SIN_TIPO mivector;
	SIN_TIPO numeroabuscar;
	int primero;
	int ultimo;
	primero = 1;
	medio = 0;
	ultimo = longitudvector;
	while (primero<ultimo && !(encontrado)==(true)) {
		medio = int((ultimo+primero)/2+.5);
		printf("primero: %i, medio: %i, ultimo: %i\n", primero, medio, ultimo);
		if ((mivector[medio-1])==(numeroabuscar)) {
			printf("Numero {%f}, encontrado en posicion: %i\n", numeroabuscar, medio);
			encontrado = true;
		} else {
			if (numeroabuscar>mivector[medio-1]) {
				primero = primero+1;
			} else {
				ultimo = ultimo-1;
			}
		}
	}
	if ((encontrado)==(false)) {
		printf("El numero {%f} No fue encontrado.\n", numeroabuscar);
	}
}

void busquedasecuencial(SIN_TIPO mivector, SIN_TIPO longitudvector, SIN_TIPO numeroabuscar) {
	bool encontrado;
	float iterador;
	float longitudvector;
	SIN_TIPO mivector;
	SIN_TIPO numeroabuscar;
	for (iterador=1; iterador<=longitudvector; ++iterador) {
		if ((mivector[iterador-1])==(numeroabuscar)) {
			printf("Numero {%f}, encontrado en posicion: %f\n", numeroabuscar, iterador);
			encontrado = true;
		}
	}
	if ((encontrado)==(false)) {
		printf("El numero {%f} No fue encontrado.\n", numeroabuscar);
	}
}

int main() {
	SIN_TIPO busquedabinaria[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO busquedasecuencial[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	float i;
	int longitudvector;
	SIN_TIPO mivector[ARREGLO_MAX];
	SIN_TIPO mostrarvector[ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO numeroabuscar;
	SIN_TIPO ordernarporburbujeo[ARREGLO_MAX][ARREGLO_MAX];
	int tipoalgoritmo;
	longitudvector = 10;
	for (i=1; i<=longitudvector; ++i) {
		printf("Ingrese un valor numerico: \n");
		scanf("%f", mivector[i-1]);
	}
	printf("============================================\n");
	printf("Ingrese un numero a buscar: \n");
	scanf("%f", numeroabuscar);
	printf("============================================\n");
	printf("Seleccione el tipo de algoritmo de busqueda: \n");
	printf("....1 - Binaria\n");
	printf("....2 - Secuencial\n");
	printf("============================================\n");
	scanf("%i", &tipoalgoritmo);
	switch (tipoalgoritmo) {
	case 1:
		ordernarporburbujeo[mivector-1][longitudvector-1];
		mostrarvector[mivector-1][longitudvector-1];
		busquedabinaria[mivector-1][longitudvector-1][numeroabuscar-1];
		break;
	case 2:
		mostrarvector[mivector-1][longitudvector-1];
		busquedasecuencial[mivector-1][longitudvector-1][numeroabuscar-1];
		break;
	default:
		printf("No existe un modo %i\n", tipoalgoritmo);
	}
	return 0;
}

