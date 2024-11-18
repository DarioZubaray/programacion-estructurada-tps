#include<stdio.h>

int main() {
	int cuando;
	int horas;
	int horascontratadas = 0;
	int totalfinde = 0;
	int totalsemana = 0;
	int valorfinde = 65;
	int valorsemana = 50;

	printf("Ingrese periodo: (1-semana, 2-Finde, 3-Salir)\n");
	scanf("%i", &cuando);
	do {
		printf("Ingrese el total de horas: \n");
		scanf("%i", &horas);
		horascontratadas += horas;

		if ((cuando)==(1)) {
			totalsemana += horas * valorsemana;
		}

		if ((cuando)==(2)) {
			totalfinde += horas * valorfinde;
		}

		printf("Ingrese periodo: (1-semana, 2-Finde, 3-Salir)\n");
		scanf("%i", &cuando);
	} while ((cuando)!=(3));

	printf("Cantidad de horas contratadas: %ihs\n", horascontratadas);
	int montototaloperacion = totalsemana + totalfinde;
	printf("Monto total de la operación: $%i\n", montototaloperacion);
	return 0;
}
