Algoritmo parcial01
	Definir cuando, horas, horasContratadas, totalSemana, totalFinde, montoTotalOperacion Como Entero
	valorSemana <- 50
	valorFinde <- 65
	Escribir 'Ingrese periodo: (1-semana, 2-Finde, 3-Salir)'
	Leer cuando
	Repetir
		Escribir 'Ingrese el total de horas: '
		Leer horas
		horasContratadas <- horasContratadas+horas
		Si (cuando)=(1) Entonces
			totalSemana <- totalSemana+(horas*valorSemana)
		FinSi
		Si (cuando)=(2) Entonces
			totalFinde <- totalFinde+(horas*valorFinde)
		FinSi
		Escribir 'Ingrese periodo: (1-semana, 2-Finde, 3-Salir)'
		Leer cuando
	Hasta Que (cuando)=(3)
	Escribir 'Cantidad de horas contratadas: ', horasContratadas, 'hs'
	montoTotalOperacion <- totalSemana+totalFinde
	Escribir 'Monto total de la operación: $', montoTotalOperacion
FinAlgoritmo
