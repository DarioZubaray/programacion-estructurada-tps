// 3. Ingresar los tres lados de un tri�ngulo e indicar que tipo de tri�ngulo es.
Algoritmo ejercicio03
	Escribir 'Ingrese un primer lado del tri�ngulo: '
	Leer ladoUno
	Escribir 'Ingrese un segundo lado del tri�ngulo: '
	Leer ladoDos
	Escribir 'Ingrese un tercer lado del tri�ngulo: '
	Leer ladoTres
	Si ladoUno==ladoDos Y ladoDos==ladoTres Entonces
		Escribir 'Es un tri�gunlo con todos sus lados iguales. Equil�tero'
	SiNo
		Si (ladoUno==ladoDos Y ladoDos<>ladoTres) O (ladoUno<>ladoDos Y ladoUno==ladoTres) Entonces
			Escribir 'Es un tri�gunlo con algunos de sus lados iguales. Is�celes'
		SiNo
			Escribir 'Es un tri�ngulos con todos sus lados desiguales: Escaleno'
		FinSi
	FinSi
FinAlgoritmo
