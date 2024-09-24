// 3 - Sobre elejercicio anterior indicar cuántas estan entre $ 400 y $ 700 inclusive.
// imprimir el resultado
Algoritmo ejercicio03
	continuar <- Verdadero
	acumulador <- 0
	contador <- 0
	contadorEnRango <- 0
	Mientras continuar Hacer
		Escribir 'Ingre una factura:'
		Leer nuevaFactura
		acumulador <- acumulador+nuevaFactura
		contador <- contador+1
		Si nuevaFactura=0 Entonces
			continuar <- Falso
		FinSi
		Si nuevaFactura>400 Y nuevaFactura<=700 Entonces
			contadorEnRango <- contadorEnRango+1
		FinSi
	FinMientras
	Escribir 'El total de facturas es: ', acumulador
	Escribir 'Total de facturas en el rango de $400 a $700(inclusive) es: ', contadorEnRango
FinAlgoritmo
