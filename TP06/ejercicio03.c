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
void definircategorias(SIN_TIPO categoriavalor);
void mostrarcategorias(SIN_TIPO categoria1, SIN_TIPO categoria2, SIN_TIPO categoria3);

/* 3- En una empresa los empleados cobran un sueldo según la categoria, son 50 empleados y 3 categorías */
/* Categoría1 = $ 1500, Categoría2 = $ 2000, Categoría3 = $ 2500 */
/* Al sueldo se le suman $ 100 por cada año trabajado. Si se ingresa el nombre, categoría y antigüedad de cada empleado, calcular: */
/* - Cuántos empleados hay por categoría */
/* - Total de sueldos pagados por categoría */
/* - Sueldo promedio general */
/* - Sueldo máximo y a quién pertenece */
/* - Qué porcentual sobre el total de sueldos representa cada total de sueldos de las categorías */
void definircategorias(SIN_TIPO categoriavalor) {
	float categoriavalor;
	categoriavalor[0] = 1500;
	categoriavalor[1] = 2000;
	categoriavalor[2] = 2500;
}

void mostrarcategorias(SIN_TIPO categoria1, SIN_TIPO categoria2, SIN_TIPO categoria3) {
	SIN_TIPO categoria1;
	SIN_TIPO categoria2;
	SIN_TIPO categoria3;
	printf("  1: %f\n", categoria1);
	printf("  2: %f\n", categoria2);
	printf("  3: %f\n", categoria3);
}

int main() {
	int antiguedad;
	int antiguedadbono;
	int antiguedadempleado;
	int categoria;
	int categoria1contador;
	int categoria1totalsueldo;
	int categoria2contador;
	int categoria2totalsueldo;
	int categoria3contador;
	int categoria3totalsueldo;
	int categoriaempleado;
	float categoriavalor[3];
	SIN_TIPO definircategorias[ARREGLO_MAX];
	int empleados[ARREGLO_MAX][3];
	char empleadosnombres[MAX_STRLEN][ARREGLO_MAX];
	float iterador;
	SIN_TIPO mostrarcategorias[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	char nombreempleado[MAX_STRLEN];
	int sueldo;
	int sueldomaximo;
	char sueldomaximoempleado[MAX_STRLEN];
	int sueldopromediogeneralacumulador;
	int sueldototal;
	int totalempleados;
	totalempleados = 5;
	antiguedadbono = 100;
	sueldo = 1;
	categoria = 2;
	antiguedad = 3;
	/* sueldo, categoria, antiguedad */
	definircategorias[categoriavalor-1];
	for (iterador=1; iterador<=totalempleados; ++iterador) {
		printf("Ingrese el nombre del empleado: \n");
		scanf("%s", nombreempleado);
		empleadosnombres[iterador-1] = nombreempleado;
		printf("Ingrese la categoria del empleado: (1, 2, o 3)\n");
		scanf("%i", &categoriaempleado);
		empleados[iterador-1][categoria-1] = categoriaempleado;
		printf("Ingrese la antiguedad del empleado: (en años)\n");
		scanf("%i", &antiguedadempleado);
		empleados[iterador-1][antiguedad-1] = antiguedadempleado;
		empleados[iterador-1][sueldo-1] = categoriavalor[categoriaempleado-1]+(antiguedadempleado*antiguedadbono);
		printf("Empleado %s registrado correctamente!\n", nombreempleado);
	}
	for (iterador=1; iterador<=totalempleados; ++iterador) {
		switch (empleados[iterador-1][categoria-1]) {
		case 1:
			categoria1contador = categoria1contador+1;
			categoria1totalsueldo = categoria1totalsueldo+empleados[iterador-1][sueldo-1];
			break;
		case 2:
			categoria2contador = categoria2contador+1;
			categoria2totalsueldo = categoria2totalsueldo+empleados[iterador-1][sueldo-1];
			break;
		case 3:
			categoria3contador = categoria3contador+1;
			categoria3totalsueldo = categoria3totalsueldo+empleados[iterador-1][sueldo-1];
			break;
		default:
			printf("La categoria ingresada %f no es valida.\n", empleados[iterador-1][categoria-1]);
		}
		sueldopromediogeneralacumulador = sueldopromediogeneralacumulador+empleados[iterador-1][sueldo-1];
		if (sueldomaximo<empleados[iterador-1][sueldo-1]) {
			sueldomaximo = empleados[iterador-1][sueldo-1];
			sueldomaximoempleado = empleadosnombres[iterador-1];
		}
		sueldototal = sueldototal+empleados[iterador-1][sueldo-1];
	}
	printf("Empleados por categorias: \n");
	mostrarcategorias[categoria1contador-1][categoria2contador-1][categoria3contador-1];
	printf("Total de sueldos pagados por categoria: \n");
	mostrarcategorias[categoria1totalsueldo-1][categoria2totalsueldo-1][categoria3totalsueldo-1];
	printf("Sueldo promedio general: %f\n", sueldopromediogeneralacumulador/totalempleados);
	printf("El sueldo maximo es de $%i y pertence a %s\n", sueldomaximo, sueldomaximoempleado);
	printf("El porcentual sobre el total de sueldos es:\n");
	mostrarcategorias[(categoria1totalsueldo*100/sueldototal)-1][(categoria2totalsueldo*100/sueldototal)-1][(categoria3totalsueldo*100/sueldototal)-1];
	return 0;
}

