#include<stdio.h>
#include<stdbool.h>

/* 2 . Ingresar facturas hasta nro de factura = 0,
   sumar sus importes y cuáles y cuantas superan los $1000. Imprimir los resultados */

int main() {
	float acumulador = 0;
	int contador = 0;
	int contadorMayorAMil = 0;
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
		if (nuevaFactura >= 1000) {
			printf("Esta factura supera los $1000\n");
			contadorMayorAMil++;
		}
	}

	printf("El total de facturas es: %.2f\n", acumulador);
	printf("Total de facturas mayores a $1000 es: %i\n", contadorMayorAMil);
	return 0;
}
