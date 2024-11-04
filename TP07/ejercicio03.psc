// 3- Una consultora tiene 10 analistas y 15 proyectos en los que trabajan indistintamente, a fin de mes cada analista eleva una planilla con los siguientes datos:
// Numero de analista, Numero de proyecto, Cantidad de hs trabajadas
// En memoria se debera cargar previamente el nombre de los analistas y el valor hora.
// Se desea saber:	
// - Cantidad de hs. trabajadas en total por cada analista.
// - Total de horas trabajadas por cada analista en cada proyecto.
// - Total de hs trabajadas sobre cada proyecto.
// - Qué analista trabajó menos en el proyecto 1.
// - Sueldo de cada analista.
// - Nombre del analista que cobró más.
// - Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos.
// - Imprimir ordenado en forma descendente por sueldo de los analista: nombre, valor de la hora y sueldo
Función cargarAnalistas(analista,totalAnalistas,totalProyectos,CANTIDAD_HORAS)
	Para iteradorI<-1 Hasta totalAnalistas Con Paso 1 Hacer
		Para iteradorJ<-1 Hasta totalProyectos Con Paso 1 Hacer
			numeroAleatorio <- azar(24)
			Si numeroAleatorio>15 Entonces
				analista[iteradorI,iteradorJ,CANTIDAD_HORAS]<-azar(36)
			SiNo
				analista[iteradorI,iteradorJ,CANTIDAD_HORAS]<-0
			FinSi
		FinPara
	FinPara
FinFunción

Función cargarAnalistasSueldos(analistaSueldo,totalAnalistas,SUELDO,VALOR_HORAS)
	Para iteradorI<-1 Hasta totalAnalistas Con Paso 1 Hacer
		analistaSueldo[iteradorI,SUELDO]<-azar(50)*100
		analistaSueldo[iteradorI,VALOR_HORAS]<-azar(50)
	FinPara
FinFunción

Función cargarAnalistasNombres(analistaNombres,totalAnalistas)
	analistaNombres[1] <- 'Santiago'
	analistaNombres[2] <- 'Mateo'
	analistaNombres[3] <- 'Sebastián'
	analistaNombres[4] <- 'Valentina'
	analistaNombres[5] <- 'María'
	analistaNombres[6] <- 'Sofía'
	analistaNombres[7] <- 'Lucas'
	analistaNombres[8] <- 'Alejandro'
	analistaNombres[9] <- 'Gabriela'
	analistaNombres[totalAnalistas] <- 'Daniel'
FinFunción

Función mostrarHorasTrabajadasPorAnalista(analistas,totalAnalistas,CANTIDAD_HORAS)
	Escribir 'Cantidad de hs. trabajadas en total por cada analista: '
	Definir horasTrabajadas Como Entero
	Para iteradorI<-1 Hasta totalAnalistas Con Paso 1 Hacer
		horasTrabajadas <- 0
		Para iteradorJ<-1 Hasta totalAnalistas Con Paso 1 Hacer
			horasTrabajadas <- horasTrabajadas+analistas[iteradorI,iteradorJ,CANTIDAD_HORAS]
		FinPara
		Escribir '....El analista {', iteradorI, '} trabajo un total de (', horasTrabajadas, ') hs.'
	FinPara
FinFunción

Función mostrarHorasPorAnalistaPorProyecto(analistas,totalAnalistas,totalProyectos,CANTIDAD_HORAS)
	Escribir 'Total de horas trabajadas por cada analista en cada proyecto.'
	Para iteradorJ<-1 Hasta totalProyectos Con Paso 1 Hacer
		Escribir 'En el proyecto [', iteradorJ, '] trabajaron: '
		Para iteradorI<-1 Hasta totalAnalistas Con Paso 1 Hacer
			Si analistas[iteradorI,iteradorJ,CANTIDAD_HORAS]>0 Entonces
				Escribir '....El analista {', iteradorI, '} con un total de (', analistas[iteradorI,iteradorJ,CANTIDAD_HORAS], ') hs.'
			FinSi
		FinPara
	FinPara
FinFunción

