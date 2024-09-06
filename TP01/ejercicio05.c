#include<stdio.h>
#include<math.h>

// 5. Ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el perímetro, la superficie. Imprima los resultados solicitados.

int main() {
	float catetoUno;
	float catetoDos;

	printf("Ingrese un primer cateto del triángulo: \n");
	scanf("%f", &catetoUno);
	printf("Ingrese un segundo cateto del triángulo: \n");
	scanf("%f", &catetoDos);

	float hipotenusa = sqrtf(catetoUno*catetoUno + catetoDos*catetoDos);
	printf("La hipotenusa del triángulo es: %f\n", hipotenusa);

	float perimetro = hipotenusa + catetoUno + catetoDos;
	printf("El perímetro del triángulo es: %f\n", perimetro);

	float semip = perimetro/2;
	float area = sqrtf(semip* (semip - catetoUno)*(semip - catetoDos)*(semip - hipotenusa));
	printf("El area del triángulo es bajo la fórmula de Herón es: %f\n", area);
	return 0;
}
