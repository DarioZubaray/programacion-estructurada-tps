/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* 7. Ingresar el valor de la hora y el tiempo trabajado por un empleado,  */
/* calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs  */
/* y si trabajo más de 150 hs le dan otros $ 100 adicionales. Imprimir el sueldo */
int main() {
	float sueldo;
	float tiempotrabajado;
	float valorhora;
	printf("Ingrese el valor de la hora:\n");
	scanf("%f", &valorhora);
	printf("Ingrese el tiempo trabajado por un operario:\n");
	scanf("%f", &tiempotrabajado);
	sueldo = valorhora*tiempotrabajado;
	if (tiempotrabajado>50) {
		sueldo = sueldo+100;
	}
	if (tiempotrabajado>150) {
		sueldo = sueldo+100;
	}
	printf("El sueldo es: $%f\n", sueldo);
	return 0;
}

