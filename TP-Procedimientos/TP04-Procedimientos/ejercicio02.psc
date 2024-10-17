// 2 . Ingresar facturas hasta nro de factura = 0, 
// sumar sus importes y cuales y cuantas superan los $1000. Imprimir los resultados
Función sumarValores(valor1 Por Referencia,valor2)
	valor1 <- valor1+valor2
FinFunción

Función mostrarResultados(acumulador,contadorMayorAMil)
	Escribir 'El total de facturas es: ', acumulador
	Escribir 'Total de facturas mayores a $1000 es: ', contadorMayorAMil
FinFunción

Algoritmo ejercicio02
	continuar <- Verdadero
	acumulador <- 0
	contador <- 0
	contadorMayorAMil <- 0
	Mientras continuar Hacer
		Escribir 'Ingrese una factura:'
		Leer nuevaFactura
		sumarValores(acumulador,nuevaFactura)
		sumarValores(contador,1)
		Si nuevaFactura=0 Entonces
			continuar <- Falso
		FinSi
		Si nuevaFactura>=1000 Entonces
			Escribir 'Esta factura supera los $1000'
			sumarValores(contadorMayorAMil,1)
		FinSi
	FinMientras
	mostrarResultados(acumulador,contadorMayorAMil)
FinAlgoritmo
