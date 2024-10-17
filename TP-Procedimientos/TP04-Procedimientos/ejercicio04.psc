// 4 - Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros
Funci�n sumarValor(valor1 Por Referencia,valor2)
	valor1 <- valor1+valor2
FinFunci�n

Funci�n calcularPromedio(numerador,denominador,promedio Por Referencia)
	Si denominador<>0 Entonces
		promedio <- (numerador*1.0)/denominador
	SiNo
		promedio <- 0.0
	FinSi
FinFunci�n

Funci�n deseaContinuar(continuar Por Referencia)
	Escribir 'Desea ingresar un nuevo valor? (s/n)'
	Leer respuestaContinuar
	Si respuestaContinuar='n' O respuestaContinuar='N' Entonces
		continuar <- Falso
	SiNo
		continuar <- Verdadero
	FinSi
FinFunci�n

Funci�n mostrarResultados(contadorPositivo,acumuladorPositivo,contadorNegativo,acumuladorNegativo,contadorCero)
	Definir promedioPositivo, promedioNegativo Como Real
	Escribir 'Se registraron {', contadorPositivo, '} entradas por un total {', acumuladorPositivo, '}, '
	calcularPromedio(acumuladorPositivo,contadorPositivo,promedioPositivo)
	Escribir 'Su promedio de positivos es: ', promedioPositivo
	Escribir 'Se registraron {', contadorNegativo, '} entradas por un total {', acumuladorNegativo, '}, '
	calcularPromedio(acumuladorNegativo,contadorNegativo,promedioNegativo)
	Escribir 'Su promedio de negativos es: ', promedioNegativo
	Escribir 'Cantidad de ceros es: ', contadorCero
FinFunci�n

Algoritmo ejercicio04
	Definir contadorCeros, contadorNegativo, acumuladorNegativo, contadorPositivo, acumuladorPositivo Como Entero
	contadorPositivo <- 0
	acumuladorPositivo <- 0
	contadorNegativo <- 0
	acumuladorNegativo <- 0
	contadorCero <- 0
	continuar <- Verdadero
	Mientras continuar Hacer
		Escribir 'Ingrese un valor: '
		Leer nuevoValor
		sumarValor(contador,1)
		Si nuevoValor>0 Entonces
			sumarValor(contadorPositivo,1)
			sumarValor(acumuladorPositivo,nuevoValor)
		SiNo
			Si nuevoValor<0 Entonces
				sumarValor(contadorNegativo,1)
				sumarValor(acumuladorNegativo,nuevoValor)
			SiNo
				sumarValor(contadorCero,1)
			FinSi
		FinSi
		deseaContinuar(continuar)
	FinMientras
	mostrarResultados(contadorPositivo,acumuladorPositivo,contadorNegativo,acumuladorNegativo,contadorCero)
FinAlgoritmo
