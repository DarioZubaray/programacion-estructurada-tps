Funcion ordenarPorBurbujaDesc(vsueldo_analista, TOTAL_ANALISTAS, v_nombres_analistas, v_valorhora_analistas)
	Para i<-2 Hasta TOTAL_ANALISTAS Con Paso 1 Hacer
		Para j<-1 Hasta TOTAL_ANALISTAS-i+1 Con Paso 1 Hacer
			Si vsueldo_analista[j]<vsueldo_analista[j+1] Entonces
				temporal <- vsueldo_analista[j]
				vsueldo_analista[j] <- vsueldo_analista[j+1]
				vsueldo_analista[j+1]<-temporal
				
				temporalNombre <- v_nombres_analistas[j]				
				v_nombres_analistas[j] <- v_nombres_analistas[j+1]
				v_nombres_analistas[j+1]<-temporalNombre
				
				temporal <- v_valorhora_analistas[j]
				v_valorhora_analistas[j] <- v_valorhora_analistas[j+1]
				v_valorhora_analistas[j+1]<-temporal
			FinSi
		FinPara
	FinPara
FinFuncion

Algoritmo main
	// INCOMPLETO PARA QUE LO TERMINEN USTEDES
	Definir TOTAL_ANALISTAS , TOTAL_PROYECTOS Como Entero
	TOTAL_ANALISTAS <- 5
	TOTAL_PROYECTOS <- 7
	// TP7-3 Una consultora tiene 5 (eran 10) analistas y 7 (eran 15) proyectos en los que trabajan indistintamente, 
	// a fin de mes cada analista eleva una planilla con los siguientes datos
	// 1.	Número de analista  2.	Número de proyecto 	3.	Cantidad de hs trabajadas
    //   En memoria se debera cargar previamente el nombre de los analistas y el valor hora. Se desea saber:
	// 1.	Cantidad de hs. trabajadas en total por cada analista.
	// 2.	Total de horas trabajadas por cada analista en cada proyecto.
	// 3.	Total de hs trabajadas sobre cada proyecto.
	// 4.	Qué analista trabajó menos en el proyecto 1.
	// 5.	Sueldo de cada analista.
	// 6.	Nombre del analista que cobró más.
	// 7.	Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos.
    // 8.	Imprimir ordenado en forma descendente por sueldo de los analistas: nombre valor de la hora y sueldo

	Definir i, hstrabajadas, v_valorhora_analistas, vtotal_horas_analistas, mtotal_horas_analistasxproyecto, vtotal_horas_proyecto, vsueldo_analista Como Entero;  //supongamos valores hora enteros
	Definir nro_analista, nro_proyecto, analistaMinHorasProyecto, minHorasProyecto, mayorCobro, analistaConMenos5hs Como Entero
	Definir v_nombres_analistas, analistaMayorCobro como caracter;
	Dimensionar v_nombres_analistas(TOTAL_ANALISTAS), v_valorhora_analistas(TOTAL_ANALISTAS), vtotal_horas_analistas(TOTAL_ANALISTAS), mtotal_horas_analistasxproyecto(TOTAL_ANALISTAS, TOTAL_PROYECTOS), vtotal_horas_proyecto(TOTAL_PROYECTOS), vsueldo_analista(TOTAL_ANALISTAS);
	
	Escribir "Se solicitarán los nombres y valor hora de los ", TOTAL_ANALISTAS ," analistas ";
	// Incializo para punto 1.	Cantidad de hs. trabajadas en total por cada analista
	Para i<-1 Hasta TOTAL_ANALISTAS Hacer
		vtotal_horas_analistas[i]=0;
	FinPara
	// Incializo para punto 2.	Total de horas trabajadas por cada analista en cada proyecto.	
	// ES UNA MATRIZ !!
	Para i<-1 Hasta TOTAL_ANALISTAS Hacer
		Para j<-1 Hasta TOTAL_PROYECTOS Hacer
			mtotal_horas_analistasxproyecto[i,j]=0;
		FinPara
	FinPara
	// Incializo para punto 3.	Total de hs trabajadas sobre cada proyecto.	
	Para i<-1 Hasta TOTAL_PROYECTOS Hacer
		vtotal_horas_proyecto[i]=0;
	FinPara
	// Inicializo para punto 4
	analistaMinHorasProyecto <- 0
	minHorasProyecto <- 0
	// Inicializo para punto 5
	mayorCobro <- 0
	// Punto 7
	analistaConMenos5hs <- 0
	
	//Primer serie de ingresos
	Para i<-1 Hasta TOTAL_ANALISTAS Hacer
		Escribir "Ingrese el ", i, ". nombre";
		Leer v_nombres_analistas[i];
		Escribir "Ingrese el ", i, ". valor hora";
		Leer v_valorhora_analistas[i];
	FinPara
	Escribir "Ahora se solicitarán los proyectos trabajados por cada analista ";
	// No lo dice específicamente el enunciado, pero a efectos de simplificar supondremos 
	// que cada Analista trabajó en un único Proyecto
	Escribir "Ingrese nro de Analista (1-", TOTAL_ANALISTAS,") - 0 para finalizar ";
	Leer nro_analista;		
	Mientras (nro_analista <> 0) Hacer
		Escribir "Ingrese el nro Proyecto en el que trabajó (1 a ", TOTAL_PROYECTOS,")";
		Leer nro_proyecto;
		Escribir "Ingrese las horas trabajadas en dicho proyecto";
		Leer hstrabajadas;
		// 1.	Cantidad de hs. trabajadas en total por cada analista.
		vtotal_horas_analistas[nro_analista]=vtotal_horas_analistas[nro_analista]+hstrabajadas;
		// 2.	Total de horas trabajadas por cada analista en cada proyecto.
		mtotal_horas_analistasxproyecto[nro_analista,nro_proyecto]=mtotal_horas_analistasxproyecto[nro_analista,nro_proyecto]+hstrabajadas;
		// 3.	Total de hs trabajadas sobre cada proyecto.
		vtotal_horas_proyecto[nro_proyecto]=vtotal_horas_proyecto[nro_proyecto]+hstrabajadas;
		// 4.	Qué analista trabajó menos en el proyecto 1.
		Si nro_proyecto Es 1 Entonces
			Si minHorasProyecto < hstrabajadas Entonces
				analistaMinHorasProyecto <- nro_analista
				minHorasProyecto <- hstrabajadas
			FinSi
		FinSi
		// 5.	Sueldo de cada analista.
		vsueldo_analista[nro_analista] <- vtotal_horas_analistas[nro_analista] * v_valorhora_analistas[nro_analista]
		// 6.	Nombre del analista que cobró más.
		// 7.	Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos.
		Si hstrabajadas < 5 Entonces
			analistaConMenos5hs <- analistaConMenos5hs + 1
		FinSi
		// 8.	Imprimir ordenado en forma descendente por sueldo de los analistas: nombre valor de la hora y sueldo

		Escribir "Ingrese nro de Analista (1-", TOTAL_ANALISTAS,") - 0 para finalizar ";
		Leer nro_analista;		
	FinMientras
	
	Escribir "Cantidad de hs. trabajadas en total por cada analista: "
	Para i<-1 Hasta TOTAL_ANALISTAS Hacer
		Escribir "....analista nro", i, ": ", vtotal_horas_analistas(i)
	FinPara
	Escribir "Total de horas trabajadas por cada analista en cada proyecto."
	Para i<-1 Hasta TOTAL_ANALISTAS Hacer
		Para j<-1 Hasta TOTAL_PROYECTOS Hacer
			Si mtotal_horas_analistasxproyecto[i,j] > 0 Entonces
				Escribir "....analista nro: ", i, ", proyecto nro: ", j, " -- " , mtotal_horas_analistasxproyecto[i,j]
			FinSi
		FinPara
	FinPara
	Escribir "Total de hs trabajadas sobre cada proyecto."
	Para i<-1 Hasta TOTAL_PROYECTOS Hacer
		Escribir "....proyecto nro: ", i, ", total horas: ", vtotal_horas_proyecto[i]
	FinPara
	Escribir "Analista que trabajó menos horas (", minHorasProyecto,") en el proyecto 1, es el analista nro: ", analistaMinHorasProyecto
	Escribir "Sueldo de cada analista."
	Para i<-1 Hasta TOTAL_ANALISTAS Hacer
		sueldoActual <- vsueldo_analista[i]
		Si sueldoActual > mayorCobro Entonces
			mayorCobro <- sueldoActual
			analistaMayorCobro <- v_nombres_analistas[i]
		FinSi
		Escribir "....El analista nro: ", i, ", le corresponde un sueldo de: $", sueldoActual
	FinPara
	Escribir "El nombre del analista que cobró más es ", analistaMayorCobro
	Escribir "Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos: ", analistaConMenos5hs
	ordenarPorBurbujaDesc(vsueldo_analista, TOTAL_ANALISTAS, v_nombres_analistas, v_valorhora_analistas)
	Para i<-1 Hasta TOTAL_ANALISTAS Hacer
		Escribir "nombre: ", v_nombres_analistas[i],", valor de la hora: ", v_valorhora_analistas[i],", y sueldo: ", vsueldo_analista[i]
	FinPara
FinAlgoritmo
