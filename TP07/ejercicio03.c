#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

int deseaContinuar() {
    char respuesta[10];
    printf("¿Desea continuar? (Si/No): ");
    scanf(" %s", respuesta);
    //fgets(respuesta, sizeof(respuesta), stdin);
    for (int i = 0; respuesta[i]; i++) {
        respuesta[i] = tolower(respuesta[i]);
    }

    if (strcmp(respuesta, "no") == 0 || strcmp(respuesta, "n") == 0) {
        return 0;
    }
    return 1;
}

void cargarAnalistas(int analista[10][15][1], int TOTAL_ANALISTAS, int TOTAL_PROYECTOS, int CANTIDAD_HORAS) {
	for (int i = 0; i < TOTAL_ANALISTAS; i++) {
		for (int j = 0; j < TOTAL_PROYECTOS; j++) {
			analista[i][j][CANTIDAD_HORAS] = 0;
		}
	}
	int numeroAnalista, numeroProyecto, cantidadHoras;
    while(true) {
		printf("Ingrese numero de analista: \n");
		scanf("%i", &numeroAnalista);
		printf("Ingrese numero de proyecto: \n");
		scanf("%i", &numeroProyecto);
		printf("Ingrese cantidad de horas: \n");
		scanf("%i", &cantidadHoras);
		analista[numeroAnalista][numeroProyecto][CANTIDAD_HORAS] = cantidadHoras;

		if (!deseaContinuar()) {
			break;
		}
	}
}

void cargarAnalistasSueldos(int analista[10][15][1], int analistaSueldo[10][2], int TOTAL_ANALISTAS, int TOTAL_PROYECTOS, int CANTIDAD_HORAS, int SUELDO, int VALOR_HORAS) {
	int totalHorasAnalista, valorHoras = 0;
	for (int i = 0; i < TOTAL_ANALISTAS; i++) {
		totalHorasAnalista = 0;
		for (int j = 0; j < TOTAL_PROYECTOS; j++) {
			totalHorasAnalista += analista[i][j][CANTIDAD_HORAS];
		}
		valorHoras = (rand()%40)+25;
		analistaSueldo[i][VALOR_HORAS] = valorHoras;
		analistaSueldo[i][SUELDO] = totalHorasAnalista*valorHoras;
	}
}

void cargarAnalistasNombres(char *analistaNombres[], int TOTAL_ANALISTAS) {
    printf("cargarAnalistasNombres: \n");
	char *nombresEjemplo[10];
	nombresEjemplo[0] = "Santiago";
	nombresEjemplo[1] = "Mateo";
	nombresEjemplo[2] = "Sebastian";
	nombresEjemplo[3] = "Valentina";
	nombresEjemplo[4] = "Maria";
	nombresEjemplo[5] = "Sofia";
	nombresEjemplo[6] = "Lucas";
	nombresEjemplo[7] = "Alejandro";
	nombresEjemplo[8] = "Gabriela";
	nombresEjemplo[10] = "Daniel";

	for(int i = 0; i < TOTAL_ANALISTAS; i++) {
		analistaNombres[i] = nombresEjemplo[i];
	}
}

void mostrarhorasTrabajadasPorAnalista(int analista[10][15][1], int TOTAL_ANALISTAS, int CANTIDAD_HORAS) {
	printf("Cantidad de hs. trabajadas en total por cada analista: \n");
	int horasTrabajadas;
	for (int i = 0; i < TOTAL_ANALISTAS; i++) {
		horasTrabajadas = 0;
		for (int j = 0; j < TOTAL_ANALISTAS; j++) {
			horasTrabajadas += analista[i][j][CANTIDAD_HORAS];
		}
		printf("....El analista {%i} trabajo un total de (%i) hs.\n", i+1, horasTrabajadas);
	}
}

