// 02 - Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros.
Función cantidad <- sumarMasUno(cantidad)
	cantidad <- cantidad+1
FinFunción

Función mostrarYAsignar(aMostrar,cantidad por referencia)
	Escribir aMostrar
	cantidad <- sumarMasUno(cantidad)
FinFunción

Función mostrarResultados(cantidadPositivos,cantidadNegativos,cantidadCeros)
	Escribir 'Total positivos: ', cantidadPositivos
	Escribir 'Total negativos: ', cantidadNegativos
	Escribir 'Total ceros: ', cantidadCeros
FinFunción

Algoritmo ejercicio02
	Definir cantidadPositivos, cantidadNegativos, cantidadCeros Como Entero
	cantidadPositivos <- 0
	cantidadNegativos <- 0
	cantidadCeros <- 0
	totalIteraciones <- 5
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un valor numérico: '
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
