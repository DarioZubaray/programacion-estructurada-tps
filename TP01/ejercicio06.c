/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>

/* 6. Ingresar los lados de un rect�ngulo y calcular su diagonal principal, superficie y per�metro. Imprima los resultados solicitados. */
int main() {
	float diagonalprincipal;
	float ladodos;
	float ladouno;
	float perimetro;
	float superficie;
	printf("Ingrese un lado de un rect�ngulo: \n");
	scanf("%f", &ladouno);
	printf("Ingrese otro lado del rect�ngulo: \n");
	scanf("%f", &ladodos);
	diagonalprincipal = sqrtf(ladouno*ladouno+ladodos*ladodos);
	printf("La diagonal principal del rect�ngulo es: %f\n", diagonalprincipal);
	superficie = ladouno*ladodos;
	printf("La superficie del rect�ngulo es: %f\n", superficie);
	perimetro = 2*(ladouno+ladodos);
	printf("El perimetro del rect�ngulo es: %f\n", perimetro);
	return 0;
}

