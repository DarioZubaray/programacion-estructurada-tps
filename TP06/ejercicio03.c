/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* En C no se puede dimensionar un arreglo estático con una dimensión no constante.
   PSeInt sobredimensionará el arreglo utilizando un valor simbólico ARREGLO_MAX.
   Sería posible crear un arreglo dinámicamente con los operadores new y delete, pero
   este mecanismo aún no está soportado en las traducciones automáticas de PSeInt. */
#define ARREGLO_MAX 100

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

// Declaraciones adelantadas de las funciones
void definircategorias(SIN_TIPO categorias, SIN_TIPO atributo);
void mostrarejemplototalcategorias(SIN_TIPO totalcategorias);
void mostrarcategorias(SIN_TIPO categorias, SIN_TIPO totalcategorias, SIN_TIPO atributoamostrar);
void mostrarporcentualcategorias(SIN_TIPO categorias, SIN_TIPO totalcategorias, SIN_TIPO acumulador_categoria, SIN_TIPO sueldototal);

/* 3- En una empresa los empleados cobran un sueldo según la categoria, son 50 empleados y 3 categorías */
/* Categoría1 = $ 1500, Categoría2 = $ 2000, Categoría3 = $ 2500 */
/* Al sueldo se le suman $ 100 por cada año trabajado. Si se ingresa el nombre, categoría y antigüedad de cada empleado, calcular: */
/* - Cuántos empleados hay por categoría */
/* - Total de sueldos pagados por categoría */
/* - Sueldo promedio general */
/* - Sueldo máximo y a quién pertenece */
/* - Qué porcentual sobre el total de sueldos representa cada total de sueldos de las categorías */
void definircategorias(SIN_TIPO categorias, SIN_TIPO atributo) {
	float categorias;
	categorias[0][atributo-1] = 1500;
	categorias[1][atributo-1] = 2000;
	categorias[2][atributo-1] = 2500;
}

void mostrarejemplototalcategorias(SIN_TIPO totalcategorias) {
	float iterador;
	float totalcategorias;
	printf("Ej: (");
	for (iterador=1; iterador<=totalcategorias; ++iterador) {
		printf("%f, ", iterador);
	}
	printf(")\n");
}

void mostrarcategorias(SIN_TIPO categorias, SIN_TIPO totalcategorias, SIN_TIPO atributoamostrar) {
	SIN_TIPO categorias;
	float iterador;
	float totalcategorias;
	for (iterador=1; iterador<=totalcategorias; ++iterador) {
		printf("..%f: %f\n", iterador, categorias[iterador-1][atributoamostrar-1]);
	}
}

void mostrarporcentualcategorias(SIN_TIPO categorias, SIN_TIPO totalcategorias, SIN_TIPO acumulador_categoria, SIN_TIPO sueldototal) {
	float categorias;
	float categoriasueldototal;
	float iterador;
	float sueldototal;
	float totalcategorias;
	for (iterador=1; iterador<=totalcategorias; ++iterador) {
		categoriasueldototal = categorias[iterador-1][acumulador_categoria-1]*100/sueldototal;
		printf("..%f: %f\n", iterador, categoriasueldototal);
	}
}

int main() {
	int acumulador_categoria;
	int antiguedad;
	int antiguedadbono;
	int antiguedadempleado;
	int categoria;
	int categoriaactual;
	int categoriaempleado;
	float categorias[ARREGLO_MAX][3];
	int contador_categoria;
	SIN_TIPO definircategorias[ARREGLO_MAX][ARREGLO_MAX];
	int empleados[ARREGLO_MAX][3];
	char empleadosnombres[MAX_STRLEN][ARREGLO_MAX];
	float iterador;
	SIN_TIPO mostrarcategorias[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO mostrarejemplototalcategorias[ARREGLO_MAX];
	SIN_TIPO mostrarporcentualcategorias[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	char nombreempleado[MAX_STRLEN];
	int sueldo;
	int sueldomaximo;
	char sueldomaximoempleado[MAX_STRLEN];
	int sueldopromediogeneralacumulador;
	int sueldototal;
	int totalcategorias;
	int totalempleados;
	int valor_categoria;
	totalempleados = 5;
	totalcategorias = 3;
	antiguedadbono = 100;
	sueldo = 1;
	categoria = 2;
	antiguedad = 3;
	valor_categoria = 1;
	contador_categoria = 2;
	acumulador_categoria = 3;
	/* sueldo, categoria, antiguedad */
	definircategorias[categorias-1][valor_categoria-1];
	/* valor, contador, acumulador */
	for (iterador=1; iterador<=totalempleados; ++iterador) {
		printf("Ingrese el nombre del empleado: \n");
		scanf("%s", nombreempleado);
		empleadosnombres[iterador-1] = nombreempleado;
		printf("Ingrese la categoria del empleado: ");
		mostrarejemplototalcategorias[totalcategorias-1];
		scanf("%i", &categoriaempleado);
		empleados[iterador-1][categoria-1] = categoriaempleado;
		printf("Ingrese la antiguedad del empleado: (en años)\n");
		scanf("%i", &antiguedadempleado);
		empleados[iterador-1][antiguedad-1] = antiguedadempleado;
		empleados[iterador-1][sueldo-1] = categorias[categoriaempleado-1][valor_categoria-1]+(antiguedadempleado*antiguedadbono);
		printf("Empleado %s registrado correctamente!\n", nombreempleado);
	}
	for (iterador=1; iterador<=totalempleados; ++iterador) {
		categoriaactual = empleados[iterador-1][categoria-1];
		categorias[categoriaactual-1][contador_categoria-1] = categorias[categoriaactual-1][contador_categoria-1]+1;
		categorias[categoriaactual-1][acumulador_categoria-1] = categorias[categoriaactual-1][acumulador_categoria-1]+empleados[iterador-1][sueldo-1];
		sueldopromediogeneralacumulador = sueldopromediogeneralacumulador+empleados[iterador-1][sueldo-1];
		if (sueldomaximo<empleados[iterador-1][sueldo-1]) {
			sueldomaximo = empleados[iterador-1][sueldo-1];
			sueldomaximoempleado = empleadosnombres[iterador-1];
		}
		sueldototal = sueldototal+empleados[iterador-1][sueldo-1];
	}
	printf("Empleados por categorias: \n");
	mostrarcategorias[categorias-1][totalcategorias-1][contador_categoria-1];
	printf("Total de sueldos pagados por categoria: \n");
	mostrarcategorias[categorias-1][totalcategorias-1][acumulador_categoria-1];
	printf("Sueldo promedio general: %f\n", sueldopromediogeneralacumulador/totalempleados);
	printf("El sueldo maximo es de $%i y pertence a %s\n", sueldomaximo, sueldomaximoempleado);
	printf("El porcentual sobre el total de sueldos es:\n");
	mostrarporcentualcategorias[categorias-1][totalcategorias-1][acumulador_categoria-1][sueldototal-1];
	return 0;
}

