// 4 - Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros
Funci�n valorRetorno <- sumarValor(valor1,valor2)
	valorRetorno <- valor1+valor2
FinFunci�n

Funci�n promedio <- calcularPromedio(numerador,denominador)
	promedio <- (numerador*100.0)/denominador
FinFunci�n

Funci�n continuar <- deseaContinuar
	Escribir 'Desea ingresar un nuevo valor? (s/n)'
	Leer respuestaContinuar
	Si respuestaContinuar='n' O respuestaContinuar='N' Entonces
		continuar <- Falso
	SiNo
		continuar <- Verdadero
	FinSi
FinFunci�n

Funci�n mostrarResultados(contadorPositivos,contadorNegativos,contadorCeros,contador)
	promedioPositivos <- calcularPromedio(contadorPositivos,contador)
	Escribir 'Su promedio de positvos es: ', promedioPositivos
	promedioNegativos <- calcularPromedio(contadorNegativos,contador)
	Escribir 'Su promedio de negativos es: ', promedioNegativos
	promedioCeros <- calcularPromedio(contadorCeros,contador)
	Escribir 'Su promedio de ceros es: ', promedioCeros
FinFunci�n

Algoritmo ejercicio04
	Definir contador, contadorCeros, contadorNegativos, contadorPositivos Como Entero
	continuar <- Verdadero
	contadorPositivos <- 0
	contadorNegativos <- 0
	contadorCeros <- 0
	contador <- 0
	Mientras continuar Hacer
		Escribir 'Ingrese un valor: '
		Leer nuevoValor
		contador <- sumarValor(contador,1)
		Si nuevoValor>0 Entonces
			contadorPositivos <- sumarValor(contadorPositivos,1)
		SiNo
			Si nuevoValor<0 Entonces
				contadorNegativos <- sumarValor(contadorNegativos,1)
			SiNo
				contadorCeros <- sumarValor(contadorCeros,1)
			FinSi
		FinSi
		continuar <- deseaContinuar
	FinMientras
	mostrarResultados(contadorPositivos,contadorNegativos,contadorCeros,contador)
FinAlgoritmo
