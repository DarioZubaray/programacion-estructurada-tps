#include<stdio.h>
#include<math.h>
#include<stdbool.h>

/* 2- Cree un programa para ingresar 10 numeros en un vector y luego que permita introducir un numero  */
/* para realizar una busqueda. Permita que el operador del programa elija que tipo de algoritmo  */
/* quiere utilizar por medio de un menu (debe ser busqueda binaria o secuencial). */

void ordernarPorBurbujeo(int miVector[10], int longitudVector) {
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 1; j < longitudVector - i; j++) {
			if (miVector[j-1] > miVector[j]) {
				int temporal = miVector[j];
				miVector[j] = miVector[j - 1];
				miVector[j - 1] = temporal;
			}
		}
	}
}

void mostrarVector(int miVector[10], int longitudVector) {
	printf("{");
	for (int i = 0; i < longitudVector; i++) {
		printf("%i, ", miVector[i]);
	}
	printf("}\n");
}

void busquedaBinaria(int miVector[10], int longitudVector, int numeroABuscar) {
	bool encontrado;
	int primero = 0, medio = 0, ultimo = longitudVector;
	while (primero < ultimo && !encontrado) {
		medio = (ultimo + primero)/2;
		printf("primero: %i, medio: %i, ultimo: %i\n", primero, medio, ultimo);
		if (miVector[medio] == numeroABuscar) {
			printf("Numero {%i}, encontrado en posicion: %i\n", numeroABuscar, medio+1);
			encontrado = true;
		} else if (numeroABuscar > miVector[medio]) {
			primero++;
		} else {
			ultimo--;
		}
	}
	if (!encontrado) {
		printf("El numero {%i} No fue encontrado.\n", numeroABuscar);
	}
}

void busquedaSecuencial(int miVector[10], int longitudVector, int numeroABuscar) {
	bool encontrado;
	for (int i = 0; i < longitudVector; i++) {
		if (miVector[i] == numeroABuscar) {
			printf("Numero {%i}, encontrado en posicion: %i\n", numeroABuscar, i+1);
			encontrado = true;
		}
	}
	if (!encontrado) {
		printf("El numero {%i} No fue encontrado.\n", numeroABuscar);
	}
}

int main() {
	int longitudVector = 10;
	int miVector[longitudVector];

	for (int i = 0; i < longitudVector; i++) {
		printf("Ingrese un valor numerico: \n");
		scanf("%i", &miVector[i]);
	}

	printf("============================================\n");
	printf("Ingrese un numero a buscar: \n");
	int numeroABuscar;
	scanf("%i", &numeroABuscar);
	printf("============================================\n");
	printf("Seleccione el tipo de algoritmo de busqueda: \n");
	printf("....1 - Binaria\n");
	printf("....2 - Secuencial\n");
	printf("============================================\n");
	int tipoAlgoritmo;
	scanf("%i", &tipoAlgoritmo);
	switch (tipoAlgoritmo) {
		case 1:
			ordernarPorBurbujeo(miVector, longitudVector);
			mostrarVector(miVector, longitudVector);
			busquedaBinaria(miVector, longitudVector, numeroABuscar);
			break;
		case 2:
			mostrarVector(miVector, longitudVector);
			busquedaSecuencial(miVector, longitudVector, numeroABuscar);
			break;
		default:
			printf("No existe un modo %i\n", tipoAlgoritmo);
	}
	return 0;
}
