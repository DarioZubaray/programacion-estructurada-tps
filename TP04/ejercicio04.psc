// 4 - Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros
Algoritmo ejercicio04
	continuar <- Verdadero
	contadorPositivos <- 0
	contadorNegativos <- 0
	contadorCeros <- 0
	contador <- 0
	Mientras continuar Hacer
		Escribir 'Ingre un valor:'
		Leer nuevoValor
		contador <- contador+1
		Si nuevoValor>0 Entonces
			contadorPositivos <- contadorPositivos+1
		SiNo
			Si nuevoValor<0 Entonces
				contadorNegativos <- contadorNegativos+1
			SiNo
				contadorCeros <- contadorCeros+1
			FinSi
		FinSi
		Escribir 'Desea ingresar un nuevo valor? s/n'
		Leer respuestaContinuar
		Si respuestaContinuar='n' O respuestaContinuar='N' Entonces
			continuar <- Falso
		FinSi
	FinMientras
	promedioPositivos <- contadorPositivos*100/contador
	Escribir 'Su promedio de positvos es: ', promedioPositivos
	promedioNegativos <- contadorNegativos*100/contador
	Escribir 'Su promedio de negativos es: ', promedioNegativos
	promedioCeros <- contadorCeros*100/contador
	Escribir 'Su promedio de ceros es: ', promedioCeros
FinAlgoritmo
