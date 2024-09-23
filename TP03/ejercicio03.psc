// Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el promedio 
// de lo valores pares y el promedio de los valores impares. 
// Luego mostrar por pantalla cuantos números superaron el valor 15.
Algoritmo ejercicio03
	acumulador <- 0
	totalIteraciones <- 8
	acumuladorPar <- 0
	contadorPar <- 0
	acumuladorImpar <- 0
	contadorImpar <- 0
	contadorMayorQuince <- 0
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un valor numérico: '
		Leer valorIngresado
		acumulador <- acumulador+valorIngresado
		Si valorIngresado>=0 Entonces
			Si valorIngresado>15 Entonces
				contadorMayorQuince <- contadorMayorQuince+1
			FinSi
			acumuladorPar <- acumuladorPar+valorIngresado
			contadorPar <- contadorPar+1
		SiNo
			acumuladorImpar <- acumuladorImpar+valorIngresado
			contadorImpar <- contadorImpar+1
		FinSi
	FinPara
	promedioGeneral <- acumulador/totalIteraciones
	Escribir 'Promedio general ', promedioGeneral
	promedioValoresPares <- acumuladorPar/contadorPar
	Escribir 'Promedio valores pares ', promedioValoresPares
	promedioValoresImpares <- acumuladorImpar/contadorImpar
	Escribir 'Promedio valores impares ', promedioValoresImpares
	Escribir 'Total número que superaron el valor 15: ', contadorMayorQuince
FinAlgoritmo
