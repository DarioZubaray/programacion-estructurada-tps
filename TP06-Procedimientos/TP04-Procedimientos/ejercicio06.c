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
void maximoregistro(SIN_TIPO nuevatemperatura, SIN_TIPO mayortemperatura por referencia);
void minimoregistro(SIN_TIPO nuevatemperatura, SIN_TIPO menortemperatura por referencia);
void mostrarresultados(SIN_TIPO mayortemperatura, SIN_TIPO menortemperatura);

/* 6 - Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor */
void maximoregistro(SIN_TIPO nuevatemperatura, SIN_TIPO mayortemperatura por referencia) {
	SIN_TIPO mayortemperatura;
	SIN_TIPO nuevatemperatura;
	if (nuevatemperatura>mayortemperatura) {
		mayortemperatura = nuevatemperatura;
	}
}

void minimoregistro(SIN_TIPO nuevatemperatura, SIN_TIPO menortemperatura por referencia) {
	SIN_TIPO menortemperatura;
	SIN_TIPO nuevatemperatura;
	if (nuevatemperatura<menortemperatura) {
		menortemperatura = nuevatemperatura;
	}
}

void mostrarresultados(SIN_TIPO mayortemperatura, SIN_TIPO menortemperatura) {
	SIN_TIPO mayortemperatura;
	SIN_TIPO menortemperatura;
	printf("La mayor temperatura registrada es: %f\n", mayortemperatura);
	printf("La menor temperatura es: %f\n", menortemperatura);
}

int main() {
	bool continuar;
	SIN_TIPO maximoregistro[ARREGLO_MAX][ARREGLO_MAX];
	int mayortemperatura;
	int menortemperatura;
	SIN_TIPO minimoregistro[ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO mostrarresultados[ARREGLO_MAX][ARREGLO_MAX];
	float nuevatemperatura;
	continuar = true;
	mayortemperatura = 0;
	menortemperatura = 0;
	while (continuar) {
		printf("Ingrese una temperatura: \n");
		scanf("%f", nuevatemperatura);
		if ((nuevatemperatura)==(1000)) {
			continuar = false;
		} else {
			maximoregistro[nuevatemperatura-1][mayortemperatura-1];
			minimoregistro[nuevatemperatura-1][menortemperatura-1];
		}
	}
	mostrarresultados[mayortemperatura-1][menortemperatura-1];
	return 0;
}

