// 01 - Ingresar 25 n�meros, calcular su promedio e imprimirlo.
Funci�n mostrarPromedio(acumulador,totalIteraciones)
	Escribir 'acumulador: ', acumulador
	promedioNumeros <- acumulador/totalIteraciones
	Escribir 'Promedio de n�meros es: ', promedioNumeros
FinFunci�n

Algoritmo ejercicio01
	Definir acumulador, totalIteraciones Como Entero
	totalIteraciones <- 25
	acumulador <- 0
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un n�mero: '
		Leer numeroIngresado
		acumulador <- acumulador+numeroIngresado
	FinPara
	mostrarPromedio(acumulador,totalIteraciones)
FinAlgoritmo
