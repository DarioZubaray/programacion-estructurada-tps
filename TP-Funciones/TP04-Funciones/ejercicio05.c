#include<stdio.h>
#include<stdbool.h>

/* 5 - Ingresarlos datos de facturacion de una empresa.  */
/* Se conoce Numero de factura, Numero de articulo, Cantidad vendida y Precio unitario  */
/* Los datos finalizan con numero de factura = 0, cada factura solo tiene un numero de articulo,  */
/* y existen solo tres articulos. */

bool registrarfactura(int nuevaFactura) {
	int nuevoArticulo;
	int nuevaCantidad;
	float precioUnitario;
	printf("Ingrese numero de articulo: \n");
	scanf("%i", &nuevoArticulo);
	printf("Ingrese cantidad: \n");
	scanf("%i", &nuevaCantidad);
	printf("Ingrese precio unitario: \n");
	scanf("%f", &precioUnitario);
	printf("______________________________\n");
	printf("factura nro: %i\n", nuevaFactura);
	printf("   articulo: %i\n", nuevoArticulo);
	printf("   cantidad: %i\n", nuevaCantidad);
	printf("     precio: %.2f\n", precioUnitario);
	printf("      total: %.2f\n", nuevaCantidad * precioUnitario);
	printf("______________________________\n");
	return true;
}

int main() {
	int nuevaFactura;
	bool continuar = true;
	while (continuar) {
		printf("Ingrese una factura: \n");
		scanf("%i", &nuevaFactura);
		if (nuevaFactura == 0) {
			continuar = false;
		} else {
			continuar = registrarfactura(nuevaFactura);
		}
	}
	return 0;
}
