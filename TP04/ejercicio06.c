/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>

/* 6 - Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor */
int main() {
	bool continuar;
	float mayortemperatura;
	float menortemperatura;
	float nuevatemperatura;
	continuar = true;
	mayortemperatura = 0;
	menortemperatura = 0;
	while (continuar) {
		printf("Ingre una temperatura:\n");
		scanf("%f", nuevatemperatura);
		if (nuevatemperatura==1000) {
			continuar = false;
		}
		if (nuevatemperatura>mayortemperatura) {
			mayortemperatura = nuevatemperatura;
		}
		if (nuevatemperatura<menortemperatura) {
			menortemperatura = nuevatemperatura;
		}
	}
	printf("La mayor temperatura registrada es: %f\n", mayortemperatura);
	printf("La menor temperatura es: %f\n", menortemperatura);
	return 0;
}

