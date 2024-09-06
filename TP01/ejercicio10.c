/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* 10. Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $500 por mes  */
/* más un plus del 10 MOD  del precio sobre cada vehículo vendido y un valor constante de 50 pesos por cada uno de ellos,  */
/* se ingresa el valor del vehículo y cuantos vehículos de ese tipo vendió, calcular su sueldo e imprimirlo. */
int main() {
	float cantidadvehiculo;
	float plusporcantidad;
	float plusporvalor;
	float sueldo;
	float sueldobase;
	float valorvehiculo;
	printf("Ingrese el valor del vehículo:\n");
	scanf("%f", &valorvehiculo);
	printf("Ingrese cantidad de vehículos vendidos de este tipo:\n");
	scanf("%f", &cantidadvehiculo);
	sueldobase = 500;
	plusporvalor = 0.1*(cantidadvehiculo*valorvehiculo);
	plusporcantidad = 50*cantidadvehiculo;
	sueldo = sueldobase+plusporvalor+plusporcantidad;
	printf("El sueldo final es de $%f\n", sueldo);
	printf("-------------------------------\n");
	printf("Sueldo base de $%f\n", sueldobase);
	printf("Plus por cantidad: $%f\n", plusporcantidad);
	printf("Plus porcentual del $%f\n", plusporvalor);
	return 0;
}

