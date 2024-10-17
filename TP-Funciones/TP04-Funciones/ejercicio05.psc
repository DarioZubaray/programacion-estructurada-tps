Función continuar <- registrarFactura(nuevaFactura)
	Escribir 'Ingrese numero de articulo: '
	Leer nuevoArticulo
	Escribir 'Ingrese cantidad: '
	Leer nuevaCantidad
	Escribir 'Ingrese precio unitario: '
	Leer precioUnitario
	Escribir '______________________________'
	Escribir 'factura nro: ', nuevaFactura
	Escribir '   articulo: ', nuevoArticulo
	Escribir '   cantidad: ', nuevaCantidad
	Escribir '     precio: ', precioUnitario
	Escribir '      total: ', nuevaCantidad*precioUnitario
	Escribir '______________________________'
	continuar <- Verdadero
FinFunción

// 5 - Ingresarlos datos de facturacion de una empresa. 
// Se conoce Numero de factura, Numero de articulo, Cantidad vendida y Precio unitario 
// Los datos finalizan con numero de factura = 0, cada factura solo tiene un numero de articulo, 
// y existen solo tres articulos.
Algoritmo ejercicio05
	continuar <- Verdadero
	Mientras continuar Hacer
		Escribir 'Ingrese una factura: '
		Leer nuevaFactura
		Si nuevaFactura=0 Entonces
			continuar <- Falso
		SiNo
			continuar <- registrarFactura(nuevaFactura)
		FinSi
	FinMientras
FinAlgoritmo
