#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<stdbool.h>

void cargarAnalistas(int analista[10][15][1], int totalAnalistas, int totalProyectos, int CANTIDAD_HORAS) {
	int numeroAleatorio;
	for (int i = 0; i < totalAnalistas; i++) {
		for (int j = 0; j < totalProyectos; j++) {
			numeroAleatorio = (rand()%24);
			if (numeroAleatorio > 15) {
				analista[i][j][CANTIDAD_HORAS] = (rand()%36);
			} else {
				analista[i][j][CANTIDAD_HORAS] = 0;
			}
		}
	}
}

void cargarAnalistasSueldos(int analistaSueldo[10][2], int totalAnalistas, int SUELDO, int VALOR_HORAS) {
	for (int i = 0; i < totalAnalistas; i++) {
		analistaSueldo[i][SUELDO] = (rand()%50)*100;
		analistaSueldo[i][VALOR_HORAS] = (rand()%50);
	}
}

void cargarAnalistasNombres(char *analistaNombres[], int totalAnalistas) {
	analistaNombres[0] = "Santiago";
	analistaNombres[1] = "Mateo";
	analistaNombres[2] = "Sebastian";
	analistaNombres[3] = "Valentina";
	analistaNombres[4] = "Maria";
	analistaNombres[5] = "Sofia";
	analistaNombres[6] = "Lucas";
	analistaNombres[7] = "Alejandro";
	analistaNombres[8] = "Gabriela";
	analistaNombres[totalAnalistas-1] = "Daniel";
}

void mostrarhorasTrabajadasPorAnalista(int analista[10][15][1], int totalAnalistas, int CANTIDAD_HORAS) {
	printf("Cantidad de hs. trabajadas en total por cada analista: \n");
	int horasTrabajadas;
	for (int i = 0; i < totalAnalistas; i++) {
		horasTrabajadas = 0;
		for (int j = 0; j < totalAnalistas; j++) {
			horasTrabajadas += analista[i][j][CANTIDAD_HORAS];
		}
		printf("....El analista {%i} trabajo un total de (%i) hs.\n", i+1, horasTrabajadas);
	}
}

void mostrarHorasPorAnalistaPorProyecto(int analista[10][15][1], int totalAnalistas, int totalProyectos, int CANTIDAD_HORAS) {
	printf("Total de horas trabajadas por cada analista en cada proyecto.\n");
	for (int j = 0; j < totalProyectos; j++) {
		printf("En el proyecto [%i] trabajaron: \n", j+1);
		for (int i = 0; i < totalAnalistas; i++) {
			if (analista[i][j][CANTIDAD_HORAS] > 0) {
				printf("....El analista {%i} con un total de (%i) hs.\n", i+1, analista[i][j][CANTIDAD_HORAS]);
			}
		}
	}
}

void mostrarHorasTotalPorProyecto(int analista[10][15][1], int totalAnalistas, int totalProyectos, int CANTIDAD_HORAS) {
	printf("Total de hs trabajadas sobre cada proyecto: \n");
	int horasTotalProyecto;
	for (int j = 0; j < totalProyectos; j++) {
		horasTotalProyecto = 0;
		for (int i = 0; i < totalAnalistas; i++) {
			if (analista[i][j][CANTIDAD_HORAS] > 0) {
				horasTotalProyecto += analista[i][j][CANTIDAD_HORAS];
			}
		}
		printf("....En el proyecto [%i] trabajaron un total de (%i) hs.\n", j+1, horasTotalProyecto);
	}
}

void mostrarHorasTotalEnProyecto(int numeroProyecto, int analista[10][15][1], int totalAnalistas, int totalProyectos, int CANTIDAD_HORAS) {
	printf("Mostrar horas total en el proyecto: \n");
	int analistaNumero = 0, menosHorasAnalista = 0;
	bool conHorasTrabajadas, esasHorasSonMenoresAlMinimo;

	for (int i = 0; i < totalAnalistas; i++) {
		conHorasTrabajadas = analista[i][numeroProyecto][CANTIDAD_HORAS] > 0;
		esasHorasSonMenoresAlMinimo = menosHorasAnalista == 0 || analista[i][numeroProyecto][CANTIDAD_HORAS] < menosHorasAnalista;

		if (conHorasTrabajadas && esasHorasSonMenoresAlMinimo) {
			analistaNumero = i;
			menosHorasAnalista = analista[i][numeroProyecto][CANTIDAD_HORAS];
		}
	}

	if (analistaNumero != 0) {
		printf("El analista {%i} trabajo menos en el proyecto [%i].\n", analistaNumero+1, numeroProyecto+1);
	} else {
		printf("Nadie trabajo en este proyecto.\n");
	}
}

void mostrarSueldoPorAnalista(int analistaSueldo[10][2], char *analistaNombres[], int totalAnalistas, int SUELDO) {
	printf("Sueldo de cada analista: \n");
	for (int i = 0; i < totalAnalistas; i++) {
		printf("....El analista {%i} de nombre %s tiene un sueldo de $%i.-\n", i+1, analistaNombres[i], analistaSueldo[i][SUELDO]);
	}
}

