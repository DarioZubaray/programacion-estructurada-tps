#include<stdio.h>

/* 8. Ingresar tres valores correspondientes al día, mes y año de una fecha,
      indicar si es válida, considerar los años bisiestos */

int main() {
	int valorDia;
	int valorMes;
	int valorAnio;

	printf("Ingrese un primer valor para el dia: \n");
	scanf("%i", &valorDia);

	if ((valorDia > 0 && valorDia <= 31)) {
		printf("Ingrese un segundo valor para el mes: \n");
		scanf("%i", &valorMes);
		if ((valorMes > 0 && valorMes <= 12)) {
			printf("Ingrese un tercer valor para el año: \n");
			scanf("%i", &valorAnio);
			printf("\n");
			printf("La fecha ingresada es %i/%i/%i\n", valorDia, valorMes, valorAnio);
			if (valorDia == 29 && valorMes == 2) {
				if (valorAnio % 4 == 0) {
					printf("La fecha es correcta, por ser año bisiesto\n");
				} else {
					printf("Febrero solo tiene 29s en años bisiestos\n");
				}
			} else {
				if (valorDia == 30 && valorMes == 2) {
					printf("Febrero no puede contener 30 días\n");
				} else {
					if (valorDia == 31 && (valorMes == 4 || valorMes == 6 || valorMes == 9 || valorMes == 11)) {
						printf("La fecha No es correcta, 31 no puede darse en abril, junio, septiembre o noviembre\n");
					} else {
						printf("La fecha es correcta =)\n");
					}
				}
			}
		} else {
			printf("La fecha no es válida, el mes %i es incorrecto\n", valorMes);
		}
	} else {
		printf("La fecha no es válida, el día %i es incorrecto.\n", valorDia);
	}
	return 0;
}
