// 3. Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es.
Algoritmo ejercicio03
	Escribir 'Ingrese un primer lado del triángulo: '
	Leer ladoUno
	Escribir 'Ingrese un segundo lado del triángulo: '
	Leer ladoDos
	Escribir 'Ingrese un tercer lado del triángulo: '
	Leer ladoTres
	Si ladoUno==ladoDos Y ladoDos==ladoTres Entonces
		Escribir 'Es un triágunlo con todos sus lados iguales. Equilátero'
	SiNo
		Si (ladoUno==ladoDos Y ladoDos<>ladoTres) O (ladoUno<>ladoDos Y ladoUno==ladoTres) Entonces
			Escribir 'Es un triágunlo con algunos de sus lados iguales. Isóceles'
		SiNo
			Escribir 'Es un triángulos con todos sus lados desiguales: Escaleno'
		FinSi
	FinSi
FinAlgoritmo