void mostrarAnalistaConmayorCobro(char *analistaNombres[], int analistaSueldo[10][2], int totalAnalistas, int SUELDO) {
    printf("Analista con mayor cobro: \n");
	int analistaNumero = 0;
	int mayorCobro = 0;
	char *nombreAnalista = "";
	for (int i = 0; i < totalAnalistas; i++) {
		if (analistaSueldo[i][SUELDO] > mayorCobro) {
			mayorCobro = analistaSueldo[i][SUELDO];
			analistaNumero = i;
			nombreAnalista = analistaNombres[i];
		}
	}
	printf("El analista {%i} de nombre %s cobro $%i.\n", analistaNumero+1, nombreAnalista, mayorCobro);
}

void mostrarAnalistaConMenoscantidadHorasPorPoryectos(int cantidadHoras, int analista[10][15][1], int totalAnalistas, int totalProyectos, int CANTIDAD_HORAS) {
	printf("Cantidad de analistas que hayan trabajado menos de %i hs en alguno de los proyectos:\n", cantidadHoras);
	int horasEnProyecto;
	for (int i = 0; i < totalAnalistas; i++) {
		horasEnProyecto = 0;
		for (int j = 0; j < totalProyectos; j++) {
			horasEnProyecto = analista[i][j][CANTIDAD_HORAS];
			if (horasEnProyecto != 0 && horasEnProyecto < cantidadHoras) {
				printf("....El analista {%i} trabajo (%i) hs en el proyecto [%i].\n", i+1, horasEnProyecto, j+1);
			}
		}
	}
}

void ordernarPorBurbujeo(int analistaSueldo[10][2], int totalAnalistas, int SUELDO, int indices[10]) {
	for (int i = 0; i < totalAnalistas; i++) {
		for (int j = 1; j < totalAnalistas - i; j++) {
			if (analistaSueldo[j-1][SUELDO] > analistaSueldo[j][SUELDO]) {
				int temporal = analistaSueldo[j][SUELDO];
				analistaSueldo[j][SUELDO] = analistaSueldo[j - 1][SUELDO];
				analistaSueldo[j - 1][SUELDO] = temporal;

				int indiceTemporal = indices[j];
				indices[j] = indices[j - 1];
				indices[j - 1] = indiceTemporal;
			}
		}
	}
}

void mostrarNombreValorHoraSueldoPorSueldoDescendente(int analistaSueldo[10][2], char *analistaNombres[], int totalAnalistas, int totalProyectos, int CANTIDAD_HORAS, int SUELDO, int VALOR_HORAS) {
	printf("Imprimiendo, ordenado en forma descendente por sueldo de los analista: nombre, valor de la hora y sueldo:\n");
	int indices[totalAnalistas];
	for (int i = 0; i < totalAnalistas; i++) {
		indices[i] = i;
	}
	ordernarPorBurbujeo(analistaSueldo, totalAnalistas, SUELDO, indices);

	for (int i = totalAnalistas-1; i >= 0; i--) {
	    int idx = indices[i];
		printf("....El analista {%i}-%s", idx+1, analistaNombres[idx]);
		printf(" con un valor de horas de %i", analistaSueldo[i][VALOR_HORAS]);
		printf(" $/hs, tiene un sueldo de $%i.-\n", analistaSueldo[i][SUELDO]);
	}
}

int main() {
	int totalAnalistas = 10;
	int totalProyectos = 15;
	int CANTIDAD_HORAS = 1;
	int analistas[totalAnalistas][totalProyectos][1];
	
	int SUELDO = 1, VALOR_HORAS = 2;
	int analistaSueldo[totalAnalistas][2];
	char *analistaNombres[totalAnalistas];
	
	cargarAnalistas(analistas, totalAnalistas, totalProyectos, CANTIDAD_HORAS);
	cargarAnalistasSueldos(analistaSueldo, totalAnalistas, SUELDO, VALOR_HORAS);
	cargarAnalistasNombres(analistaNombres, totalAnalistas);

	printf("============================================\n");
	mostrarhorasTrabajadasPorAnalista(analistas, totalAnalistas, CANTIDAD_HORAS);
	printf("============================================\n");
	mostrarHorasPorAnalistaPorProyecto(analistas, totalAnalistas, totalProyectos, CANTIDAD_HORAS);
	printf("============================================\n");
	mostrarHorasTotalPorProyecto(analistas, totalAnalistas, totalProyectos, CANTIDAD_HORAS);
	printf("============================================\n");
	int numeroProyecto = 1;
	mostrarHorasTotalEnProyecto(numeroProyecto, analistas, totalAnalistas, totalProyectos, CANTIDAD_HORAS);
	printf("============================================\n");
	mostrarSueldoPorAnalista(analistaSueldo, analistaNombres, totalAnalistas, SUELDO);
	printf("============================================\n");
	mostrarAnalistaConmayorCobro(analistaNombres, analistaSueldo, totalAnalistas, SUELDO);
	printf("============================================\n");
	int cantidadHoras = 5;
	mostrarAnalistaConMenoscantidadHorasPorPoryectos(cantidadHoras, analistas, totalAnalistas, totalProyectos, CANTIDAD_HORAS);
	printf("============================================\n");
	mostrarNombreValorHoraSueldoPorSueldoDescendente(analistaSueldo, analistaNombres, totalAnalistas, totalProyectos, CANTIDAD_HORAS, SUELDO, VALOR_HORAS);
	printf("============================================\n");
	return 0;
}
