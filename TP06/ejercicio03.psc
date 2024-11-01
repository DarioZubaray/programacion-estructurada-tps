// 3- En una empresa los empleados cobran un sueldo seg�n la categoria, son 50 empleados y 3 categor�as
// Categor�a1 = $ 1500, Categor�a2 = $ 2000, Categor�a3 = $ 2500
// Al sueldo se le suman $ 100 por cada a�o trabajado. Si se ingresa el nombre, categor�a y antig�edad de cada empleado, calcular:
// - Cu�ntos empleados hay por categor�a
// - Total de sueldos pagados por categor�a
// - Sueldo promedio general
// - Sueldo m�ximo y a qui�n pertenece
// - Qu� porcentual sobre el total de sueldos representa cada total de sueldos de las categor�as
Funci�n definirCategorias(categorias,atributo)
	categorias[1,atributo]<-1500
	categorias[2,atributo]<-2000
	categorias[3,atributo]<-2500
FinFunci�n

Funci�n mostrarEjemploTotalCategorias(totalCategorias)
	Escribir 'Ej: ('Sin Saltar
	Para iterador<-1 Hasta totalCategorias Con Paso 1 Hacer
		Escribir iterador, ', 'Sin Saltar
	FinPara
	Escribir ')'
FinFunci�n

Funci�n mostrarCategorias(categorias,totalCategorias,atributoAMostrar)
	Para iterador<-1 Hasta totalCategorias Con Paso 1 Hacer
		Escribir '..', iterador, ': ', categorias[iterador,atributoAMostrar]
	FinPara
FinFunci�n

Funci�n mostrarPorcentualCategorias(categorias,totalCategorias,ACUMULADOR_CATEGORIA,sueldoTotal)
	Para iterador<-1 Hasta totalCategorias Con Paso 1 Hacer
		categoriaSueldoTotal <- categorias[iterador,ACUMULADOR_CATEGORIA]*100/sueldoTotal
		Escribir '..', iterador, ': ', categoriaSueldoTotal
	FinPara
FinFunci�n

Algoritmo ejercicio03
	Definir totalEmpleados, totalCategorias, antiguedadBono Como Entero
	totalEmpleados <- 5
	totalCategorias <- 3
	antiguedadBono <- 100
	Definir SUELDO, CATEGORIA, ANTIGUEDAD Como Entero
	SUELDO <- 1
	CATEGORIA <- 2
	ANTIGUEDAD <- 3
	Definir VALOR_CATEGORIA, CONTADOR_CATEGORIA, ACUMULADOR_CATEGORIA Como Entero
	VALOR_CATEGORIA <- 1
	CONTADOR_CATEGORIA <- 2
	ACUMULADOR_CATEGORIA <- 3
	Dimensionar empleadosNombres(totalEmpleados)
	Dimensionar empleados(totalEmpleados,3)
	Dimensionar categorias(totalCategorias,3) // sueldo, categoria, antiguedad
	definirCategorias(categorias,VALOR_CATEGORIA) // valor, contador, acumulador
	Definir nombreEmpleado Como Cadena
	Definir categoriaEmpleado, antiguedadEmpleado Como Entero
	Para iterador<-1 Hasta totalEmpleados Con Paso 1 Hacer
		Escribir 'Ingrese el nombre del empleado: '
		Leer nombreEmpleado
		empleadosNombres[iterador] <- nombreEmpleado
		Escribir 'Ingrese la categoria del empleado: 'Sin Saltar
		mostrarEjemploTotalCategorias(totalCategorias)
		Leer categoriaEmpleado
		empleados[iterador,CATEGORIA]<-categoriaEmpleado
		Escribir 'Ingrese la antiguedad del empleado: (en a�os)'
		Leer antiguedadEmpleado
		empleados[iterador,ANTIGUEDAD]<-antiguedadEmpleado
		empleados[iterador,SUELDO]<-categorias[categoriaEmpleado,VALOR_CATEGORIA]+(antiguedadEmpleado*antiguedadBono)
		Escribir 'Empleado ', nombreEmpleado, ' registrado correctamente!'
	FinPara
	Definir sueldoPromedioGeneralAcumulador, sueldoMaximo, sueldoTotal Como Entero
	Definir sueldoMaximoEmpleado Como Cadena
	Para iterador<-1 Hasta totalEmpleados Con Paso 1 Hacer
		categoriaActual <- empleados[iterador,CATEGORIA]
		categorias[categoriaActual,CONTADOR_CATEGORIA]<-categorias[categoriaActual,CONTADOR_CATEGORIA]+1
		categorias[categoriaActual,ACUMULADOR_CATEGORIA]<-categorias[categoriaActual,ACUMULADOR_CATEGORIA]+empleados[iterador,SUELDO]
		sueldoPromedioGeneralAcumulador <- sueldoPromedioGeneralAcumulador+empleados[iterador,SUELDO]
		Si sueldoMaximo<empleados[iterador,SUELDO] Entonces
			sueldoMaximo <- empleados[iterador,SUELDO]
			sueldoMaximoEmpleado <- empleadosNombres[iterador]
		FinSi
		sueldoTotal <- sueldoTotal+empleados[iterador,SUELDO]
	FinPara
	Escribir 'Empleados por categorias: '
	mostrarCategorias(categorias,totalCategorias,CONTADOR_CATEGORIA)
	Escribir 'Total de sueldos pagados por categoria: '
	mostrarCategorias(categorias,totalCategorias,ACUMULADOR_CATEGORIA)
	Escribir 'Sueldo promedio general: ', sueldoPromedioGeneralAcumulador/totalEmpleados
	Escribir 'El sueldo maximo es de $', sueldoMaximo, ' y pertence a ', sueldoMaximoEmpleado
	Escribir 'El porcentual sobre el total de sueldos es:'
	mostrarPorcentualCategorias(categorias,totalCategorias,ACUMULADOR_CATEGORIA,sueldoTotal)
FinAlgoritmo
