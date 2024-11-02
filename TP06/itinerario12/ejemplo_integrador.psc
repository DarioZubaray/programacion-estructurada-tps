// Se ingresan n° de factura, n° de vendedor e importe.
// Existen 5 vendedores que se llevan una comision del 10 MOD  por cada venta, 
// se termina con número de factura = 0
// y se desea conocer:
// - El monto total de facturas
// - Las comisiones de cada vendedor
// - El porcentual de ventas de cada vendedor
// - El promedio del valor de las facturas
Algoritmo ejemplo_integrador
	Definir cantidadFacturas, totalFacturas Como Entero
	Dimensionar ventasPorVendedor(5)
	Dimensionar comisionesPorVendedor(5)
	Escribir 'Ingrese el nro de factura: '
	Leer nroFact
	Mientras  NO (nroFact)=(0) Hacer
		Escribir 'Ingrese el nro de vendedor: '
		Leer nroVendedor
		Escribir 'Ingrese el importe de la factura: '
		Leer importe
		ventasPorVendedor[nroVendedor] <- ventasPorVendedor[nroVendedor]+importe
		comisionesPorVendedor[nroVendedor] <- comisionesPorVendedor[nroVendedor]+(importe*0.1)
		cantidadFacturas <- cantidadFacturas+1
		totalFacturas <- totalFacturas+importe
		Escribir 'Ingrese el nro de factura: '
		Leer nroFact
	FinMientras
	Escribir 'La caja del dia es ', totalFacturas
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Escribir 'Las comisiones del vendedor ', i, ' es de ', comisionesPorVendedor[i]
	FinPara
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		porcentual <- 0
		Si totalFacturas>0 Entonces
			porcentual <- (ventasPorVendedor[i]*100)/totalFacturas
		FinSi
		Escribir 'El porcentual de la caja del vendedor ', i, ' es de ', porcentual
	FinPara
	Si cantidadFacturas>0 Entonces
		Escribir 'El valor promedio de las facturas es ', totalFacturas/cantidadFacturas
	FinSi
FinAlgoritmo
