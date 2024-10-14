#include<stdio.h>
#include<stdbool.h>

/* 2 . Ingresar facturas hasta nro de factura = 0,  */
/* sumar sus importes y cuales y cuantas superan los $1000. Imprimir los resultados */

int sumarValores(int valor1, int valor2) {
	return valor1+valor2;
}

int main() {
	int acumulador = 0;
	int contador = 0, contadorMayorAMil = 0;

	bool continuar = true;
	int nuevaFactura;
	while (continuar) {
		printf("Ingrese una factura:\n");
		scanf("%i", &nuevaFactura);
		acumulador = sumarValores(acumulador, nuevaFactura);
		contador = sumarValores(contador, 1);
		if (nuevaFactura == 0) {
			continuar = false;
		} else {
			if (nuevaFactura >= 1000) {
				printf("Esta factura supera los $1000\n");
				contadorMayorAMil = sumarValores(contadorMayorAMil, 1);
			}
		}
	}
	printf("El total de facturas es: %i\n", acumulador);
	printf("Total de facturas mayores a $1000 es: %i\n", contadorMayorAMil);
	return 0;
}
