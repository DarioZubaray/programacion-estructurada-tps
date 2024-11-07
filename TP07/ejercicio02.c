#include<stdio.h>
#include<math.h>
#include<stdbool.h>

/* 2- Cree un programa para ingresar 10 numeros en un vector y luego que permita introducir un numero  */
/* para realizar una busqueda. Permita que el operador del programa elija que tipo de algoritmo  */
/* quiere utilizar por medio de un menu (debe ser busqueda binaria o secuencial). */

void ordernarPorBurbujeo(int miVector[10], int LONGITUD_VECTOR) {
	for (int i = 0; i < LONGITUD_VECTOR; i++) {
		for (int j = 1; j < LONGITUD_VECTOR - i; j++) {
			if (miVector[j-1] > miVector[j]) {
				int temporal = miVector[j];
				miVector[j] = miVector[j - 1];
				miVector[j - 1] = temporal;
			}
		}
	}
}

void mostrarVector(int miVector[10], int LONGITUD_VECTOR) {
	printf("{");
	for (int i = 0; i < LONGITUD_VECTOR; i++) {
		printf("%i, ", miVector[i]);
	}
	printf("}\n");
}

void busquedaBinaria(int miVector[10], int LONGITUD_VECTOR, int numeroABuscar) {
	bool encontrado;
	int primero = 0, medio = 0, ultimo = LONGITUD_VECTOR;
	while (primero < ultimo && !encontrado) {
		medio = (ultimo + primero)/2;
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
		printf("El numero {%i} no fue encontrado con la busqueda binaria.\n", numeroABuscar);
	}
}

void busquedaSecuencial(int miVector[10], int LONGITUD_VECTOR, int numeroABuscar) {
	bool encontrado;
	for (int i = 0; i < LONGITUD_VECTOR; i++) {
		if (miVector[i] == numeroABuscar) {
			printf("Numero {%i}, encontrado en posicion: %i\n", numeroABuscar, i+1);
			encontrado = true;
		}
	}
	if (!encontrado) {
		printf("El numero {%i} no fue encontrado con la busqueda secuencial.\n", numeroABuscar);
	}
}

void ingresarBuscarNumero(int miVector[10], int LONGITUD_VECTOR) {
	int numeroABuscar, tipoAlgoritmo;
	while(true) {
		printf("============================================\n");
		printf("Ingrese un numero a buscar: \n");
		scanf("%i", &numeroABuscar);
		if(numeroABuscar == 0) {
			printf("'Fin programa.'");
			break;
		}
		printf("============================================\n");
		printf("Seleccione el tipo de algoritmo de busqueda: \n");
		printf("....1 - Binaria\n");
		printf("....2 - Secuencial\n");
		printf("============================================\n");

		scanf("%i", &tipoAlgoritmo);
		switch (tipoAlgoritmo) {
			case 1:
				ordernarPorBurbujeo(miVector, LONGITUD_VECTOR);
				mostrarVector(miVector, LONGITUD_VECTOR);
				busquedaBinaria(miVector, LONGITUD_VECTOR, numeroABuscar);
				break;
			case 2:
				mostrarVector(miVector, LONGITUD_VECTOR);
				busquedaSecuencial(miVector, LONGITUD_VECTOR, numeroABuscar);
				break;
			default:
				printf("No existe un modo %i\n", tipoAlgoritmo);
		}
	}
}

int main() {
	int LONGITUD_VECTOR = 10;
	int miVector[LONGITUD_VECTOR];

	for (int i = 0; i < LONGITUD_VECTOR; i++) {
		printf("Ingrese un valor numerico: \n");
		scanf("%i", &miVector[i]);
	}

	ingresarBuscarNumero(miVector,LONGITUD_VECTOR);

	return 0;
}
