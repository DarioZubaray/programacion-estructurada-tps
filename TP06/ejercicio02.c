#include<stdio.h>

/* 2- Ingresar 10 sueldos y edades de una empresa y calcular: */
/* - Sueldo promedio */
/* - Sueldo promedio de los empleados que tienen entre 23 y 40 años */
/* - Edad promedio */
/* - Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000. */
/* - Cantidad de empleados con edades menor a la edad promedio */

void preguntarSueldosEdades(float sueldos[], int edades[], int largoVector) {
	int ingresoEdad;
	float ingresoSueldo;
	for (int i = 0; i < largoVector; i++) {
		printf("Ingrese un valor numerico para sueldo {empl n°%i} :\n", i+1);
		scanf("%f", &ingresoSueldo);
		sueldos[i] = ingresoSueldo;
		printf("Ingrese la edad para {empl n°%i} :\n", i+1);
		scanf("%i", &ingresoEdad);
		edades[i] = ingresoEdad;
	}
}

void obtenerPromedio(float *sueldoPromedio, float *edadPromedio, float *jovenes23a40Promedio, int *mayores30ConSueldoMenorMil, float sueldos[], int edades[], int largoVector) {
	int jovenes23a40;
	float jovenes23A40Acumulador;
	int edadAcumulador;
	float sueldoAcumulador;

	for (int i = 0; i <= largoVector; i++) {
		sueldoAcumulador += sueldos[i];
		edadAcumulador += edades[i];

		if (edades[i] > 22 && edades[i] < 41) {
			jovenes23a40++;
			jovenes23A40Acumulador += sueldos[i];
		}

		if (edades[i] > 29 && sueldos[i] < 1000) {
			*mayores30ConSueldoMenorMil++;
		}
	}
	*sueldoPromedio = sueldoAcumulador/largoVector;
	if (jovenes23a40 > 0) {
		*jovenes23a40Promedio = jovenes23A40Acumulador/jovenes23a40;
	}
	*edadPromedio = edadAcumulador/largoVector;
}

int main() {
	int largoVector = 10;
	int edadAcumulador, jovenes23A40Acumulador, sueldoAcumulador;
	float sueldos[largoVector];
	int edades[largoVector];

	preguntarSueldosEdades(sueldos, edades, largoVector);

	float sueldoPromedio, jovenes23a40Promedio, edadPromedio;
	int mayores30ConSueldoMenorMil, menoresAMedia;
	obtenerPromedio(&sueldoPromedio, &edadPromedio, &jovenes23a40Promedio, &mayores30ConSueldoMenorMil, sueldos, edades, largoVector);
	printf("==============================================\n");
	printf("El sueldo promedio es de: %.2f\n", sueldoPromedio);
	printf("Sueldo promedio de los empleados que tienen entre 23 y 40 años: %.2f\n", jovenes23a40Promedio);
	printf("La edad promedio es de: %.2f\n", edadPromedio);
	printf("Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000: %i\n", mayores30ConSueldoMenorMil);

	for (int i = 0; i <= largoVector; i++) {
		if (edades[i] < edadPromedio) {
			menoresAMedia++;
		}
	}
	printf("Cantidad de empleados con edades menor a la edad promedio(%i): %i\n", edadPromedio, menoresAMedia);
	return 0;
}
