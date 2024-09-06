// 5. Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, 
// indicar e imprimir cuál de estas sumas es mayor
Algoritmo ejercicio05
	Escribir 'Ingrese un primer número: '
	Leer numeroUno
	Escribir 'Ingrese un segundo número: '
	Leer numeroDos
	primeraSuma <- numeroUno+numeroDos
	Escribir 'Ingrese un tercer número: '
	Leer numeroTres
	Escribir 'Ingrese un cuarto número: '
	Leer numeroCuatro
	segundaSuma <- numeroTres+numeroCuatro
	Si primeraSuma>=segundaSuma Entonces
		Escribir 'La primera suma es mayor (o igual)'
		Escribir numeroUno, ' + ', numeroDos, ' = ', primeraSuma, ' >= ', numeroTres, ' + ', numeroCuatro, ' = ', segundaSuma
	SiNo
		Escribir 'La segunda suma es mayor'
		Escribir numeroUno, ' + ', numeroDos, ' = ', primeraSuma, ' < ', numeroTres, ' + ', numeroCuatro, ' = ', segundaSuma
	FinSi
FinAlgoritmo
