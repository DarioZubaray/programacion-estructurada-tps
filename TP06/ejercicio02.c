/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

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
void preguntarsueldosedades(SIN_TIPO sueldos, SIN_TIPO edades, SIN_TIPO largovector);
void obtenerpromedio(SIN_TIPO sueldopromedio por referencia, SIN_TIPO edadpromedio por referencia, SIN_TIPO jovenes23a40promedio por referencia, SIN_TIPO mayores30consueldomenormil por referencia, SIN_TIPO sueldos, SIN_TIPO edades, SIN_TIPO largovector);

/* 2- Ingresar 10 sueldos y edades de una empresa y calcular: */
/* - Sueldo promedio */
/* - Sueldo promedio de los empleados que tienen entre 23 y 40 años */
/* - Edad promedio */
/* - Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000. */
/* - Cantidad de empleados con edades menor a la edad promedio */
void preguntarsueldosedades(SIN_TIPO sueldos, SIN_TIPO edades, SIN_TIPO largovector) {
	SIN_TIPO edades;
	SIN_TIPO ingresoedad;
	SIN_TIPO ingresosueldo;
	float iterador;
	float largovector;
	SIN_TIPO sueldos;
	for (iterador=1; iterador<=largovector; ++iterador) {
		printf("Ingrese un valor numerico para sueldo {empl n°%f} :\n", iterador);
		scanf("%f", ingresosueldo);
		sueldos[iterador-1] = ingresosueldo;
		printf("Ingrese la edad para {empl n°%f} :\n", iterador);
		scanf("%f", ingresoedad);
		edades[iterador-1] = ingresoedad;
	}
}

void obtenerpromedio(SIN_TIPO sueldopromedio por referencia, SIN_TIPO edadpromedio por referencia, SIN_TIPO jovenes23a40promedio por referencia, SIN_TIPO mayores30consueldomenormil por referencia, SIN_TIPO sueldos, SIN_TIPO edades, SIN_TIPO largovector) {
	int edadacumulador;
	float edades;
	float edadpromedio;
	float iterador;
	int jovenes23a40;
	int jovenes23a40acumulador;
	float jovenes23a40promedio;
	float largovector;
	float mayores30consueldomenormil;
	int sueldoacumulador;
	float sueldopromedio;
	float sueldos;
	for (iterador=1; iterador<=largovector; ++iterador) {
		sueldoacumulador = sueldoacumulador+sueldos[iterador-1];
		edadacumulador = edadacumulador+edades[iterador-1];
		if (edades[iterador-1]>22 && edades[iterador-1]<41) {
			jovenes23a40 = jovenes23a40+1;
			jovenes23a40acumulador = jovenes23a40acumulador+sueldos[iterador-1];
		}
		if (edades[iterador-1]>29 && sueldos[iterador-1]<1000) {
			mayores30consueldomenormil = mayores30consueldomenormil+1;
		}
	}
	sueldopromedio = sueldoacumulador/largovector;
	if (jovenes23a40>0) {
		jovenes23a40promedio = jovenes23a40acumulador/jovenes23a40;
	}
	edadpromedio = edadacumulador/largovector;
}

int main() {
	int edadacumulador;
	float edades[ARREGLO_MAX];
	float edadpromedio;
	float iterador;
	int jovenes23a40acumulador;
	float jovenes23a40promedio;
	int largovector;
	int mayores30consueldomenormil;
	int menoresamedia;
	SIN_TIPO obtenerpromedio[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO preguntarsueldosedades[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	int sueldoacumulador;
	float sueldopromedio;
	SIN_TIPO sueldos[ARREGLO_MAX];
	largovector = 10;
	preguntarsueldosedades[sueldos-1][edades-1][largovector-1];
	obtenerpromedio[sueldopromedio-1][edadpromedio-1][jovenes23a40promedio-1][mayores30consueldomenormil-1][sueldos-1][edades-1][largovector-1];
	printf("El sueldo promedio es de: %f\n", sueldopromedio);
	printf("Sueldo promedio de los empleados que tienen entre 23 y 40 años: %f\n", jovenes23a40promedio);
	printf("La edad promedio es de: %f\n", edadpromedio);
	printf("Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000: %i\n", mayores30consueldomenormil);
	for (iterador=1; iterador<=largovector; ++iterador) {
		if (edades[iterador-1]<edadpromedio) {
			menoresamedia = menoresamedia+1;
		}
	}
	printf("Cantidad de empleados con edades menor a la edad promedio: %i\n", menoresamedia);
	return 0;
}

