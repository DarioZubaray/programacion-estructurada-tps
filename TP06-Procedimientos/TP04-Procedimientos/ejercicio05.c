/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>

/* En C no se puede dimensionar un arreglo estático con una dimensión no constante.
   PSeInt sobredimensionará el arreglo utilizando un valor simbólico ARREGLO_MAX.
   Sería posible crear un arreglo dinámicamente con los operadores new y delete, pero
   este mecanismo aún no está soportado en las traducciones automáticas de PSeInt. */
#define ARREGLO_MAX 100

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

// Declaraciones adelantadas de las funciones
void registrarfactura(SIN_TIPO nuevafactura);

/* 5 - Ingresarlos datos de facturacion de una empresa.  */
/* Se conoce Numero de factura, Numero de articulo, Cantidad vendida y Precio unitario  */
/* Los datos finalizan con numero de factura = 0, cada factura solo tiene un numero de articulo,  */
/* y existen solo tres articulos. */
void registrarfactura(SIN_TIPO nuevafactura) {
	float nuevacantidad;
	SIN_TIPO nuevafactura;
	SIN_TIPO nuevoarticulo;
	float preciounitario;
	printf("Ingrese numero de articulo: \n");
	scanf("%f", nuevoarticulo);
	printf("Ingrese cantidad: \n");
	scanf("%f", nuevacantidad);
	printf("Ingrese precio unitario: \n");
	scanf("%f", preciounitario);
	printf("______________________________\n");
	printf("factura nro: %f\n", nuevafactura);
	printf("   articulo: %f\n", nuevoarticulo);
	printf("   cantidad: %f\n", nuevacantidad);
	printf("     precio: %f\n", preciounitario);
	printf("      total: %f\n", nuevacantidad*preciounitario);
	printf("______________________________\n");
}

int main() {
	bool continuar;
	float nuevafactura;
	SIN_TIPO registrarfactura[ARREGLO_MAX];
	continuar = true;
	while (continuar) {
		printf("Ingrese una factura: \n");
		scanf("%f", nuevafactura);
		if ((nuevafactura)==(0)) {
			continuar = false;
		} else {
			registrarfactura[nuevafactura-1];
		}
	}
	return 0;
}

