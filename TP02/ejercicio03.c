#include<stdio.h>

// 3. Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es.

int main() {
	float ladoUno;
	float ladoDos;
	float ladoTres;

	printf("Ingrese un primer lado del triángulo: \n");
	scanf("%f", &ladoUno);
	printf("Ingrese un segundo lado del triángulo: \n");
	scanf("%f", &ladoDos);
	printf("Ingrese un tercer lado del triángulo: \n");
	scanf("%f", &ladoTres);

	if (ladoUno ==ladoDos && ladoDos==ladoTres) {
		printf("Es un triángulo con todos sus lados iguales. Equilátero\n");
	} else {
		if ((ladoUno ==ladoDos && ladoDos != ladoTres) || (ladoUno != ladoDos && ladoUno == ladoTres)) {
			printf("Es un triángulo con algunos de sus lados iguales. Isóceles\n");
		} else {
			printf("Es un triángulos con todos sus lados desiguales: Escaleno\n");
		}
	}
	return 0;
}
