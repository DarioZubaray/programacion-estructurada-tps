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
SIN_TIPO pertencearango(SIN_TIPO minimo, SIN_TIPO maximo, SIN_TIPO nuevafactura);
void procesaringreso(SIN_TIPO acumulador por referencia, SIN_TIPO contador por referencia, SIN_TIPO contadorenrango por referencia);
void mostrarresultados(SIN_TIPO acumulador, SIN_TIPO contadorenrango);

/* 3 - Sobre elejercicio anterior indicar cu?ntas estan entre $ 400 y $ 700 inclusive. */
/* imprimir el resultado */
SIN_TIPO pertencearango(SIN_TIPO minimo, SIN_TIPO maximo, SIN_TIPO nuevafactura) {
	SIN_TIPO maximo;
	SIN_TIPO minimo;
	SIN_TIPO nuevafactura;
	float variableretorno;
	if (nuevafactura>minimo && nuevafactura<=maximo) {
		variableretorno = 1;
	} else {
		variableretorno = 0;
	}
	return variableretorno;
}

void procesaringreso(SIN_TIPO acumulador por referencia, SIN_TIPO contador por referencia, SIN_TIPO contadorenrango por referencia) {
	float acumulador;
	float contador;
	SIN_TIPO contadorenrango;
	int nuevafactura;
	SIN_TIPO pertencearango[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	acumulador = acumulador+nuevafactura;
	contador = contador+1;
	contadorenrango = contadorenrango+pertencearango[399][699][nuevafactura-1];
}

void mostrarresultados(SIN_TIPO acumulador, SIN_TIPO contadorenrango) {
	SIN_TIPO acumulador;
	SIN_TIPO contadorenrango;
	printf("El total de facturas es: %f\n", acumulador);
	printf("Total de facturas en el rango de $400 a $700(inclusive) es: %f\n", contadorenrango);
}

int main() {
	int acumulador;
	int contador;
	int contadorenrango;
	bool continuar;
	SIN_TIPO mostrarresultados[ARREGLO_MAX][ARREGLO_MAX];
	float nuevafactura;
	SIN_TIPO procesaringreso[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	acumulador = 0;
	contador = 0;
	contadorenrango = 0;
	continuar = true;
	while (continuar) {
		printf("Ingrese una factura: \n");
		scanf("%f", nuevafactura);
		if (nuevafactura==0) {
			continuar = false;
		} else {
			procesaringreso[acumulador-1][contador-1][contadorenrango-1];
		}
	}
	mostrarresultados[acumulador-1][contadorenrango-1];
	return 0;
}

