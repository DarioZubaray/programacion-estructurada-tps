#include<stdio.h>
#include<stdbool.h>

/* 5 - Ingresarlos datos de facturación de una empresa.  */
/* Se conoce Número de factura, Número de artículo, Cantidad vendida y Precio unitario  */
/* Los datos finalizan con numero de factura = 0, cada factura sólo tiene un número de artículo,  */
/* y existen sólo tres artículos. */

int main() {
	bool continuar = true;
	float nuevaFactura;
	float nuevaCantidad;
	float nuevoArticulo;
	float precioUnitario;

	while (continuar) {
		printf("Ingrese una factura:\n");
		scanf("%f", &nuevaFactura);
		if (nuevaFactura == 0) {
			continuar = false;
			break;
		}

		printf("Ingrese numero de articulo:\n");
		scanf("%f", &nuevoArticulo);
		printf("Ingrese cantidad\n");
		scanf("%f", &nuevaCantidad);
		printf("Ingrese precio unitario\n");
		scanf("%f", &precioUnitario);

		printf("______________________________\n");
		printf("factura nro: %.2f\n", nuevaFactura);
		printf("     articulo: %.2f\n", nuevoArticulo);
		printf("     cantidad: %.2f\n", nuevaCantidad);
		printf("     precio: %.2f\n", precioUnitario);
		printf("     total: %.2f\n", nuevaCantidad * precioUnitario);
		printf("______________________________\n");
	}
	return 0;
}
