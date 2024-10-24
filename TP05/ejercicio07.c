#include<stdio.h>

/* 7 - Desarrolle un programa que pida al usuario los datos de dos matrices de `2x2`,  */
/* y calcule y muestre su producto. Investigue como obtener el producto de dos matrices. */

void obtenerMatriz(int miVector[2][2]);
void calcularProductoMatriz(int miVectorA[2][2], int miVectorB[2][2], int miVectorC[2][2]);

void obtenerMatriz(int miVector[2][2]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int coordenada;
			printf("ingrese su coordenada [%d,%d]:\n", i, j);
			scanf("%d", &coordenada);
			miVector[i][j] = coordenada;
		}
	}
}

void calcularProductoMatriz(int miVectorA[2][2], int miVectorB[2][2], int miVectorC[2][2]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			miVectorC[i][j] = (miVectorA[i][0] * miVectorB[0][j]) + (miVectorA[i][1]*miVectorB[1][j]);
		}
	}
}

int main() {
	int miVectorA[2][2];
	int miVectorB[2][2];
	int miVectorC[2][2];

	printf("ingrese un los valores de una matriz 2x2\n");
	obtenerMatriz(miVectorA);
	obtenerMatriz(miVectorB);

	printf("El producto de las matrices ingresadas es:\n");
	calcularProductoMatriz(miVectorA, miVectorB, miVectorC);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("[%d,%d] : %d\n", i, j, miVectorC[i][j]);
		}
	}

	return 0;
}
