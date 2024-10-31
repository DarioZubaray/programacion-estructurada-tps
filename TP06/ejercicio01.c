#include<stdio.h>
#include<stdbool.h>

/*
1- Ingresar datos y cargar un vector de 50 elementos, calcular:
 - La suma de todos los elementos.
 - El producto de todos los elementos.
 - Mostrar del vector el elemento 50 al 1.
 - Imprimir las componentes de indice par.
 - Imprimir las componentes de indice impar.
*/

void preguntarIngresarValores(int miVector[], int largoVector) {
	int ingreso;
	for (int i = 0; i < largoVector; i++) {
		printf("Ingrese un valor numerico: \n");
		scanf("%i", &ingreso);
		miVector[i] = ingreso;
	}
}

void procesarSumaYProducto(int miVector[], int largoVector, int *sumaTotal, long *productoTotal) {
	for (int i = 0; i < largoVector; i++) {
		*sumaTotal += miVector[i];
		if (*productoTotal != 0 ) {
			*productoTotal *= miVector[i];
		} else {
			*productoTotal = miVector[i];
		}
	}
}

void mostrarElementosDescendente(int miVector[], int largoVector) {
	printf("El valor de los elementos en orden descendente es: \n");
	for (int i = largoVector - 1; i >= 0; i--) {

		if (i == largoVector - 1) {
			printf("[%i, ", miVector[i]);
		} else if (i < largoVector - 1 && i > 0) {
			printf("%i, ", miVector[i]);
		} else if (i == 0) {
			printf("%i]\n", miVector[i]);
		}
	}
}

void mostrarComponenteIndices(int miVector[], int largoVector, bool paridad) {
	bool condicion;
	for (int i = 0; i < largoVector; i++) {
		if (paridad) {
			condicion = i % 2 == 0;
		} else {
			condicion = i % 2 != 0;
		}

		if (i == 0) {
			printf("[");
		}

		if (condicion && i < largoVector-2) {
			printf("%i, ", miVector[i]);
		} else if (condicion) {
			printf("%i]\n", miVector[i]);
		}
	}
}

int main() {
	int largoVector = 10;
	int miVector[largoVector];
	int sumaTotal = 0;
	long productoTotal = 0;

	preguntarIngresarValores(miVector, largoVector);

	procesarSumaYProducto(miVector, largoVector, &sumaTotal, &productoTotal);
	printf("==============================================\n");
	printf("La suma de todos los elementos es: %i\n", sumaTotal);
	printf("El producto de todos los elementos es: %i\n", productoTotal);

	mostrarElementosDescendente(miVector, largoVector);
	printf("Componentes de indice Par: \n");
	mostrarComponenteIndices(miVector, largoVector, true);
	printf("Componentes de indice Impar: \n");
	mostrarComponenteIndices(miVector, largoVector, false);
	printf("\n");
	return 0;
}
