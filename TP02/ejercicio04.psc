// 4. Ingresar tres valores, sumarlos, calcular el promedio 
// e indicar e imprimir cuál de estos valores es mayor al promedio
Algoritmo ejercicio04
	Escribir 'Ingrese un primer valor: '
	Leer valorUno
	Escribir 'Ingrese un segundo valor: '
	Leer valorDos
	Escribir 'Ingrese un tercer valor: '
	Leer valorTres
	resultadoSuma <- valorUno+valorDos+valorTres
	Escribir 'El resultado de la sumatoria es: ', resultadoSuma
	promedio <- resultadoSuma/3
	Escribir 'El promedio de los números ingresados es: ', promedio
	Si valorUno>valorDos Entonces
		Si valorUno>valorTres Entonces
			Escribir 'El valor ', valorUno, ' es el mayor.'
		SiNo
			Escribir 'El valor ', valorTres, ' es el mayor.'
		FinSi
	SiNo
		Si valorDos>valorTres Entonces
			Escribir 'El valor ', valorDos, ' es el mayor.'
		SiNo
			Escribir 'El valor ', valorTres, ' es el mayor.'
		FinSi
	FinSi
FinAlgoritmo
