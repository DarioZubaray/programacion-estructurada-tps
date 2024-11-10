#include<stdio.h>
#include<string.h>

void ordenarporburbujadesc(int vsueldo_analista[5], int TOTAL_ANALISTAS, char v_nombres_analistas[5][10], int v_valorhora_analistas[5]) {

	int temporal;
	char temporalnombre[10];
	for (int i = 0; i < TOTAL_ANALISTAS; i++) {
		for (int j = 1; j < TOTAL_ANALISTAS - i; j++) {
			if (vsueldo_analista[j-1] < vsueldo_analista[j]) {
				temporal = vsueldo_analista[j];
				vsueldo_analista[j] = vsueldo_analista[j-1];
				vsueldo_analista[j-1] = temporal;

				strcpy(temporalnombre, v_nombres_analistas[j]);
				strcpy(v_nombres_analistas[j], v_nombres_analistas[j-1]);
				strcpy(v_nombres_analistas[j-1], temporalnombre);

				temporal = v_valorhora_analistas[j];
				v_valorhora_analistas[j] = v_valorhora_analistas[j-1];
				v_valorhora_analistas[j-1] = temporal;
			}
		}
	}
}

int main() {
	int TOTAL_ANALISTAS = 5, TOTAL_PROYECTOS = 7;
	int i, j, hstrabajadas, sueldoActual, analistaMinHorasProyecto;
	int analistaConMenos5hs, mayorCobro, minHorasProyecto;

	char analistaMayorCobro[10];
	char v_nombres_analistas[5][10];

	int mtotal_horas_analistasxproyecto[5][7];
	int vsueldo_analista[5];
	int vtotal_horas_analistas[5];
	int vtotal_horas_proyecto[7];
	int v_valorhora_analistas[5];

	int nro_analista,nro_proyecto;
	/* INCOMPLETO PARA QUE LO TERMINEN USTEDES */
	/* TP7-3 Una consultora tiene 5 (eran 10) analistas y 7 (eran 15) proyectos en los que trabajan indistintamente,  */
	/* a fin de mes cada analista eleva una planilla con los siguientes datos */
	/* 1.	Numero de analista  2.	Numero de proyecto 	3.	Cantidad de hs trabajadas */
	/* En memoria se debera cargar previamente el nombre de los analistas y el valor hora. Se desea saber: */
	/* 1.	Cantidad de hs. trabajadas en total por cada analista. */
	/* 2.	Total de horas trabajadas por cada analista en cada proyecto. */
	/* 3.	Total de hs trabajadas sobre cada proyecto. */
	/* 4.	Que analista trabajo menos en el proyecto 1. */
	/* 5.	Sueldo de cada analista. */
	/* 6.	Nombre del analista que cobro mas. */
	/* 7.	Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos. */
	/* 8.	Imprimir ordenado en forma descendente por sueldo de los analistas: nombre valor de la hora y sueldo */

	/* supongamos valores hora enteros */
	printf("Se solicitaran los nombres y valor hora de los %i analistas \n", TOTAL_ANALISTAS);
	/* Incializo para punto 1.	Cantidad de hs. trabajadas en total por cada analista */
	for (i = 0; i < TOTAL_ANALISTAS; i++) {
		vtotal_horas_analistas[i] = 0;
	}
	/* Incializo para punto 2.	Total de horas trabajadas por cada analista en cada proyecto.	 */
	/* ES UNA MATRIZ !! */
	for (i = 0; i < TOTAL_ANALISTAS; i++) {
		for (j = 0; j < TOTAL_PROYECTOS; j++) {
			mtotal_horas_analistasxproyecto[i][j] = 0;
		}
	}
	/* Incializo para punto 3.	Total de hs trabajadas sobre cada proyecto.	 */
	for (i = 0; i < TOTAL_ANALISTAS; i++) {
		vtotal_horas_proyecto[i] = 0;
	}
	/* Inicializo para punto 4 */
	analistaMinHorasProyecto = 0;
	minHorasProyecto = 0;
	/* Inicializo para punto 5 */
	mayorCobro = 0;
	/* Punto 7 */
	analistaConMenos5hs = 0;
	/* Primer serie de ingresos */
	for (i = 0; i < TOTAL_ANALISTAS; i++) {
		printf("Ingrese el %i. nombre\n", i+1);
		scanf("%f", v_nombres_analistas[i]);
		printf("Ingrese el %i. valor hora\n", i+1);
		scanf("%f", v_valorhora_analistas[i]);
	}
	printf("Ahora se solicitaran los proyectos trabajados por cada analista \n");
	/* No lo dice especificamente el enunciado, pero a efectos de simplificar supondremos  */
	/* que cada Analista trabajo en un unico Proyecto */
	printf("Ingrese nro de Analista (1-%i) - 0 para finalizar \n", TOTAL_ANALISTAS);
	scanf("%i", &nro_analista);
	while (nro_analista != 0 ) {
		printf("Ingrese el nro Proyecto en el que trabajo (1 a %i)\n", TOTAL_PROYECTOS);
		scanf("%i", &nro_proyecto);
		printf("Ingrese las horas trabajadas en dicho proyecto\n");
		scanf("%i", &hstrabajadas);
		/* 1.	Cantidad de hs. trabajadas en total por cada analista. */
		vtotal_horas_analistas[nro_analista] += hstrabajadas;
		/* 2.	Total de horas trabajadas por cada analista en cada proyecto. */
		mtotal_horas_analistasxproyecto[nro_analista][nro_proyecto] += hstrabajadas;
		/* 3.	Total de hs trabajadas sobre cada proyecto. */
		vtotal_horas_proyecto[nro_proyecto] += hstrabajadas;
		/* 4.	Que analista trabajo menos en el proyecto 1. */
		if (nro_proyecto == 1) {
			if (minHorasProyecto < hstrabajadas) {
				analistaMinHorasProyecto = nro_analista;
				minHorasProyecto = hstrabajadas;
			}
		}
		/* 5.	Sueldo de cada analista. */
		vsueldo_analista[nro_analista] = vtotal_horas_analistas[nro_analista] * v_valorhora_analistas[nro_analista];
		/* 6.	Nombre del analista que cobro mas. */
		/* 7.	Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos. */
		if (hstrabajadas < 5) {
			analistaConMenos5hs++;
		}
		/* 8.	Imprimir ordenado en forma descendente por sueldo de los analistas: nombre valor de la hora y sueldo */
		printf("Ingrese nro de Analista (1-%i) - 0 para finalizar \n", TOTAL_ANALISTAS);
		scanf("%i", &nro_analista);
	}
	printf("Cantidad de hs. trabajadas en total por cada analista: \n");
	for (i = 0; i < TOTAL_ANALISTAS; i++) {
		printf("....analista nro%i: %i\n", i+1, vtotal_horas_analistas[i]);
	}
	printf("Total de horas trabajadas por cada analista en cada proyecto.\n");
	for (i = 0; i < TOTAL_ANALISTAS; i++) {
		for (j = 0; j < TOTAL_PROYECTOS; j++) {
			if (mtotal_horas_analistasxproyecto[i][j]>0) {
				printf("....analista nro: %i, proyecto nro: %i -- %i\n", i+1, j+1, mtotal_horas_analistasxproyecto[i][j]);
			}
		}
	}
	printf("Total de hs trabajadas sobre cada proyecto.\n");
	for (i = 0; i < TOTAL_PROYECTOS; i++) {
		printf("....proyecto nro: %i, total horas: %i\n", i+1, vtotal_horas_proyecto[i]);
	}
	printf("Analista que trabajo menos horas (%i) en el proyecto 1, es el analista nro: %i\n", minHorasProyecto, analistaMinHorasProyecto);
	printf("Sueldo de cada analista.\n");
	for (i = 0; i < TOTAL_ANALISTAS; i++) {
		sueldoActual = vsueldo_analista[i];
		if (sueldoActual > mayorCobro) {
			mayorCobro = sueldoActual;
			strcpy(analistaMayorCobro, v_nombres_analistas[i]);
		}
		printf("....El analista nro: %i, le corresponde un sueldo de: $%i\n", i+1, sueldoActual);
	}
	printf("El nombre del analista que cobro mas es %s\n", analistaMayorCobro);
	printf("Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos: %i\n", analistaConMenos5hs);

	ordenarporburbujadesc(vsueldo_analista, TOTAL_ANALISTAS, v_nombres_analistas, v_valorhora_analistas);
	for (i = 0; i < TOTAL_ANALISTAS; i++) {
		printf("nombre: %i, valor de la hora: %i, y sueldo: %i\n", v_nombres_analistas[i], v_valorhora_analistas[i], vsueldo_analista[i]);
	}
	return 0;
}
