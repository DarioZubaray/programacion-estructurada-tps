// 1 - Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados
Funci�n obtenerPromedioSueldos(promedioSueldos Por Referencia)
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
FinFunci�n

Algoritmo ejercicio01
	Definir promedioSueldos Como Real
	obtenerPromedioSueldos(promedioSueldos)
	Escribir 'Su promedio es: ', promedioSueldos
FinAlgoritmo
