// 5 - Ingresarlos datos de facturación de una empresa. 
// Se conoce Número de factura, Número de artículo, Cantidad vendida y Precio unitario 
// Los datos finalizan con numero de factura = 0, cada factura sólo tiene un número de artículo, 
// y existen sólo tres artículos.
Algoritmo ejercicio05
	continuar <- Verdadero
	Mientras continuar Hacer
		Escribir 'Ingre una factura:'
		Leer nuevaFactura
		Si nuevaFactura=0 Entonces
			continuar <- Falso
		FinSi
		Escribir 'Ingrese numero de articulo:'
		Leer nuevoArticulo
		Escribir 'Ingrese cantidad'
		Leer nuevaCantidad
		Escribir 'Ingrese precio unitario'
		Leer precioUnitario
		Escribir '______________________________'
		Escribir 'factura nro: ', nuevaFactura
		Escribir '     articulo: ', nuevoArticulo
		Escribir '     cantidad: ', nuevaCantidad
		Escribir '     precio: ', precioUnitario
		Escribir '______________________________'
	FinMientras
FinAlgoritmo
