// 01 - Ingresar 25 n�meros, calcular su promedio e imprimirlo.
Algoritmo ejercicio01
	acumulador <- 0
	totalIteraciones <- 25
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un n�mero: '
		Leer numeroIngresado
		acumulador <- acumulador+numeroIngresado
	FinPara
	Escribir 'acumulador: ', acumulador
	promedioNumeros <- acumulador/totalIteraciones
	Escribir 'Promedio de n�meros es: ', promedioNumeros
FinAlgoritmo
