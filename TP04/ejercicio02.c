/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>

/* 2 . Ingresar facturas hasta nro de factura = 0,  */
/* sumar sus importes y cúales y cuantas superan los $1000. Imprimir los resultados */
int main() {
	float acumulador;
	float contador;
	float contadormayoramil;
	bool continuar;
	float nuevafactura;
	continuar = true;
	acumulador = 0;
	contador = 0;
	contadormayoramil = 0;
	while (continuar) {
		printf("Ingre una factura:\n");
		scanf("%f", &nuevafactura);
		acumulador = acumulador+nuevafactura;
		contador = contador+1;
		if (nuevafactura==0) {
			continuar = false;
		}
		if (nuevafactura>=1000) {
			printf("Esta factura supera los $1000\n");
			contadormayoramil = contadormayoramil+1;
		}
	}
	printf("El total de facturas es: %f\n", acumulador);
	printf("Total de facturas mayores a $1000 es: %f\n", contadormayoramil);
	return 0;
}

