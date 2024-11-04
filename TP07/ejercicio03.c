/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/* En C no se puede dimensionar un arreglo estático con una dimensión no constante.
   PSeInt sobredimensionará el arreglo utilizando un valor simbólico ARREGLO_MAX.
   Sería posible crear un arreglo dinámicamente con los operadores new y delete, pero
   este mecanismo aún no está soportado en las traducciones automáticas de PSeInt. */
#define ARREGLO_MAX 100

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

// Declaraciones adelantadas de las funciones
void cargaranalistas(SIN_TIPO analista, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas);
void cargaranalistassueldos(SIN_TIPO analistasueldo, SIN_TIPO totalanalistas, SIN_TIPO sueldo, SIN_TIPO valor_horas);
void cargaranalistasnombres(SIN_TIPO analistanombres, SIN_TIPO totalanalistas);
void mostrarhorastrabajadasporanalista(SIN_TIPO analistas, SIN_TIPO totalanalistas, SIN_TIPO cantidad_horas);
void mostrarhorasporanalistaporproyecto(SIN_TIPO analistas, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas);
void mostrarhorastotalporproyecto(SIN_TIPO analistas, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas);
void mostrarhorastotalenproyecto(SIN_TIPO numeroproyecto, SIN_TIPO analistas, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas);
void mostrarsueldoporanalista(SIN_TIPO analistasueldo, SIN_TIPO analistanombres, SIN_TIPO totalanalistas, SIN_TIPO sueldo);
void mostraranalistaconmayorcobro(SIN_TIPO analistanombres, SIN_TIPO analistasueldo, SIN_TIPO totalanalistas, SIN_TIPO sueldo);
void mostraranalistaconmenoscantidadhorasporporyectos(SIN_TIPO cantidadhoras, SIN_TIPO analistas, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas);
void ordernarporburbujeo(SIN_TIPO analistasueldo, SIN_TIPO totalanalistas, SIN_TIPO sueldo, SIN_TIPO indices);
void mostrarnombrevalorhorasueldoporsueldodescendente(SIN_TIPO analistas, SIN_TIPO analistasueldo, SIN_TIPO analistanombres, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas, SIN_TIPO sueldo, SIN_TIPO valor_horas);

/* 3- Una consultora tiene 10 analistas y 15 proyectos en los que trabajan indistintamente, a fin de mes cada analista eleva una planilla con los siguientes datos: */
/* Numero de analista, Numero de proyecto, Cantidad de hs trabajadas */
/* En memoria se debera cargar previamente el nombre de los analistas y el valor hora. */
/* Se desea saber:	 */
/* - Cantidad de hs. trabajadas en total por cada analista. */
/* - Total de horas trabajadas por cada analista en cada proyecto. */
/* - Total de hs trabajadas sobre cada proyecto. */
/* - Qué analista trabajó menos en el proyecto 1. */
/* - Sueldo de cada analista. */
/* - Nombre del analista que cobró más. */
/* - Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos. */
/* - Imprimir ordenado en forma descendente por sueldo de los analista: nombre, valor de la hora y sueldo */
void cargaranalistas(SIN_TIPO analista, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas) {
	int analista;
	float iteradori;
	float iteradorj;
	int numeroaleatorio;
	float totalanalistas;
	float totalproyectos;
	for (iteradori=1; iteradori<=totalanalistas; ++iteradori) {
		for (iteradorj=1; iteradorj<=totalproyectos; ++iteradorj) {
			numeroaleatorio = (rand()%24);
			if (numeroaleatorio>15) {
				analista[iteradori-1][iteradorj-1][cantidad_horas-1] = (rand()%36);
			} else {
				analista[iteradori-1][iteradorj-1][cantidad_horas-1] = 0;
			}
		}
	}
}

void cargaranalistassueldos(SIN_TIPO analistasueldo, SIN_TIPO totalanalistas, SIN_TIPO sueldo, SIN_TIPO valor_horas) {
	int analistasueldo;
	float iteradori;
	float totalanalistas;
	for (iteradori=1; iteradori<=totalanalistas; ++iteradori) {
		analistasueldo[iteradori-1][sueldo-1] = (rand()%50)*100;
		analistasueldo[iteradori-1][valor_horas-1] = (rand()%50);
	}
}

