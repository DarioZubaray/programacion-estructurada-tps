// 02 - Ingresar 10 valores, indicar e imprimir cu�ntos son positivos, cu�ntos negativos y cu�ntos ceros.
Funci�n cantidad <- sumarMasUno(cantidad)
	cantidad <- cantidad+1
FinFunci�n

Funci�n mostrarYAsignar(aMostrar,cantidad por referencia)
	Escribir aMostrar
	cantidad <- sumarMasUno(cantidad)
FinFunci�n

Funci�n mostrarResultados(cantidadPositivos,cantidadNegativos,cantidadCeros)
	Escribir 'Total positivos: ', cantidadPositivos
	Escribir 'Total negativos: ', cantidadNegativos
	Escribir 'Total ceros: ', cantidadCeros
FinFunci�n

Algoritmo ejercicio02
	Definir cantidadPositivos, cantidadNegativos, cantidadCeros Como Entero
	cantidadPositivos <- 0
	cantidadNegativos <- 0
	cantidadCeros <- 0
	totalIteraciones <- 5
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un valor num�rico: '
		Leer valorIngresado
		Si valorIngresado>0 Entonces
			mostrarYAsignar('Es positivo',cantidadPositivos)
		SiNo
			Si valorIngresado==0 Entonces
				mostrarYAsignar('Es Cero',cantidadCeros)
			SiNo
				mostrarYAsignar('Es negativo',cantidadNegativos)
			FinSi
		FinSi
	FinPara
	mostrarResultados(cantidadPositivos,cantidadNegativos,cantidadCeros)
FinAlgoritmo
