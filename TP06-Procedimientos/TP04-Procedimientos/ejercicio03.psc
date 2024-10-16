// 3 - Sobre elejercicio anterior indicar cu?ntas estan entre $ 400 y $ 700 inclusive.
// imprimir el resultado
Función variableRetorno <- pertenceARango (minimo,maximo,nuevaFactura)
	Si nuevaFactura>minimo Y nuevaFactura<=maximo Entonces
		variableRetorno <- 1
	SiNo
		variableRetorno <- 0
	FinSi
FinFunción

Algoritmo ejercicio03
	Definir acumulador, contador, contadorEnRango Como Entero
	acumulador <- 0
	contador <- 0
	contadorEnRango <- 0
	continuar <- Verdadero
	Mientras continuar Hacer
		Escribir 'Ingrese una factura:'
		Leer nuevaFactura
		Si nuevaFactura=0 Entonces
			continuar <- Falso
		SiNo
			acumulador <- acumulador+nuevaFactura
			contador <- contador+1
			contadorEnRango <- contadorEnRango+pertenceARango(400,700,nuevaFactura)
		FinSi
	FinMientras
	Escribir 'El total de facturas es: ', acumulador
	Escribir 'Total de facturas en el rango de $400 a $700(inclusive) es: ', contadorEnRango
FinAlgoritmo
