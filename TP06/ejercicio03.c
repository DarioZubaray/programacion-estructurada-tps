#include<stdio.h>
#include <string.h>

/* 3- En una empresa los empleados cobran un sueldo segun la categoria, son 50 empleados y 3 categorias */
/* Categoria1 = $ 1500, Categoria2 = $ 2000, Categoria3 = $ 2500 */
/* Al sueldo se le suman $ 100 por cada año trabajado. Si se ingresa el nombre, categoria y antiguedad de cada empleado, calcular: */
/* - Cuantos empleados hay por categoria */
/* - Total de sueldos pagados por categoria */
/* - Sueldo promedio general */
/* - Sueldo maximo y a quien pertenece */
/* - Que porcentual sobre el total de sueldos representa cada total de sueldos de las categorias */

void definirCategorias(float categorias[3][3], int atributo) {
	categorias[0][atributo] = 1500;
	categorias[1][atributo] = 2000;
	categorias[2][atributo] = 2500;
}

void mostrarEjemploTotalCategorias(int totalCategorias) {
	printf("Ej: (");
	for (int i = 0; i < totalCategorias; i++) {
		printf("%i, ", i);
	}
	printf(")\n");
}

void mostrarCategorias(float categorias[3][3], int totalCategorias, int atributoAMostrar) {
	for (int i = 0; i < totalCategorias; i++) {
		printf("..%i: %.2f\n", i, categorias[i][atributoAMostrar]);
	}
}

void mostrarPorcentualCategorias(float categorias[3][3], int totalCategorias, int ACUMULADOR_CATEGORIA, int sueldoTotal) {
	float categoriaSueldoTotal;
	for (int i = 0; i < totalCategorias; i++) {
		categoriaSueldoTotal = categorias[i][ACUMULADOR_CATEGORIA] * 100 / sueldoTotal;
		printf("..%i: %.2f%%\n", i, categoriaSueldoTotal);
	}
}

int main() {
	int totalEmpleados = 5, totalCategorias = 3, antiguedadBono = 100;
	char empleadosNombres[totalEmpleados][50];

	int SUELDO_EMPLEADO = 1, CATEGORIA_EMPLEADO = 2, ANTIGUEDAD_EMPLEADO = 3;
	int empleados[totalEmpleados][3];

	int VALOR_CATEGORIA = 1, CONTADOR_CATEGORIA = 2, ACUMULADOR_CATEGORIA = 3;
	float categorias[totalCategorias][3];
	definirCategorias(categorias, VALOR_CATEGORIA);

	char nombreEmpleado[50];
	int categoriaEmpleado;
	int antiguedadEmpleado;
	
	for (int i = 0; i < totalEmpleados; ++i) {
		printf("Ingrese el nombre del empleado: \n");
		scanf("%s", nombreEmpleado);
		strcpy(empleadosNombres[i], nombreEmpleado);

		printf("Ingrese la categoria del empleado: ");
		mostrarEjemploTotalCategorias(totalCategorias);
		scanf("%i", &categoriaEmpleado);
		empleados[i][CATEGORIA_EMPLEADO] = categoriaEmpleado;

		printf("Ingrese la antiguedad del empleado: (en años)\n");
		scanf("%i", &antiguedadEmpleado);
		empleados[i][ANTIGUEDAD_EMPLEADO] = antiguedadEmpleado;
		empleados[i][SUELDO_EMPLEADO] = categorias[categoriaEmpleado][VALOR_CATEGORIA] + (antiguedadEmpleado * antiguedadBono);
		printf("Empleado %s registrado correctamente!\n", nombreEmpleado);
	}

	int categoriaActual;
	int sueldoPromedioGeneralAcumulador = 0;
	int sueldoMaximo = 0;
	char sueldoMaximoEmpleado[50];
	int sueldoTotal = 0;

	for (int i = 0; i < totalEmpleados; i++) {
		categoriaActual = empleados[i][CATEGORIA_EMPLEADO];
		categorias[categoriaActual][CONTADOR_CATEGORIA] += 1;
		categorias[categoriaActual][ACUMULADOR_CATEGORIA] += empleados[i][SUELDO_EMPLEADO];

		sueldoPromedioGeneralAcumulador += empleados[i][SUELDO_EMPLEADO];
		if (sueldoMaximo < empleados[i][SUELDO_EMPLEADO]) {
			sueldoMaximo = empleados[i][SUELDO_EMPLEADO];
			strcpy(sueldoMaximoEmpleado, empleadosNombres[i]);
		}
		sueldoTotal += empleados[i][SUELDO_EMPLEADO];
	}

	printf("==============================================\n");
	int antiguedad;
	int categoria;
	printf("Empleados por categorias: \n");
	mostrarCategorias(categorias, totalCategorias, CONTADOR_CATEGORIA);

	printf("Total de sueldos pagados por categoria: \n");
	mostrarCategorias(categorias, totalCategorias, ACUMULADOR_CATEGORIA);

	printf("Sueldo promedio general: %.2f\n", sueldoPromedioGeneralAcumulador*1.0/totalEmpleados);
	printf("El sueldo maximo es de $%i y pertence a %s\n", sueldoMaximo, sueldoMaximoEmpleado);

	printf("El porcentual sobre el total de sueldos es:\n");
	mostrarPorcentualCategorias(categorias, totalCategorias, ACUMULADOR_CATEGORIA, sueldoTotal);
	return 0;
}
