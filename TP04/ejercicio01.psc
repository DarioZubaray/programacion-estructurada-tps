// 1 - Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados
Algoritmo ejercicio01
	continuar <- Verdadero
	acumulador <- 0
	contador <- 0
	Mientras continuar Hacer
		Escribir 'Ingre un sueldo:'
		Leer nuevoSueldo
		acumulador <- acumulador+nuevoSueldo
		contador <- contador+1
		Escribir 'Desea ingresar un nuevo sueldo? s/n'
		Leer respuestaContinuar
		Si respuestaContinuar='n' O respuestaContinuar='N' Entonces
			continuar <- Falso
		FinSi
	FinMientras
	Escribir 'El total de sueldo es: ', acumulador
	promedioSueldos <- acumulador/contador
	Escribir 'Su promedio es: ', promedioSueldos
FinAlgoritmo
