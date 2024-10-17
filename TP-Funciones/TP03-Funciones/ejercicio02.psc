// 02 - Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros.
Función cantidad <- sumarMasUno(cantidad)
	cantidad <- cantidad+1
FinFunción

Algoritmo ejercicio02
	cantidadPositivos <- 0
	cantidadNegativos <- 0
	cantidadCeros <- 0
	totalIteraciones <- 10
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un valor numérico: '
		Leer valorIngresado
		Si valorIngresado>0 Entonces
			Escribir 'Es positivo'
			cantidadPositivos <- sumarMasUno(cantidadPositivos)
		SiNo
			Si valorIngresado==0 Entonces
				Escribir 'Es Cero'
				cantidadCeros <- sumarMasUno(cantidadCeros)
			SiNo
				Escribir 'Es negativo'
				cantidadNegativos <- sumarMasUno(cantidadNegativos)
			FinSi
		FinSi
	FinPara
	Escribir 'Total positivos: ', cantidadPositivos
	Escribir 'Total negativos: ', cantidadNegativos
	Escribir 'Total ceros: ', cantidadCeros
FinAlgoritmo
