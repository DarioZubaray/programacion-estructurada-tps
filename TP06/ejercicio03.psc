// 3- En una empresa los empleados cobran un sueldo seg�n la categoria, son 50 empleados y 3 categor�as
// Categor�a1 = $ 1500, Categor�a2 = $ 2000, Categor�a3 = $ 2500
// Al sueldo se le suman $ 100 por cada a�o trabajado. Si se ingresa el nombre, categor�a y antig�edad de cada empleado, calcular:
// - Cu�ntos empleados hay por categor�a
// - Total de sueldos pagados por categor�a
// - Sueldo promedio general
// - Sueldo m�ximo y a qui�n pertenece
// - Qu� porcentual sobre el total de sueldos representa cada total de sueldos de las categor�as
Funci�n definirCategorias(categoriaValor)
	categoriaValor[1] <- 1500
	categoriaValor[2] <- 2000
	categoriaValor[3] <- 2500
FinFunci�n

Funci�n mostrarCategorias(categoria1,categoria2,categoria3)
	Escribir '  1: ', categoria1
	Escribir '  2: ', categoria2
	Escribir '  3: ', categoria3
FinFunci�n

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
		Escribir 'Ingrese la antiguedad del empleado: (en a�os)'
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
		Seg�n empleados[iterador,CATEGORIA] Hacer
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
		FinSeg�n
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
