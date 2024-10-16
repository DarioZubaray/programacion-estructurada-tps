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
void sumarvalores(SIN_TIPO valor1 por referencia, SIN_TIPO valor2);
void mostrarresultados(SIN_TIPO acumulador, SIN_TIPO contadormayoramil);

/* 2 . Ingresar facturas hasta nro de factura = 0,  */
/* sumar sus importes y cuales y cuantas superan los $1000. Imprimir los resultados */
void sumarvalores(SIN_TIPO valor1 por referencia, SIN_TIPO valor2) {
	float valor1;
	float valor2;
	valor1 = valor1+valor2;
}

void mostrarresultados(SIN_TIPO acumulador, SIN_TIPO contadormayoramil) {
	SIN_TIPO acumulador;
	SIN_TIPO contadormayoramil;
	printf("El total de facturas es: %f\n", acumulador);
	printf("Total de facturas mayores a $1000 es: %f\n", contadormayoramil);
}

int main() {
	float acumulador;
	int contador;
	int contadormayoramil;
	bool continuar;
	SIN_TIPO mostrarresultados[ARREGLO_MAX][ARREGLO_MAX];
	float nuevafactura;
	SIN_TIPO sumarvalores[ARREGLO_MAX][ARREGLO_MAX];
	continuar = true;
	acumulador = 0;
	contador = 0;
	contadormayoramil = 0;
	while (continuar) {
		printf("Ingrese una factura:\n");
		scanf("%f", nuevafactura);
		sumarvalores[acumulador-1][nuevafactura-1];
		sumarvalores[contador-1][0];
		if (nuevafactura==0) {
			continuar = false;
		}
		if (nuevafactura>=1000) {
			printf("Esta factura supera los $1000\n");
			sumarvalores[contadormayoramil-1][0];
		}
	}
	mostrarresultados[acumulador-1][contadormayoramil-1];
	return 0;
}