Función mostrarHorasTotalPorProyecto(analistas,totalAnalistas,totalProyectos,CANTIDAD_HORAS)
	Escribir 'Total de hs trabajadas sobre cada proyecto: '
	Definir horasTotalProyecto Como Entero
	Para iteradorJ<-1 Hasta totalProyectos Con Paso 1 Hacer
		horasTotalProyecto <- 0
		Para iteradorI<-1 Hasta totalAnalistas Con Paso 1 Hacer
			Si analistas[iteradorI,iteradorJ,CANTIDAD_HORAS]>0 Entonces
				horasTotalProyecto <- horasTotalProyecto+analistas[iteradorI,iteradorJ,CANTIDAD_HORAS]
			FinSi
		FinPara
		Escribir '....En el proyecto [', iteradorJ, '] trabajaron un total de (', horasTotalProyecto, ') hs.'
	FinPara
FinFunción

Función mostrarHorasTotalEnProyecto(numeroProyecto,analistas,totalAnalistas,totalProyectos,CANTIDAD_HORAS)
	Definir menosHorasAnalista, analistaNumero Como Entero
	analistaNumero <- 0
	Para iteradorI<-1 Hasta totalAnalistas Con Paso 1 Hacer
		conHorasTrabajadas <- analistas[iteradorI,numeroProyecto,CANTIDAD_HORAS]>0
		esasHorasSonMenoresAlMinimo <- analistas[iteradorI,numeroProyecto,CANTIDAD_HORAS]<menosHorasAnalista O (menosHorasAnalista)=(0)
		Si conHorasTrabajadas Y esasHorasSonMenoresAlMinimo Entonces
			analistaNumero <- iteradorI
			menosHorasAnalista <- analistas[iteradorI,numeroProyecto,CANTIDAD_HORAS]
		FinSi
	FinPara
	Si  NO (analistaNumero)=(0) Entonces
		Escribir 'El analista {', analistaNumero, '} trabajó menos en el proyecto [', numeroProyecto, '].'
	SiNo
		Escribir 'Nadie trabajo en este proyecto.'
	FinSi
FinFunción

Función mostrarSueldoPorAnalista(analistaSueldo,analistaNombres,totalAnalistas,SUELDO)
	Escribir 'Sueldo de cada analista: '
	Para iteradorI<-1 Hasta totalAnalistas Con Paso 1 Hacer
		Escribir '....El analista {', iteradorI, '} de nombre ', analistaNombres[iteradorI], ' tiene un sueldo de $', analistaSueldo[iteradorI,SUELDO], '.-'
	FinPara
FinFunción

Función mostrarAnalistaConMayorCobro(analistaNombres,analistaSueldo,totalAnalistas,SUELDO)
	Definir analistaNumero, mayorCobro Como Entero
	analistaNumero <- 0
	mayorCobro <- 0
	nombreAnalista <- ''
	Para iteradorI<-1 Hasta totalAnalistas Con Paso 1 Hacer
		Si analistaSueldo[iteradorI,SUELDO]>mayorCobro Entonces
			mayorCobro <- analistaSueldo[iteradorI,SUELDO]
			analistaNumero <- iteradorI
			nombreAnalista <- analistaNombres[iteradorI]
		FinSi
	FinPara
	Escribir 'El analista {', analistaNumero, '} de nombre ', nombreAnalista, ' cobro $', mayorCobro, '.'
FinFunción

Función mostrarAnalistaConMenosCantidadHorasPorPoryectos(cantidadHoras,analistas,totalAnalistas,totalProyectos,CANTIDAD_HORAS)
	Escribir 'Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos:'
	Para iteradorI<-1 Hasta totalAnalistas Con Paso 1 Hacer
		horasEnProyecto <- 0
		Para iteradorJ<-1 Hasta totalProyectos Con Paso 1 Hacer
			horasEnProyecto <- analistas[iteradorI,iteradorJ,CANTIDAD_HORAS]
			Si  NO (horasEnProyecto)=(0) Y horasEnProyecto<cantidadHoras Entonces
				Escribir '....El analista {', iteradorI, '} trabajó (', horasEnProyecto, ') hs en el proyecto [', iteradorJ, '].'
			FinSi
		FinPara
	FinPara
FinFunción

