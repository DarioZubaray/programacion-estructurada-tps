/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>

/* 5. Ingresar dos lados de un tri�ngulo rect�ngulo y calcular, la hipotenusa, el per�metro, la superficie. Imprima los resultados solicitados. */
int main() {
	float area;
	float catetodos;
	float catetouno;
	float hipotenusa;
	float perimetro;
	float semip;
	printf("Ingrese un primer cateto del tri�ngulo: \n");
	scanf("%f", &catetouno);
	printf("Ingrese un segundo cateto del tri�ngulo: \n");
	scanf("%f", &catetodos);
	hipotenusa = sqrtf(catetouno*catetouno+catetodos*catetodos);
	printf("La hipotenusa del tri�ngulo es: %f\n", hipotenusa);
	perimetro = hipotenusa+catetouno+catetodos;
	printf("El per�metro del tri�ngulo es: %f\n", perimetro);
	semip = perimetro/2;
	area = sqrtf(semip*(semip-catetouno)*(semip-catetodos)*(semip-hipotenusa));
	printf("El area del tri�ngulo es bajo la f�rmula de Her�n es: %f\n", area);
	return 0;
}

