// 6. Ingresar los lados de un rect�ngulo y calcular su diagonal principal, superficie y per�metro. Imprima los resultados solicitados.
Algoritmo ejercicio06
	Escribir 'Ingrese un lado de un rect�ngulo: '
	Leer ladoUno
	Escribir 'Ingrese otro lado del rect�ngulo: '
	Leer ladoDos
	diagonalPrincipal <- raiz(ladoUno*ladoUno+ladoDos*ladoDos)
	Escribir 'La diagonal principal del rect�ngulo es: ', diagonalPrincipal
	superficie <- ladoUno*ladoDos
	Escribir 'La superficie del rect�ngulo es: ', superficie
	perimetro <- 2*(ladoUno+ladoDos)
	Escribir 'El perimetro del rect�ngulo es: ', perimetro
FinAlgoritmo