Función ordernarPorBurbujeo(analistaSueldo,totalAnalistas,SUELDO,indices)
	Para iteradorI<-2 Hasta totalAnalistas Con Paso 1 Hacer
		Para iteradorJ<-1 Hasta totalAnalistas-iteradorI+1 Con Paso 1 Hacer
			Si analistaSueldo[iteradorJ,SUELDO]>analistaSueldo[iteradorJ+1,SUELDO] Entonces
				temporal <- analistaSueldo[iteradorJ,SUELDO]
				analistaSueldo[iteradorJ,SUELDO]<-analistaSueldo[iteradorJ+1,SUELDO]
				analistaSueldo[iteradorJ+1,SUELDO]<-temporal
				indiceTemporal <- indices[iteradorJ]
				indices[iteradorJ] <- indices[iteradorJ+1]
				indices[iteradorJ+1]<-indiceTemporal
			FinSi
		FinPara
	FinPara
FinFunción

Función mostrarNombreValorHoraSueldoPorSueldoDescendente(analistas,analistaSueldo,analistaNombres,totalAnalistas,totalProyectos,CANTIDAD_HORAS,SUELDO,VALOR_HORAS)
	Dimensionar indices(totalAnalistas)
	Para i<-1 Hasta totalAnalistas Con Paso 1 Hacer
		indices[i] <- i
	FinPara
	ordernarPorBurbujeo(analistaSueldo,totalAnalistas,SUELDO,indices)
	Escribir 'Imprimiendo, ordenado en forma descendente por sueldo de los analista: nombre, valor de la hora y sueldo:'
	Para iteradorI<-totalAnalistas Hasta 1 Con Paso -1 Hacer
		Escribir '....El analista {', indices[iteradorI], '}-', analistaNombres[indices[iteradorI]]Sin Saltar
		Escribir ' con un valor de horas de ', analistaSueldo[iteradorI,VALOR_HORAS]Sin Saltar
		Escribir ' $/hs, tiene un sueldo de $', analistaSueldo[iteradorI,SUELDO], '.-'
	FinPara
FinFunción

Algoritmo ejercicio03
	Definir totalAnalistas, totalProyectos Como Entero
	totalAnalistas <- 10
	totalProyectos <- 15
	Definir CANTIDAD_HORAS Como Entero
	CANTIDAD_HORAS <- 1
	Dimensionar analistas(totalAnalistas,totalProyectos,1)
	Definir SUELDO, VALOR_HORAS Como Entero
	SUELDO <- 1
	VALOR_HORAS <- 2
	Dimensionar analistaSueldo(totalAnalistas,2)
	Dimensionar analistaNombres(totalAnalistas)
	cargarAnalistas(analistas,totalAnalistas,totalProyectos,CANTIDAD_HORAS)
	cargarAnalistasSueldos(analistaSueldo,totalAnalistas,SUELDO,VALOR_HORAS)
	cargarAnalistasNombres(analistaNombres,totalAnalistas)
	Escribir '============================================'
	mostrarHorasTrabajadasPorAnalista(analistas,totalAnalistas,CANTIDAD_HORAS)
	Escribir '============================================'
	mostrarHorasPorAnalistaPorProyecto(analistas,totalAnalistas,totalProyectos,CANTIDAD_HORAS)
	Escribir '============================================'
	mostrarHorasTotalPorProyecto(analistas,totalAnalistas,totalProyectos,CANTIDAD_HORAS)
	Escribir '============================================'
	numeroProyecto <- 1
	mostrarHorasTotalEnProyecto(numeroProyecto,analistas,totalAnalistas,totalProyectos,CANTIDAD_HORAS)
	Escribir '============================================'
	mostrarSueldoPorAnalista(analistaSueldo,analistaNombres,totalAnalistas,SUELDO)
	Escribir '============================================'
	mostrarAnalistaConMayorCobro(analistaNombres,analistaSueldo,totalAnalistas,SUELDO)
	Escribir '============================================'
	cantidadHoras <- 5
	mostrarAnalistaConMenosCantidadHorasPorPoryectos(cantidadHoras,analistas,totalAnalistas,totalProyectos,CANTIDAD_HORAS)
	Escribir '============================================'
	mostrarNombreValorHoraSueldoPorSueldoDescendente(analistas,analistaSueldo,analistaNombres,totalAnalistas,totalProyectos,CANTIDAD_HORAS,SUELDO,VALOR_HORAS)
	Escribir '============================================'
FinAlgoritmo
