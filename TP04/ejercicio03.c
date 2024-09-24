#include<stdio.h>
#include<stdbool.h>

/* 3 - Sobre elejercicio anterior indicar cuántas estan entre $ 400 y $ 700 inclusive. */
/* imprimir el resultado */

int main() {
	float acumulador = 0;
	int contador = 0;
	int contadorEnRango = 0;
	bool continuar = true;
	float nuevaFactura;

	while (continuar) {
		printf("Ingrese una factura:\n");
		scanf("%f", &nuevaFactura);
		acumulador += nuevaFactura;
		contador++;
		if (nuevaFactura == 0) {
			continuar = false;
		}
		if (nuevaFactura > 400 && nuevaFactura <= 700) {
			contadorEnRango++;
		}
	}
	printf("El total de facturas es: %.2f\n", acumulador);
	printf("Total de facturas en el rango de $400 a $700(inclusive) es: %i\n", contadorEnRango);
	return 0;
}