void cargaranalistasnombres(SIN_TIPO analistanombres, SIN_TIPO totalanalistas) {
	char analistanombres[MAX_STRLEN];
	analistanombres[0] = "Santiago";
	analistanombres[1] = "Mateo";
	analistanombres[2] = "Sebastián";
	analistanombres[3] = "Valentina";
	analistanombres[4] = "María";
	analistanombres[5] = "Sofía";
	analistanombres[6] = "Lucas";
	analistanombres[7] = "Alejandro";
	analistanombres[8] = "Gabriela";
	analistanombres[totalanalistas-1] = "Daniel";
}

void mostrarhorastrabajadasporanalista(SIN_TIPO analistas, SIN_TIPO totalanalistas, SIN_TIPO cantidad_horas) {
	float analistas;
	int horastrabajadas;
	float iteradori;
	float iteradorj;
	float totalanalistas;
	printf("Cantidad de hs. trabajadas en total por cada analista: \n");
	for (iteradori=1; iteradori<=totalanalistas; ++iteradori) {
		horastrabajadas = 0;
		for (iteradorj=1; iteradorj<=totalanalistas; ++iteradorj) {
			horastrabajadas = horastrabajadas+analistas[iteradori-1][iteradorj-1][cantidad_horas-1];
		}
		printf("....El analista {%f} trabajo un total de (%i) hs.\n", iteradori, horastrabajadas);
	}
}

void mostrarhorasporanalistaporproyecto(SIN_TIPO analistas, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas) {
	float analistas;
	float iteradori;
	float iteradorj;
	float totalanalistas;
	float totalproyectos;
	printf("Total de horas trabajadas por cada analista en cada proyecto.\n");
	for (iteradorj=1; iteradorj<=totalproyectos; ++iteradorj) {
		printf("En el proyecto [%f] trabajaron: \n", iteradorj);
		for (iteradori=1; iteradori<=totalanalistas; ++iteradori) {
			if (analistas[iteradori-1][iteradorj-1][cantidad_horas-1]>0) {
				printf("....El analista {%f} con un total de (%f) hs.\n", iteradori, analistas[iteradori-1][iteradorj-1][cantidad_horas-1]);
			}
		}
	}
}

void mostrarhorastotalporproyecto(SIN_TIPO analistas, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas) {
	float analistas;
	int horastotalproyecto;
	float iteradori;
	float iteradorj;
	float totalanalistas;
	float totalproyectos;
	printf("Total de hs trabajadas sobre cada proyecto: \n");
	for (iteradorj=1; iteradorj<=totalproyectos; ++iteradorj) {
		horastotalproyecto = 0;
		for (iteradori=1; iteradori<=totalanalistas; ++iteradori) {
			if (analistas[iteradori-1][iteradorj-1][cantidad_horas-1]>0) {
				horastotalproyecto = horastotalproyecto+analistas[iteradori-1][iteradorj-1][cantidad_horas-1];
			}
		}
		printf("....En el proyecto [%f] trabajaron un total de (%i) hs.\n", iteradorj, horastotalproyecto);
	}
}

void mostrarhorastotalenproyecto(SIN_TIPO numeroproyecto, SIN_TIPO analistas, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas) {
	int analistanumero;
	float analistas;
	bool conhorastrabajadas;
	bool esashorassonmenoresalminimo;
	float iteradori;
	int menoshorasanalista;
	SIN_TIPO numeroproyecto;
	float totalanalistas;
	analistanumero = 0;
	for (iteradori=1; iteradori<=totalanalistas; ++iteradori) {
		conhorastrabajadas = analistas[iteradori-1][numeroproyecto-1][cantidad_horas-1]>0;
		esashorassonmenoresalminimo = analistas[iteradori-1][numeroproyecto-1][cantidad_horas-1]<menoshorasanalista || (menoshorasanalista)==(0);
		if (conhorastrabajadas && esashorassonmenoresalminimo) {
			analistanumero = iteradori;
			menoshorasanalista = analistas[iteradori-1][numeroproyecto-1][cantidad_horas-1];
		}
	}
	if (!(analistanumero)==(0)) {
		printf("El analista {%i} trabajó menos en el proyecto [%f].\n", analistanumero, numeroproyecto);
	} else {
		printf("Nadie trabajo en este proyecto.\n");
	}
}

