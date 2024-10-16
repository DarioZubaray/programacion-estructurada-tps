// 1 - Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados
Función promedioSueldos <- obtenerPromedioSueldos
	continuar <- Verdadero
	acumulador <- 0
	contador <- 0
	Mientras continuar Hacer
		Escribir 'Ingrese un sueldo:'
		Leer nuevoSueldo
		acumulador <- acumulador+nuevoSueldo
		contador <- contador+1
		Escribir 'Desea ingresar un nuevo sueldo? s/n'
		Leer respuestaContinuar
		Si (respuestaContinuar)=('n') O (respuestaContinuar)=('N') Entonces
			continuar <- Falso
		FinSi
	FinMientras
	Escribir 'El total de sueldo es: ', acumulador
	promedioSueldos <- acumulador*1.0/contador
FinFunción

Algoritmo ejercicio01
	Definir promedioSueldos Como Real
	promedioSueldos <- obtenerPromedioSueldos
	Escribir 'Su promedio es: ', promedioSueldos
FinAlgoritmo
