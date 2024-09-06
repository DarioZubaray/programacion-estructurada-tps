// 6. Ingresar los lados de un rectángulo y calcular su diagonal principal, superficie y perímetro. Imprima los resultados solicitados.
Algoritmo ejercicio06
	Escribir 'Ingrese un lado de un rectángulo: '
	Leer ladoUno
	Escribir 'Ingrese otro lado del rectángulo: '
	Leer ladoDos
	diagonalPrincipal <- raiz(ladoUno*ladoUno+ladoDos*ladoDos)
	Escribir 'La diagonal principal del rectángulo es: ', diagonalPrincipal
	superficie <- ladoUno*ladoDos
	Escribir 'La superficie del rectángulo es: ', superficie
	perimetro <- 2*(ladoUno+ladoDos)
	Escribir 'El perimetro del rectángulo es: ', perimetro
FinAlgoritmo