void mostrarsueldoporanalista(SIN_TIPO analistasueldo, SIN_TIPO analistanombres, SIN_TIPO totalanalistas, SIN_TIPO sueldo) {
	SIN_TIPO analistanombres;
	SIN_TIPO analistasueldo;
	float iteradori;
	float totalanalistas;
	printf("Sueldo de cada analista: \n");
	for (iteradori=1; iteradori<=totalanalistas; ++iteradori) {
		printf("....El analista {%f} de nombre %f tiene un sueldo de $%f.-\n", iteradori, analistanombres[iteradori-1], analistasueldo[iteradori-1][sueldo-1]);
	}
}

void mostraranalistaconmayorcobro(SIN_TIPO analistanombres, SIN_TIPO analistasueldo, SIN_TIPO totalanalistas, SIN_TIPO sueldo) {
	SIN_TIPO analistanombres;
	int analistanumero;
	int analistasueldo;
	float iteradori;
	int mayorcobro;
	char nombreanalista[MAX_STRLEN];
	float totalanalistas;
	analistanumero = 0;
	mayorcobro = 0;
	nombreanalista = "";
	for (iteradori=1; iteradori<=totalanalistas; ++iteradori) {
		if (analistasueldo[iteradori-1][sueldo-1]>mayorcobro) {
			mayorcobro = analistasueldo[iteradori-1][sueldo-1];
			analistanumero = iteradori;
			nombreanalista = analistanombres[iteradori-1];
		}
	}
	printf("El analista {%i} de nombre %s cobro $%i.\n", analistanumero, nombreanalista, mayorcobro);
}

void mostraranalistaconmenoscantidadhorasporporyectos(SIN_TIPO cantidadhoras, SIN_TIPO analistas, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas) {
	SIN_TIPO analistas;
	float cantidadhoras;
	float horasenproyecto;
	float iteradori;
	float iteradorj;
	float totalanalistas;
	float totalproyectos;
	printf("Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos:\n");
	for (iteradori=1; iteradori<=totalanalistas; ++iteradori) {
		horasenproyecto = 0;
		for (iteradorj=1; iteradorj<=totalproyectos; ++iteradorj) {
			horasenproyecto = analistas[iteradori-1][iteradorj-1][cantidad_horas-1];
			if (!(horasenproyecto)==(0) && horasenproyecto<cantidadhoras) {
				printf("....El analista {%f} trabajó (%f) hs en el proyecto [%f].\n", iteradori, horasenproyecto, iteradorj);
			}
		}
	}
}

void ordernarporburbujeo(SIN_TIPO analistasueldo, SIN_TIPO totalanalistas, SIN_TIPO sueldo, SIN_TIPO indices) {
	SIN_TIPO analistasueldo;
	SIN_TIPO indices;
	SIN_TIPO indicetemporal;
	float iteradori;
	float iteradorj;
	SIN_TIPO temporal;
	float totalanalistas;
	for (iteradori=2; iteradori<=totalanalistas; ++iteradori) {
		for (iteradorj=1; iteradorj<=totalanalistas-iteradori+1; ++iteradorj) {
			if (analistasueldo[iteradorj-1][sueldo-1]>analistasueldo[iteradorj][sueldo-1]) {
				temporal = analistasueldo[iteradorj-1][sueldo-1];
				analistasueldo[iteradorj-1][sueldo-1] = analistasueldo[iteradorj][sueldo-1];
				analistasueldo[iteradorj][sueldo-1] = temporal;
				indicetemporal = indices[iteradorj-1];
				indices[iteradorj-1] = indices[iteradorj];
				indices[iteradorj] = indicetemporal;
			}
		}
	}
}