void mostrarHorasPorAnalistaPorProyecto(int analista[10][15][1], int TOTAL_ANALISTAS, int TOTAL_PROYECTOS, int CANTIDAD_HORAS) {
	printf("Total de horas trabajadas por cada analista en cada proyecto.\n");
	for (int j = 0; j < TOTAL_PROYECTOS; j++) {
		printf("En el proyecto [%i] trabajaron: \n", j+1);
		for (int i = 0; i < TOTAL_ANALISTAS; i++) {
			if (analista[i][j][CANTIDAD_HORAS] > 0) {
				printf("....El analista {%i} con un total de (%i) hs.\n", i+1, analista[i][j][CANTIDAD_HORAS]);
			}
		}
	}
}

void mostrarHorasTotalPorProyecto(int analista[10][15][1], int TOTAL_ANALISTAS, int TOTAL_PROYECTOS, int CANTIDAD_HORAS) {
	printf("Total de hs trabajadas sobre cada proyecto: \n");
	int horasTotalProyecto;
	for (int j = 0; j < TOTAL_PROYECTOS; j++) {
		horasTotalProyecto = 0;
		for (int i = 0; i < TOTAL_ANALISTAS; i++) {
			if (analista[i][j][CANTIDAD_HORAS] > 0) {
				horasTotalProyecto += analista[i][j][CANTIDAD_HORAS];
			}
		}
		printf("....En el proyecto [%i] trabajaron un total de (%i) hs.\n", j+1, horasTotalProyecto);
	}
}

