// 01 - Ingresar 25 n�meros, calcular su promedio e imprimirlo.
Funci�n promedioNumeros <- acumularIngreso (totalIteraciones)
	acumulador <- 0
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un n�mero: '
		Leer numeroIngresado
		acumulador <- acumulador+numeroIngresado
	FinPara
	Escribir 'acumulador: ', acumulador
	promedioNumeros <- acumulador/totalIteraciones
FinFunci�n

Algoritmo ejercicio01
	totalIteraciones <- 25
	promedioNumeros <- acumularIngreso(totalIteraciones)
	Escribir 'Promedio de n�meros es: ', promedioNumeros
FinAlgoritmo
