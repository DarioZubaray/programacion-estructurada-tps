#include<stdio.h>
#include<stdbool.h>

/* 2 . Ingresar facturas hasta nro de factura = 0,  */
/* sumar sus importes y cuales y cuantas superan los $1000. Imprimir los resultados */

void sumarValores(int *valor1, int valor2) {
	*valor1 = *valor1 + valor2;
}

void mostrarResultados(int acumulador, int contadorMayorAMil) {
	printf("El total de facturas es: %i\n", acumulador);
	printf("Total de facturas mayores a $1000 es: %i\n", contadorMayorAMil);
}

int main() {
	int acumulador = 0;
	int contadorMayorAMil = 0;
	bool continuar = true;
	int nuevaFactura;

	while (continuar) {
		printf("Ingrese una factura:\n");
		scanf("%i", &nuevaFactura);
		sumarValores(&acumulador, nuevaFactura);
		if (nuevaFactura == 0) {
			continuar = false;
		}
		if (nuevaFactura >= 1000) {
			printf("Esta factura supera los $1000\n");
			sumarValores(&contadorMayorAMil, 1);
		}
	}
	mostrarResultados(acumulador, contadorMayorAMil);
	return 0;
}
