/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* 8. Ingresar tres valores correspondientes al d�a, mes y a�o de una fecha,  */
/* indicar si es v�lida, considerar los a�os bisiestos */
int main() {
	float valoranio;
	float valordia;
	float valormes;
	printf("Ingrese un primer valor para el dia: \n");
	scanf("%f", valordia);
	if ((valordia>0 && valordia<=31)) {
		printf("Ingrese un segundo valor para el mes: \n");
		scanf("%f", valormes);
		if ((valormes>0 && valormes<=12)) {
			printf("Ingrese un tercer valor para el a�o: \n");
			scanf("%f", valoranio);
			printf("\n");
			printf("La fecha ingresada es %f/%f/%f\n", valordia, valormes, valoranio);
			if (valordia==29 && valormes==2) {
				if (valoranio%4==0) {
					printf("La fecha es correcta, por ser a�o bisiesto\n");
				} else {
					printf("Febrero solo tiene 29s en a�os bisiestos\n");
				}
			} else {
				if (valordia==30 && valormes==2) {
					printf("Febrero no puede contener 30 d�as\n");
				} else {
					if (valordia==31 && (valormes==4 || valormes==6 || valormes==9 || valormes==11)) {
						printf("La fecha No es correcta, 31 no puede darse en abril, junio, septiembre o noviembre\n");
					} else {
						printf("La fecha es correcta =)\n");
					}
				}
			}
		} else {
			printf("La fecha no es v�lida, el mes %f es incorrecto\n", valormes);
		}
	} else {
		printf("La fecha no es v�lida, el dia %f es incorrecto.\n", valordia);
	}
	return 0;
}

