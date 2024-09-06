#include<stdio.h>

/* 10. Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $500 por mes
   más un plus del 10% del precio sobre cada vehículo vendido y un valor constante de 50 pesos por cada uno de ellos,
   se ingresa el valor del vehículo y cuantos vehículos de ese tipo vendió, calcular su sueldo e imprimirlo. */

int main() {
	const int sueldoBase = 500;
	const float plusPorcentual = 0.1;
	const float plusConstante = 50;
	float valorVehiculo;
	float cantidadVehiculo;

	printf("Ingrese el valor del vehículo:\n");
	scanf("%f", &valorVehiculo);
	printf("Ingrese cantidad de vehículos vendidos de este tipo:\n");
	scanf("%f", &cantidadVehiculo);

	float plusPorValor = plusPorcentual * (cantidadVehiculo * valorVehiculo);
	float plusPorCantidad = plusConstante * cantidadVehiculo;
	float sueldo = sueldoBase+ plusPorValor + plusPorCantidad;

	printf("El sueldo final es de $%.2f\n", sueldo);
	printf("-------------------------------\n");
	printf("Sueldo base de $%i\n", sueldoBase);
	printf("Plus por cantidad: $%.2f\n", plusPorCantidad);
	printf("Plus porcentual del $%.2f\n", plusPorValor);
	return 0;
}
