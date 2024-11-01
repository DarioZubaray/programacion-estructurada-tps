#include<stdio.h>

/* 4- Un restaurant tiene 6 mozos y 12 mesas, cada vez que cobran una mesa se anotanlos siguientes datos, que terminan con numero de factura = 0 */
/* Numero de factura, Numero de mozo, Numero de mesa, Cantidad de personas que comieron, Monto de la cuenta */
/* Se desea saber lo siguiente: */
/* - Cantidad de personas atendidas por cada mozo */
/* - Cantidad de facturas realizadas */
/* - Caja diaria realizada */
/* - Monto facturado por cada mesa en total */
/* - Porcentual facturado por cada mozo sobre el total */
/* - Si a cada mozo se le da el 5 MOD  de su venta cuanto le corresponde a cada uno */
/* - Cual mozo atendio mas personas en total */
/* - Cuantas facturas superaron $ 45 */
/* - Mesa a la que se facturo mas veces, o sea que mas recambio de clientes tuvo */

int main() {
	int totalMesas = 12;
	int totalMozos = 6;
	int PERSONAS_ATENDIDAS = 1,MONTO_MOZO = 2;
	int MONTO_MESA = 1, CANTIDAD_FACTURAS = 2;
	int mesas[totalMesas-1][2]; /* personaAtendidas, montoMozo */
	int mozos[totalMozos-1][2]; /* montoFacturado, cantidadFacturas */

	int numeroFactura, numeroMozo, numeroMesa, numeroPersonas, montoCuenta;
	int facturasRealizadas = 0, cajaDiaria = 0, facturaMayor45 = 0;
	
	printf("Ingrese numero de factura: \n");
	scanf("%i", &numeroFactura);

	while (numeroFactura != 0) {
		facturasRealizadas++;
		printf("Ingrese numero de mozo: (1-%i)\n", totalMozos);
		scanf("%i", &numeroMozo);

		printf("Ingrese numero de mesa: (1-%i)\n", totalMesas);
		scanf("%i", &numeroMesa);

		printf("Ingrese cantidad de personas: \n");
		scanf("%i", &numeroPersonas);
		mozos[numeroMozo-1][PERSONAS_ATENDIDAS] += numeroPersonas;

		printf("Ingrese monto de la cuenta: \n");
		scanf("%i", &montoCuenta);
		cajaDiaria += montoCuenta;
		mozos[numeroMozo-1][MONTO_MOZO] += montoCuenta;
		mesas[numeroMesa-1][MONTO_MESA] += montoCuenta;
		mesas[numeroMesa-1][CANTIDAD_FACTURAS] += 1;

		if (montoCuenta > 45) {
			facturaMayor45++;
		}

		printf("Ingrese numero de factura: \n");
		scanf("%i", &numeroFactura);
	}

	int masPersonasAtendidas = 0;
	int mozoMasPersonasAtendidas;
	printf("Cantidad de facturas realizadas: %i\n", facturasRealizadas);
	printf("Caja diaria realizada: %i\n", cajaDiaria);
	printf("Total de personas atendidas por cada mozo: \n");
	for (int i = 0; i < totalMozos; i++) {
		printf("..mozo n°%i atendio: %i\n", i+1, mozos[i][PERSONAS_ATENDIDAS]);
		if (masPersonasAtendidas < mozos[i][PERSONAS_ATENDIDAS]) {
			masPersonasAtendidas = mozos[i][PERSONAS_ATENDIDAS];
			mozoMasPersonasAtendidas = i;
		}
	}

	printf("Monto facturado por cada mesa en total: \n");
	for (int i = 0; i < totalMesas; i++) {
		printf("  mesa n°%i facturo: $%i\n", i+1, mesas[i][MONTO_MESA]);
	}

	float porcentual;
	float comision;
	printf("Porcentual facturado por cada mozo sobre el total: \n");
	for (int i = 0; i < totalMozos; i++) {
		porcentual = mozos[i][MONTO_MOZO] * 100.0 / cajaDiaria;
		printf("  mozo n°%i porcentual: %.2f%%", i+1, porcentual);
		comision = mozos[i][MONTO_MOZO] * 0.05;
		printf(", comision: $%.2f\n", comision);
	}

	int masFacturas = 0;
	int mesaMasFacturas = 0;
	printf("El mozo n°%i atendio mas personas en total (%i)\n", mozoMasPersonasAtendidas, masPersonasAtendidas);
	printf("Total facturas que superaron $ 45: %i\n", facturaMayor45);
	printf("Mesa a la que se facturo mas veces: ");
	for (int i = 0; i < totalMesas; i++) {
		if (masFacturas < mesas[i][CANTIDAD_FACTURAS]) {
			masFacturas = mesas[i][CANTIDAD_FACTURAS];
			mesaMasFacturas = i;
		}
	}
	printf("%i\n", mesaMasFacturas);
	return 0;
}
