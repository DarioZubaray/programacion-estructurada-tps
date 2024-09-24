/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>

/* 3 - Sobre elejercicio anterior indicar cuántas estan entre $ 400 y $ 700 inclusive. */
/* imprimir el resultado */
int main() {
	float acumulador;
	float contador;
	float contadorenrango;
	bool continuar;
	float nuevafactura;
	continuar = true;
	acumulador = 0;
	contador = 0;
	contadorenrango = 0;
	while (continuar) {
		printf("Ingre una factura:\n");
		scanf("%f", &nuevafactura);
		acumulador = acumulador+nuevafactura;
		contador = contador+1;
		if (nuevafactura==0) {
			continuar = false;
		}
		if (nuevafactura>400 && nuevafactura<=700) {
			contadorenrango = contadorenrango+1;
		}
	}
	printf("El total de facturas es: %f\n", acumulador);
	printf("Total de facturas en el rango de $400 a $700(inclusive) es: %f\n", contadorenrango);
	return 0;
}

