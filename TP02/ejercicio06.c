#include<stdio.h>

// 6. Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad

int main() {
	float edadPrimeraPersona;
	float alturaPrimeraPersona;
	float edadSegundaPersona;
	float alturaSegundaPersona;

	printf("Ingrese la edad de la primera persona: \n");
	scanf("%f", &edadPrimeraPersona);
	printf("Ahora ingrese la altura de esta misma: \n");
	scanf("%f", &alturaPrimeraPersona);
	printf("Ingrese la edad de la segunda persona: \n");
	scanf("%f", &edadSegundaPersona);
	printf("Ahora ingrese la altura de esta misma: \n");
	scanf("%f", &alturaSegundaPersona);

	if (edadPrimeraPersona >= edadSegundaPersona) {
		printf("La estatura de la persona de mayor edad es: %.2f\n", alturaPrimeraPersona);
	} else {
		printf("La estatura de la persona de mayor edad es: %.2f\n", alturaSegundaPersona);
	}
	return 0;
}
