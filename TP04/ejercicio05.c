/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 5 - Ingresarlos datos de facturación de una empresa.  */
/* Se conoce Número de factura, Número de artículo, Cantidad vendida y Precio unitario  */
/* Los datos finalizan con numero de factura = 0, cada factura sólo tiene un número de artículo,  */
/* y existen sólo tres artículos. */
int main() {
	bool continuar;
	SIN_TIPO nuevacantidad;
	float nuevafactura;
	SIN_TIPO nuevoarticulo;
	SIN_TIPO preciounitario;
	continuar = true;
	while (continuar) {
		printf("Ingre una factura:\n");
		scanf("%f", nuevafactura);
		if (nuevafactura==0) {
			continuar = false;
		}
		printf("Ingrese numero de articulo:\n");
		scanf("%f", nuevoarticulo);
		printf("Ingrese cantidad\n");
		scanf("%f", nuevacantidad);
		printf("Ingrese precio unitario\n");
		scanf("%f", preciounitario);
		printf("______________________________\n");
		printf("factura nro: %f\n", nuevafactura);
		printf("     articulo: %f\n", nuevoarticulo);
		printf("     cantidad: %f\n", nuevacantidad);
		printf("     precio: %f\n", preciounitario);
		printf("______________________________\n");
	}
	return 0;
}

