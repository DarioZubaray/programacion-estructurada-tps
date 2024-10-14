// 2 . Ingresar facturas hasta nro de factura = 0, 
// sumar sus importes y c�ales y cuantas superan los $1000. Imprimir los resultados
Algoritmo ejercicio02
	continuar <- Verdadero
	acumulador <- 0
	contador <- 0
	contadorMayorAMil <- 0
	Mientras continuar Hacer
		Escribir 'Ingrese una factura:'
		Leer nuevaFactura
		acumulador <- acumulador+nuevaFactura
		contador <- contador+1
		Si nuevaFactura=0 Entonces
			continuar <- Falso
		FinSi
		Si nuevaFactura>=1000 Entonces
			Escribir 'Esta factura supera los $1000'
			contadorMayorAMil <- contadorMayorAMil+1
		FinSi
	FinMientras
	Escribir 'El total de facturas es: ', acumulador
	Escribir 'Total de facturas mayores a $1000 es: ', contadorMayorAMil
FinAlgoritmo
