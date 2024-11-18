Función cargarEmpleados(numeroEmpleados)
	Definir indice Como Entero
	Para indice<-1 Hasta 10 Con Paso 1 Hacer
		numeroEmpleados[indice] <- indice*11
	FinPara
FinFunción

Función valorRetorno <- busquedaSecuencial(numeroVector,numeroVariable)
	Definir valorRetorno, indice Como Entero
	valorRetorno <- -1
	Para indice<-1 Hasta 10 Con Paso 1 Hacer
		Si (numeroVector[indice])=(numeroVariable) Entonces
			valorRetorno <- indice
		FinSi
	FinPara
FinFunción

Función indiceLampara <- buscarLampara(numerolamparas,numeroLampara)
	Definir indiceLampara Como Entero
	indiceLampara <- busquedaSecuencial(numerolamparas,numeroLampara)
FinFunción

Función indiceEmpleado <- buscarEmpleado(numeroEmpleados,numeroEmpleado)
	Definir indiceEmpleado Como Entero
	indiceEmpleado <- busquedaSecuencial(numeroEmpleados,numeroEmpleado)
FinFunción

Función descontarStock(stockLamparas,indiceLampara,cantidadPedida,pedidosEmpleados,indiceEmpleado,numeroEmpleados,vendedorLampara)
	Definir stockActual Como Entero
	stockActual <- stockLamparas[indiceLampara]
	Si stockActual>=cantidadPedida Entonces
		stockLamparas[indiceLampara] <- stockLamparas[indiceLampara]-cantidadPedida
		pedidosEmpleados[indiceEmpleado] <- pedidosEmpleados[indiceEmpleado]+1
		maxVendedorLampara <- vendedorLampara[indiceLampara]
		Si maxVendedorLampara<cantidadPedida Entonces
			vendedorLampara[indiceLampara] <- numeroEmpleados[indiceEmpleado]
		FinSi
	SiNo
		Escribir 'No se puede descontar el stock solicitado. Cancelando.'
	FinSi
FinFunción

Algoritmo parcial02
	Escribir '============================================'
	Definir numeroLampara, precioLampara, stockLampara Como Entero
	Dimensionar numerolamparas(10), precioLamparas(10), stockLamparas(10), vendedorLampara(10)
	Definir i Como Entero
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir 'Ingrese codigo de lampara: (3 digitos)'
		Leer numeroLampara
		numerolamparas[i] <- numeroLampara
		Escribir 'Ingrese el precio para lampara numero ', numeroLampara
		Leer precioLampara
		precioLamparas[i] <- precioLampara
		Escribir 'Ingrese el stock para lampara numero ', numeroLampara
		Leer stockLampara
		stockLamparas[i] <- stockLampara
		Escribir 'Ingreso - lampara nro: ', numeroLampara, ', precio: ', precioLampara, ', stock: ', stockLampara
		Escribir '+++'
	FinPara
	Definir numeroPedido, indiceLampara, numeroEmpleado, indiceEmpleado, cantidadPedida Como Entero
	Dimensionar numeroEmpleados(10), pedidosEmpleados(10)
	cargarEmpleados(numeroEmpleados)
	Escribir '============================================'
	Escribir 'Ingrese numero de pedido: (0 para terminar)'
	Leer numeroPedido
	Mientras  NO (numeroPedido)=(0) Hacer
		Escribir 'Ingrese el codigo de lampara: (3 digitos)'
		Leer numeroLampara
		indiceLampara <- buscarLampara(numerolamparas,numeroLampara)
		Si (indiceLampara)=(-1) Entonces
			Escribir 'No se encuentra disponible el codigo lampara ', numeroLampara
		SiNo
			Escribir 'Ingrese el numero de empleado: (2 digitos)'
			Leer numeroEmpleado
			indiceEmpleado <- buscarEmpleado(numeroEmpleados,numeroEmpleado)
			Escribir 'Ingrese la cantidad pedida: '
			Leer cantidadPedida
			descontarStock(stockLamparas,indiceLampara,cantidadPedida,pedidosEmpleados,indiceEmpleado,numeroEmpleados,vendedorLampara)
		FinSi
		Escribir '============================================'
		Escribir 'Ingrese numero de pedido: (0 para terminar)'
		Leer numeroPedido
	FinMientras
	Definir empleado55 Como Entero
	empleado55 <- buscarEmpleado(numeroEmpleados,55)
	Escribir '============================================'
	Escribir 'Cantidad de pedidos que atendió el empleado 55: ', pedidosEmpleados[empleado55]
	Escribir '============================================'
	Escribir 'Para cada lámpara, el nro de empleado que vendió la mayor cantidad en un pedido: '
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir 'Lampara numero: ', numerolamparas[i], ', vendedorLampara: ', vendedorLampara[i]
	FinPara
	Escribir '============================================'
	Escribir 'Stock final actualizado de cada nro de lámpara: '
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir 'Lampara numero: ', numerolamparas[i], ', stock: ', stockLamparas[i]
	FinPara
	Escribir '============================================'
FinAlgoritmo
