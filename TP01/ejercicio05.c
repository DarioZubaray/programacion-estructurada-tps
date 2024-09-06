/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>

/* 5. Ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el perímetro, la superficie. Imprima los resultados solicitados. */
int main() {
	float area;
	float catetodos;
	float catetouno;
	float hipotenusa;
	float perimetro;
	float semip;
	printf("Ingrese un primer cateto del triángulo: \n");
	scanf("%f", &catetouno);
	printf("Ingrese un segundo cateto del triángulo: \n");
	scanf("%f", &catetodos);
	hipotenusa = sqrtf(catetouno*catetouno+catetodos*catetodos);
	printf("La hipotenusa del triángulo es: %f\n", hipotenusa);
	perimetro = hipotenusa+catetouno+catetodos;
	printf("El perímetro del triángulo es: %f\n", perimetro);
	semip = perimetro/2;
	area = sqrtf(semip*(semip-catetouno)*(semip-catetodos)*(semip-hipotenusa));
	printf("El area del triángulo es bajo la fórmula de Herón es: %f\n", area);
	return 0;
}

