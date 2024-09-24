// 5 - Ingresarlos datos de facturaci�n de una empresa. 
// Se conoce N�mero de factura, N�mero de art�culo, Cantidad vendida y Precio unitario 
// Los datos finalizan con numero de factura = 0, cada factura s�lo tiene un n�mero de art�culo, 
// y existen s�lo tres art�culos.
Algoritmo ejercicio05
	continuar <- Verdadero
	Mientras continuar Hacer
		Escribir 'Ingrese una factura:'
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
