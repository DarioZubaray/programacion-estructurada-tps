// 4- Un restaurant tiene 6 mozos y 12 mesas, cada vez que cobran una mesa se anotanlos siguientes datos, que terminan con número de factura = 0
// Número defactura, Número de mozo, Número de mesa, Cantidad de personas que comieron, Monto de la cuenta
// Se desea saber lo siguiente:
// - Cantidad de personas atendidas por cada mozo
// - Cantidad de facturas realizadas
// - Caja diaria realizada
// - Monto facturado por cada mesa en total
// - Porcentual facturado por cada mozo sobre el total
// - Si a cada mozo se le da el 5 MOD  de su venta cuánto le corresponde a cada uno
// - Cuál mozo atendió más personas en total
// - Cuántas facturas superaron $ 45
// - Mesa a la que se facturó más veces, o sea que más recambio de clientes tuvo
Algoritmo ejercicio04
	Definir PERSONAS_ATENDIDAS, MONTO_MOZO Como Entero
	PERSONAS_ATENDIDAS <- 1
	MONTO_MOZO <- 2
	Definir MONTO_MESA, CANTIDAD_FACTURAS Como Entero
	MONTO_MESA <- 1
	CANTIDAD_FACTURAS <- 2
	Definir totalMozos, totalMesas Como Entero
	totalMozos <- 6
	totalMesas <- 12
	Dimensionar mozos(totalMozos,2)
	Dimensionar mesas(totalMesas,2)
	Definir facturasRealizadas, cajaDiaria, facturaMayor45 Como Entero // personaAtendidas, montoMozo
	Escribir 'Ingrese numero de factura: ' // montoFacturado, cantidadFacturas
	Leer numeroFactura
	Mientras  NO (numeroFactura)=(0) Hacer
		facturasRealizadas <- facturasRealizadas+1
		Escribir 'Ingrese numero de mozo: (1-', totalMozos, ')'
		Leer numeroMozo
		Escribir 'Ingrese numero de mesa: (1-', totalMesas, ')'
		Leer numeroMesa
		Escribir 'Ingrese cantidad de personas: '
		Leer numeroPersonas
		mozos[numeroMozo,PERSONAS_ATENDIDAS]<-mozos[numeroMozo,PERSONAS_ATENDIDAS]+numeroPersonas
		Escribir 'Ingrese monto de la cuenta: '
		Leer montoCuenta
		cajaDiaria <- cajaDiaria+montoCuenta
		mozos[numeroMozo,MONTO_MOZO]<-mozos[numeroMozo,MONTO_MOZO]+montoCuenta
		mesas[numeroMesa,MONTO_MESA]<-mesas[numeroMesa,MONTO_MESA]+montoCuenta
		mesas[numeroMesa,CANTIDAD_FACTURAS]<-mesas[numeroMesa,CANTIDAD_FACTURAS]+1
		Si montoCuenta>45 Entonces
			facturaMayor45 <- facturaMayor45+1
		FinSi
		Escribir 'Ingrese numero de factura: '
		Leer numeroFactura
	FinMientras
	Escribir 'Cantidad de facturas realizadas: ', facturasRealizadas
	Escribir 'Caja diaria realizada: ', cajaDiaria
	Definir masPersonasAtendidas, mozoMasPersonasAtendidas Como Entero
	Escribir 'Total de personas atendidas por cada mozo: '
	Para iterador<-1 Hasta totalMozos Con Paso 1 Hacer
		Escribir '  mozo n°', iterador, ' atendio: ', mozos[iterador,PERSONAS_ATENDIDAS]
		Si masPersonasAtendidas<mozos[iterador,PERSONAS_ATENDIDAS] Entonces
			masPersonasAtendidas <- mozos[iterador,PERSONAS_ATENDIDAS]
			mozoMasPersonasAtendidas <- iterador
		FinSi
	FinPara
	Escribir 'Monto facturado por cada mesa en total: '
	Para iterador<-1 Hasta totalMesas Con Paso 1 Hacer
		Escribir '  mesa n°', iterador, ' facturo: $', mesas[iterador,MONTO_MESA]
	FinPara
	Escribir 'Porcentual facturado por cada mozo sobre el total: '
	Para iterador<-1 Hasta totalMozos Con Paso 1 Hacer
		porcentual <- mozos[iterador,MONTO_MOZO]*100/cajaDiaria
		Escribir '  mozo n°', iterador, ' porcentual: ', porcentual Sin Saltar
		comision <- mozos[iterador,MONTO_MOZO]*0.05
		Escribir ', comision: $', comision
	FinPara
	Escribir 'El mozo n°', mozoMasPersonasAtendidas, ' atendió más personas en total (', masPersonasAtendidas, ')'
	Escribir 'Total facturas que superaron $ 45: ', facturaMayor45
	Escribir 'Mesa a la que se facturó más veces: 'Sin Saltar
	Definir masFacturas, mesaMasFacturas Como Entero
	Para iterador<-1 Hasta totalMesas Con Paso 1 Hacer
		Si masFacturas<mesas[iterador,CANTIDAD_FACTURAS] Entonces
			masFacturas <- mesas[iterador,CANTIDAD_FACTURAS]
			mesaMasFacturas <- iterador
		FinSi
	FinPara
	Escribir mesaMasFacturas
FinAlgoritmo
