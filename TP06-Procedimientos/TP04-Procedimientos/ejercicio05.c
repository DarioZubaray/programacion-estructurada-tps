#include<stdio.h>
#include<stdbool.h>

/* 5 - Ingresarlos datos de facturacion de una empresa.  */
/* Se conoce Numero de factura, Numero de articulo, Cantidad vendida y Precio unitario  */
/* Los datos finalizan con numero de factura = 0, cada factura solo tiene un numero de articulo,  */
/* y existen solo tres articulos. */

void registrarfactura(int nuevaFactura) {
	float nuevoArticulo;
	float nuevaCantidad;
	float precioUnitario;
	printf("Ingrese numero de articulo: \n");
	scanf("%f", nuevoArticulo);
	printf("Ingrese cantidad: \n");
	scanf("%f", nuevaCantidad);
	printf("Ingrese precio unitario: \n");
	scanf("%f", preciounitario);
	printf("______________________________\n");
	printf("factura nro: %f\n", nuevaFactura);
	printf("   articulo: %f\n", nuevoArticulo);
	printf("   cantidad: %f\n", nuevaCantidad);
	printf("     precio: %f\n", precioUnitario);
	printf("      total: %f\n", nuevaCantidad*precioUnitario);
	printf("______________________________\n");
}

int main() {
	bool continuar = true;
	int nuevaFactura;

	while (continuar) {
		printf("Ingrese una factura: \n");
		scanf("%i", nuevaFactura);
		if (nuevaFactura == 0) {
			continuar = false;
		} else {
			registrarfactura(nuevaFactura);
		}
	}
	return 0;
}