void mostrarnombrevalorhorasueldoporsueldodescendente(SIN_TIPO analistas, SIN_TIPO analistasueldo, SIN_TIPO analistanombres, SIN_TIPO totalanalistas, SIN_TIPO totalproyectos, SIN_TIPO cantidad_horas, SIN_TIPO sueldo, SIN_TIPO valor_horas) {
	SIN_TIPO analistanombres;
	SIN_TIPO analistasueldo;
	float i;
	float indices[ARREGLO_MAX];
	float iteradori;
	SIN_TIPO ordernarporburbujeo[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	int totalanalistas;
	for (i=1; i<=totalanalistas; ++i) {
		indices[i-1] = i;
	}
	ordernarporburbujeo[analistasueldo-1][totalanalistas-1][sueldo-1][indices-1];
	printf("Imprimiendo, ordenado en forma descendente por sueldo de los analista: nombre, valor de la hora y sueldo:\n");
	for (iteradori=totalanalistas; iteradori>=1; --iteradori) {
		printf("....El analista {%f}-%f", indices[iteradori-1], analistanombres[indices[iteradori-1]-1]);
		printf(" con un valor de horas de %f", analistasueldo[iteradori-1][valor_horas-1]);
		printf(" $/hs, tiene un sueldo de $%f.-\n", analistasueldo[iteradori-1][sueldo-1]);
	}
}

int main() {
	SIN_TIPO analistanombres[ARREGLO_MAX];
	SIN_TIPO analistas[ARREGLO_MAX][ARREGLO_MAX][1];
	SIN_TIPO analistasueldo[ARREGLO_MAX][2];
	float cantidadhoras;
	int cantidad_horas;
	SIN_TIPO cargaranalistas[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO cargaranalistasnombres[ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO cargaranalistassueldos[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO mostraranalistaconmayorcobro[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO mostraranalistaconmenoscantidadhorasporporyectos[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO mostrarhorasporanalistaporproyecto[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO mostrarhorastotalenproyecto[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO mostrarhorastotalporproyecto[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO mostrarhorastrabajadasporanalista[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO mostrarnombrevalorhorasueldoporsueldodescendente[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	SIN_TIPO mostrarsueldoporanalista[ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX][ARREGLO_MAX];
	float numeroproyecto;
	int sueldo;
	int totalanalistas;
	int totalproyectos;
	int valor_horas;
	totalanalistas = 10;
	totalproyectos = 15;
	cantidad_horas = 1;
	sueldo = 1;
	valor_horas = 2;
	cargaranalistas[analistas-1][totalanalistas-1][totalproyectos-1][cantidad_horas-1];
	cargaranalistassueldos[analistasueldo-1][totalanalistas-1][sueldo-1][valor_horas-1];
	cargaranalistasnombres[analistanombres-1][totalanalistas-1];
	printf("============================================\n");
	mostrarhorastrabajadasporanalista[analistas-1][totalanalistas-1][cantidad_horas-1];
	printf("============================================\n");
	mostrarhorasporanalistaporproyecto[analistas-1][totalanalistas-1][totalproyectos-1][cantidad_horas-1];
	printf("============================================\n");
	mostrarhorastotalporproyecto[analistas-1][totalanalistas-1][totalproyectos-1][cantidad_horas-1];
	printf("============================================\n");
	numeroproyecto = 1;
	mostrarhorastotalenproyecto[numeroproyecto-1][analistas-1][totalanalistas-1][totalproyectos-1][cantidad_horas-1];
	printf("============================================\n");
	mostrarsueldoporanalista[analistasueldo-1][analistanombres-1][totalanalistas-1][sueldo-1];
	printf("============================================\n");
	mostraranalistaconmayorcobro[analistanombres-1][analistasueldo-1][totalanalistas-1][sueldo-1];
	printf("============================================\n");
	cantidadhoras = 5;
	mostraranalistaconmenoscantidadhorasporporyectos[cantidadhoras-1][analistas-1][totalanalistas-1][totalproyectos-1][cantidad_horas-1];
	printf("============================================\n");
	mostrarnombrevalorhorasueldoporsueldodescendente[analistas-1][analistasueldo-1][analistanombres-1][totalanalistas-1][totalproyectos-1][cantidad_horas-1][sueldo-1][valor_horas-1];
	printf("============================================\n");
	return 0;
}

