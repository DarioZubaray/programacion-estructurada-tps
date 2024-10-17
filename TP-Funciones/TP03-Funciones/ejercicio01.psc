// 01 - Ingresar 25 números, calcular su promedio e imprimirlo.
Función promedioNumeros <- acumularIngreso (totalIteraciones)
	acumulador <- 0
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un número: '
		Leer numeroIngresado
		acumulador <- acumulador+numeroIngresado
	FinPara
	Escribir 'acumulador: ', acumulador
	promedioNumeros <- acumulador/totalIteraciones
FinFunción

Algoritmo ejercicio01
	totalIteraciones <- 25
	promedioNumeros <- acumularIngreso(totalIteraciones)
	Escribir 'Promedio de números es: ', promedioNumeros
FinAlgoritmo
