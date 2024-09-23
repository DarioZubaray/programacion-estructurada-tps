// 01 - Ingresar 25 números, calcular su promedio e imprimirlo.
Algoritmo ejercicio01
	acumulador <- 0
	totalIteraciones <- 25
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un número: '
		Leer numeroIngresado
		acumulador <- acumulador+numeroIngresado
	FinPara
	Escribir 'acumulador: ', acumulador
	promedioNumeros <- acumulador/totalIteraciones
	Escribir 'Promedio de números es: ', promedioNumeros
FinAlgoritmo
