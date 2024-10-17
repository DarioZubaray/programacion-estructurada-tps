// 01 - Ingresar 25 números, calcular su promedio e imprimirlo.
Función mostrarPromedio(acumulador,totalIteraciones)
	Escribir 'acumulador: ', acumulador
	promedioNumeros <- acumulador/totalIteraciones
	Escribir 'Promedio de números es: ', promedioNumeros
FinFunción

Algoritmo ejercicio01
	Definir acumulador, totalIteraciones Como Entero
	totalIteraciones <- 25
	acumulador <- 0
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un número: '
		Leer numeroIngresado
		acumulador <- acumulador+numeroIngresado
	FinPara
	mostrarPromedio(acumulador,totalIteraciones)
FinAlgoritmo
