/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* En C no se puede dimensionar un arreglo estático con una dimensión no constante.
   PSeInt sobredimensionará el arreglo utilizando un valor simbólico ARREGLO_MAX.
   Sería posible crear un arreglo dinámicamente con los operadores new y delete, pero
   este mecanismo aún no está soportado en las traducciones automáticas de PSeInt. */
#define ARREGLO_MAX 100

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* 4- Un restaurant tiene 6 mozos y 12 mesas, cada vez que cobran una mesa se anotanlos siguientes datos, que terminan con número de factura = 0 */
/* Número defactura, Número de mozo, Número de mesa, Cantidad de personas que comieron, Monto de la cuenta */
/* Se desea saber lo siguiente: */
/* - Cantidad de personas atendidas por cada mozo */
/* - Cantidad de facturas realizadas */
/* - Caja diaria realizada */
/* - Monto facturado por cada mesa en total */
/* - Porcentual facturado por cada mozo sobre el total */
/* - Si a cada mozo se le da el 5 MOD  de su venta cuánto le corresponde a cada uno */
/* - Cuál mozo atendió más personas en total */
/* - Cuántas facturas superaron $ 45 */
/* - Mesa a la que se facturó más veces, o sea que más recambio de clientes tuvo */
int main() {
	int cajadiaria;
	int cantidad_facturas;
	float comision;
	int facturamayor45;
	int facturasrealizadas;
	float iterador;
	int masfacturas;
	int maspersonasatendidas;
	int mesamasfacturas;
	float mesas[ARREGLO_MAX][2];
	float montocuenta;
	int monto_mesa;
	int monto_mozo;
	int mozomaspersonasatendidas;
	float mozos[ARREGLO_MAX][2];
	float numerofactura;
	SIN_TIPO numeromesa;
	SIN_TIPO numeromozo;
	float numeropersonas;
	int personas_atendidas;
	float porcentual;
	SIN_TIPO porcentualsin;
	int totalmesas;
	int totalmozos;
	personas_atendidas = 1;
	monto_mozo = 2;
	monto_mesa = 1;
	cantidad_facturas = 2;
	totalmozos = 6;
	totalmesas = 12;
	/* personaAtendidas, montoMozo */
	printf("Ingrese numero de factura: \n");
	/* montoFacturado, cantidadFacturas */
	scanf("%f", numerofactura);
	while (!(numerofactura)==(0)) {
		facturasrealizadas = facturasrealizadas+1;
		printf("Ingrese numero de mozo: (1-%i)\n", totalmozos);
		scanf("%f", numeromozo);
		printf("Ingrese numero de mesa: (1-%i)\n", totalmesas);
		scanf("%f", numeromesa);
		printf("Ingrese cantidad de personas: \n");
		scanf("%f", numeropersonas);
		mozos[numeromozo-1][personas_atendidas-1] = mozos[numeromozo-1][personas_atendidas-1]+numeropersonas;
		printf("Ingrese monto de la cuenta: \n");
		scanf("%f", &montocuenta);
		cajadiaria = cajadiaria+montocuenta;
		mozos[numeromozo-1][monto_mozo-1] = mozos[numeromozo-1][monto_mozo-1]+montocuenta;
		mesas[numeromesa-1][monto_mesa-1] = mesas[numeromesa-1][monto_mesa-1]+montocuenta;
		mesas[numeromesa-1][cantidad_facturas-1] = mesas[numeromesa-1][cantidad_facturas-1]+1;
		if (montocuenta>45) {
			facturamayor45 = facturamayor45+1;
		}
		printf("Ingrese numero de factura: \n");
		scanf("%f", &numerofactura);
	}
	printf("Cantidad de facturas realizadas: %i\n", facturasrealizadas);
	printf("Caja diaria realizada: %i\n", cajadiaria);
	printf("Total de personas atendidas por cada mozo: \n");
	for (iterador=1; iterador<=totalmozos; ++iterador) {
		printf("  mozo n°%f atendio: %f\n", iterador, mozos[iterador-1][personas_atendidas-1]);
		if (maspersonasatendidas<mozos[iterador-1][personas_atendidas-1]) {
			maspersonasatendidas = mozos[iterador-1][personas_atendidas-1];
			mozomaspersonasatendidas = iterador;
		}
	}
	printf("Monto facturado por cada mesa en total: \n");
	for (iterador=1; iterador<=totalmesas; ++iterador) {
		printf("  mesa n°%f facturo: $%f\n", iterador, mesas[iterador-1][monto_mesa-1]);
	}
	printf("Porcentual facturado por cada mozo sobre el total: \n");
	for (iterador=1; iterador<=totalmozos; ++iterador) {
		porcentual = mozos[iterador-1][monto_mozo-1]*100/cajadiaria;
		printf("  mozo n°%f porcentual: %f%f\n", iterador, porcentualsin, saltar);
		comision = mozos[iterador-1][monto_mozo-1]*0.05;
		printf(", comision: $%f\n", comision);
	}
	printf("El mozo n°%i atendió más personas en total (%i)\n", mozomaspersonasatendidas, maspersonasatendidas);
	printf("Total facturas que superaron $ 45: %i\n", facturamayor45);
	printf("Mesa a la que se facturó más veces: ");
	for (iterador=1; iterador<=totalmesas; ++iterador) {
		if (masfacturas<mesas[iterador-1][cantidad_facturas-1]) {
			masfacturas = mesas[iterador-1][cantidad_facturas-1];
			mesamasfacturas = iterador;
		}
	}
	printf("%i\n", mesamasfacturas);
	return 0;
}