void mostrarHorasTotalEnProyecto(int numeroProyecto, int analista[10][15][1], int TOTAL_ANALISTAS, int TOTAL_PROYECTOS, int CANTIDAD_HORAS) {
	printf("Mostrar horas total en el proyecto: \n");
	int analistaNumero = 0, menosHorasAnalista = 0;
	bool conHorasTrabajadas, esasHorasSonMenoresAlMinimo;

	for (int i = 0; i < TOTAL_ANALISTAS; i++) {
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

void mostrarSueldoPorAnalista(int analistaSueldo[10][2], char *analistaNombres[], int TOTAL_ANALISTAS, int SUELDO) {
	printf("Sueldo de cada analista: \n");
	for (int i = 0; i < TOTAL_ANALISTAS; i++) {
		printf("....El analista {%i} de nombre %s tiene un sueldo de $%i.-\n", i+1, analistaNombres[i], analistaSueldo[i][SUELDO]);
	}
}

void mostrarAnalistaConmayorCobro(char *analistaNombres[], int analistaSueldo[10][2], int TOTAL_ANALISTAS, int SUELDO) {
    printf("Analista con mayor cobro: \n");
	int analistaNumero = 0;
	int mayorCobro = 0;
	char *nombreAnalista = "";
	for (int i = 0; i < TOTAL_ANALISTAS; i++) {
		if (analistaSueldo[i][SUELDO] > mayorCobro) {
			mayorCobro = analistaSueldo[i][SUELDO];
			analistaNumero = i;
			nombreAnalista = analistaNombres[i];
		}
	}
	printf("El analista {%i} de nombre %s cobro $%i.\n", analistaNumero+1, nombreAnalista, mayorCobro);
}

void mostrarAnalistaConMenoscantidadHorasPorPoryectos(int cantidadHoras, int analista[10][15][1], int TOTAL_ANALISTAS, int TOTAL_PROYECTOS, int CANTIDAD_HORAS) {
	printf("Cantidad de analistas que hayan trabajado menos de %i hs en alguno de los proyectos:\n", cantidadHoras);
	int horasEnProyecto;
	for (int i = 0; i < TOTAL_ANALISTAS; i++) {
		horasEnProyecto = 0;
		for (int j = 0; j < TOTAL_PROYECTOS; j++) {
			horasEnProyecto = analista[i][j][CANTIDAD_HORAS];
			if (horasEnProyecto != 0 && horasEnProyecto < cantidadHoras) {
				printf("....El analista {%i} trabajo (%i) hs en el proyecto [%i].\n", i+1, horasEnProyecto, j+1);
			}
		}
	}
}

void ordernarPorBurbujeo(int analistaSueldo[10][2], int TOTAL_ANALISTAS, int SUELDO, int indices[10]) {
	for (int i = 0; i < TOTAL_ANALISTAS; i++) {
		for (int j = 1; j < TOTAL_ANALISTAS - i; j++) {
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

void mostrarNombreValorHoraSueldoPorSueldoDescendente(int analistaSueldo[10][2], char *analistaNombres[], int TOTAL_ANALISTAS, int TOTAL_PROYECTOS, int CANTIDAD_HORAS, int SUELDO, int VALOR_HORAS) {
	printf("Imprimiendo, ordenado en forma descendente por sueldo de los analista: nombre, valor de la hora y sueldo:\n");
	int indices[TOTAL_ANALISTAS];
	for (int i = 0; i < TOTAL_ANALISTAS; i++) {
		indices[i] = i;
	}
	ordernarPorBurbujeo(analistaSueldo, TOTAL_ANALISTAS, SUELDO, indices);

	for (int i = TOTAL_ANALISTAS-1; i >= 0; i--) {
	    int idx = indices[i];
		printf("....El analista {%i}-%s", idx+1, analistaNombres[idx]);
		printf(" con un valor de horas de %i", analistaSueldo[i][VALOR_HORAS]);
		printf(" $/hs, tiene un sueldo de $%i.-\n", analistaSueldo[i][SUELDO]);
	}
}

int main() {
	int TOTAL_ANALISTAS = 10;
	int TOTAL_PROYECTOS = 15;
	int CANTIDAD_HORAS = 1;
	int analistas[TOTAL_ANALISTAS][TOTAL_PROYECTOS][1];
	
	int SUELDO = 1, VALOR_HORAS = 2;
	int analistaSueldo[TOTAL_ANALISTAS][2];
	char *analistaNombres[TOTAL_ANALISTAS];
	
	cargarAnalistas(analistas, TOTAL_ANALISTAS, TOTAL_PROYECTOS, CANTIDAD_HORAS);
	cargarAnalistasSueldos(analistas, analistaSueldo, TOTAL_ANALISTAS, TOTAL_PROYECTOS, CANTIDAD_HORAS, SUELDO, VALOR_HORAS);
	cargarAnalistasNombres(analistaNombres, TOTAL_ANALISTAS);

	printf("============================================\n");
	mostrarhorasTrabajadasPorAnalista(analistas, TOTAL_ANALISTAS, CANTIDAD_HORAS);
	printf("============================================\n");
	mostrarHorasPorAnalistaPorProyecto(analistas, TOTAL_ANALISTAS, TOTAL_PROYECTOS, CANTIDAD_HORAS);
	printf("============================================\n");
	mostrarHorasTotalPorProyecto(analistas, TOTAL_ANALISTAS, TOTAL_PROYECTOS, CANTIDAD_HORAS);
	printf("============================================\n");
	int numeroProyecto = 1;
	mostrarHorasTotalEnProyecto(numeroProyecto, analistas, TOTAL_ANALISTAS, TOTAL_PROYECTOS, CANTIDAD_HORAS);
	printf("============================================\n");
	mostrarSueldoPorAnalista(analistaSueldo, analistaNombres, TOTAL_ANALISTAS, SUELDO);
	printf("============================================\n");
	mostrarAnalistaConmayorCobro(analistaNombres, analistaSueldo, TOTAL_ANALISTAS, SUELDO);
	printf("============================================\n");
	int cantidadHoras = 5;
	mostrarAnalistaConMenoscantidadHorasPorPoryectos(cantidadHoras, analistas, TOTAL_ANALISTAS, TOTAL_PROYECTOS, CANTIDAD_HORAS);
	printf("============================================\n");
	mostrarNombreValorHoraSueldoPorSueldoDescendente(analistaSueldo, analistaNombres, TOTAL_ANALISTAS, TOTAL_PROYECTOS, CANTIDAD_HORAS, SUELDO, VALOR_HORAS);
	printf("============================================\n");
	return 0;
}
