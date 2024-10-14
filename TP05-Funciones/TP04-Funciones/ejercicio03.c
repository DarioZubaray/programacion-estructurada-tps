#include<stdio.h>
#include<stdbool.h>

/* 3 - Sobre elejercicio anterior indicar cu?ntas estan entre $ 400 y $ 700 inclusive. */
/* imprimir el resultado */

int pertenceARango(int minimo, int maximo, int nuevafactura) {
	if (nuevafactura>minimo && nuevafactura<=maximo) {
		return 1;
	} 
	return 0;
}

int main() {
	int acumulador = 0;
	int contador = 0;
	int contadorEnRango = 0;
	bool continuar = true;
	int nuevaFactura;
	while (continuar) {
		printf("Ingrese una factura:\n");
		scanf("%i", &nuevaFactura);
		if (nuevaFactura == 0) {
			continuar = false;
		} else {
			acumulador += nuevaFactura;
			contador++;
			contadorEnRango += pertenceARango(400, 700, nuevaFactura);
		}
	}
	printf("El total de facturas es: %i\n", acumulador);
	printf("Total de facturas en el rango de $400 a $700(inclusive) es: %i\n", contadorEnRango);
	return 0;
}
