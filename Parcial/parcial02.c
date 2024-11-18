#include<stdio.h>

void cargarEmpleados(int numeroEmpleados[10]) {
	for (int i = 0; i < 10; i++) {
		numeroEmpleados[i] = i * 11;
	}
}

int busquedaSecuencial(int numeroVector[10], int numeroVariable) {
	int valorRetorno = -1;
	for (int i = 0; i < 10; i++) {
		if (numeroVector[i] == numeroVariable) {
			valorRetorno = i;
		}
	}
	return valorRetorno;
}

int buscarLampara(int numeroLamparas[10], int numeroLampara) {
	return busquedaSecuencial(numeroLamparas, numeroLampara);
}

int buscarEmpleado(int numeroEmpleados[10], int numeroEmpleado) {
	return busquedaSecuencial(numeroEmpleados, numeroEmpleado);
}

void descontarstock(int stockLamparas[10], int indiceLampara, int cantidadPedida, 
				int pedidosEmpleados[10], int indiceEmpleado, int numeroEmpleados[10], int vendedorLampara[10]) {

	int stockActual = stockLamparas[indiceLampara];
	if (stockActual >= cantidadPedida) {
		stockLamparas[indiceLampara] -= cantidadPedida;
		pedidosEmpleados[indiceEmpleado] += 1;

		int maxVendedorLampara = vendedorLampara[indiceLampara];
		if (maxVendedorLampara < cantidadPedida) {
			vendedorLampara[indiceLampara] = numeroEmpleados[indiceEmpleado];
		}
	} else {
		printf("No se puede descontar el stock solicitado. Cancelando.\n");
	}
}

int main() {
	int numeroLampara, precioLampara, stockLampara;
	int numeroLamparas[10], precioLamparas[10], stockLamparas[10], vendedorLampara[10];

	printf("============================================\n");
	for (int i = 0; i < 10; i++) {
		printf("Ingrese codigo de lampara: (3 digitos)\n");
		scanf("%i", &numeroLampara);
		numeroLamparas[i] = numeroLampara;
		printf("Ingrese el precio para lampara numero %i\n", numeroLampara);
		scanf("%i", &precioLampara);
		precioLamparas[i] = precioLampara;
		printf("Ingrese el stock para lampara numero %i\n", numeroLampara);
		scanf("%i", &stockLampara);
		stockLamparas[i] = stockLampara;
		printf("Ingreso - lampara nro: %i, precio: %i, stock: %i\n", numeroLampara, precioLampara, stockLampara);
		printf("+++\n");
	}


	int numeroPedido, indiceLampara, numeroEmpleado, indiceEmpleado, cantidadPedida;
	int pedidosEmpleados[10], numeroEmpleados[10];
	cargarEmpleados(numeroEmpleados);

	printf("============================================\n");
	printf("Ingrese numero de pedido: (0 para terminar)\n");
	scanf("%i", &numeroPedido);
	while (numeroPedido != 0) {
		printf("Ingrese el codigo de lampara: (3 digitos)\n");
		scanf("%i", &numeroLampara);
		indiceLampara = buscarLampara(numeroLamparas, numeroLampara);
		if (indiceLampara == -1) {
			printf("No se encuentra disponible el codigo lampara %i\n", numeroLampara);
		} else {
			printf("Ingrese el numero de empleado: (2 digitos)\n");
			scanf("%i", &numeroEmpleado);
			indiceEmpleado = buscarEmpleado(numeroEmpleados, numeroEmpleado);
			printf("Ingrese la cantidad pedida: \n");
			scanf("%i", &cantidadPedida);
			descontarstock(stockLamparas, indiceLampara, cantidadPedida, pedidosEmpleados, indiceEmpleado, numeroEmpleados, vendedorLampara);
		}
		printf("============================================\n");
		printf("Ingrese numero de pedido: (0 para terminar)\n");
		scanf("%i", &numeroPedido);
	}

	
	int empleado55 = buscarEmpleado(numeroEmpleados, 55);
	printf("============================================\n");
	printf("Cantidad de pedidos que atendió el empleado 55: %i\n", pedidosEmpleados[empleado55]);
	printf("============================================\n");
	printf("Para cada lámpara, el nro de empleado que vendió la mayor cantidad en un pedido: \n");
	for (int i = 0; i < 10; i++) {
		printf("Lampara numero: %i, vendedorLampara: %i\n", numeroLamparas[i], vendedorLampara[i]);
	}
	printf("============================================\n");
	printf("Stock final actualizado de cada nro de lámpara: \n");
	for (int i = 0; i < 10; i++) {
		printf("Lampara numero: %i, stock: %i\n", numeroLamparas[i], stockLamparas[i]);
	}
	printf("============================================\n");
	return 0;
}

