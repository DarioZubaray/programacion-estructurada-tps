// 3- En una empresa los empleados cobran un sueldo según la categoria, son 50 empleados y 3 categorías
// Categoría1 = $ 1500, Categoría2 = $ 2000, Categoría3 = $ 2500
// Al sueldo se le suman $ 100 por cada año trabajado. Si se ingresa el nombre, categoría y antigüedad de cada empleado, calcular:
// - Cuántos empleados hay por categoría
// - Total de sueldos pagados por categoría
// - Sueldo promedio general
// - Sueldo máximo y a quién pertenece
// - Qué porcentual sobre el total de sueldos representa cada total de sueldos de las categorías
Función definirCategorias(categoriaValor)
	categoriaValor[1] <- 1500
	categoriaValor[2] <- 2000
	categoriaValor[3] <- 2500
FinFunción

Función mostrarCategorias(categoria1,categoria2,categoria3)
	Escribir '  1: ', categoria1
	Escribir '  2: ', categoria2
	Escribir '  3: ', categoria3
FinFunción

Algoritmo ejercicio03
	Definir totalEmpleados, antiguedadBono Como Entero
	totalEmpleados <- 5
	antiguedadBono <- 100
	Definir SUELDO, CATEGORIA, ANTIGUEDAD Como Entero
	SUELDO <- 1
	CATEGORIA <- 2
	ANTIGUEDAD <- 3
	Dimensionar empleadosNombres(totalEmpleados)
	Dimensionar empleados(totalEmpleados,3)
	Dimensionar categoriaValor(3) // sueldo, categoria, antiguedad
	definirCategorias(categoriaValor)
	Definir nombreEmpleado Como Cadena
	Definir categoriaEmpleado, antiguedadEmpleado Como Entero
	Para iterador<-1 Hasta totalEmpleados Con Paso 1 Hacer
		Escribir 'Ingrese el nombre del empleado: '
		Leer nombreEmpleado
		empleadosNombres[iterador] <- nombreEmpleado
		Escribir 'Ingrese la categoria del empleado: (1, 2, o 3)'
		Leer categoriaEmpleado
		empleados[iterador,CATEGORIA]<-categoriaEmpleado
		Escribir 'Ingrese la antiguedad del empleado: (en años)'
		Leer antiguedadEmpleado
		empleados[iterador,ANTIGUEDAD]<-antiguedadEmpleado
		empleados[iterador,SUELDO]<-categoriaValor[categoriaEmpleado]+(antiguedadEmpleado*antiguedadBono)
		Escribir 'Empleado ', nombreEmpleado, ' registrado correctamente!'
	FinPara
	Definir categoria1Contador, categoria2Contador, categoria3Contador Como Entero
	Definir categoria1TotalSueldo, categoria2TotalSueldo, categoria3TotalSueldo Como Entero
	Definir sueldoPromedioGeneralAcumulador, sueldoMaximo, sueldoTotal Como Entero
	Definir sueldoMaximoEmpleado Como Cadena
	Para iterador<-1 Hasta totalEmpleados Con Paso 1 Hacer
		Según empleados[iterador,CATEGORIA] Hacer
			1:
				categoria1Contador <- categoria1Contador+1
				categoria1TotalSueldo <- categoria1TotalSueldo+empleados[iterador,SUELDO]
			2:
				categoria2Contador <- categoria2Contador+1
				categoria2TotalSueldo <- categoria2TotalSueldo+empleados[iterador,SUELDO]
			3:
				categoria3Contador <- categoria3Contador+1
				categoria3TotalSueldo <- categoria3TotalSueldo+empleados[iterador,SUELDO]
			De Otro Modo:
				Escribir 'La categoria ingresada ', empleados[iterador,CATEGORIA], ' no es valida.'
		FinSegún
		sueldoPromedioGeneralAcumulador <- sueldoPromedioGeneralAcumulador+empleados[iterador,SUELDO]
		Si sueldoMaximo<empleados[iterador,SUELDO] Entonces
			sueldoMaximo <- empleados[iterador,SUELDO]
			sueldoMaximoEmpleado <- empleadosNombres[iterador]
		FinSi
		sueldoTotal <- sueldoTotal+empleados[iterador,SUELDO]
	FinPara
	Escribir 'Empleados por categorias: '
	mostrarCategorias(categoria1Contador,categoria2Contador,categoria3Contador)
	Escribir 'Total de sueldos pagados por categoria: '
	mostrarCategorias(categoria1TotalSueldo,categoria2TotalSueldo,categoria3TotalSueldo)
	Escribir 'Sueldo promedio general: ', sueldoPromedioGeneralAcumulador/totalEmpleados
	Escribir 'El sueldo maximo es de $', sueldoMaximo, ' y pertence a ', sueldoMaximoEmpleado
	Escribir 'El porcentual sobre el total de sueldos es:'
	mostrarCategorias((categoria1TotalSueldo*100/sueldoTotal),(categoria2TotalSueldo*100/sueldoTotal),(categoria3TotalSueldo*100/sueldoTotal))
FinAlgoritmo
