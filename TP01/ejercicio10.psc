// 10. Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $500 por mes 
// más un plus del 10 MOD  del precio sobre cada vehículo vendido y un valor constante de 50 pesos por cada uno de ellos, 
// se ingresa el valor del vehículo y cuantos vehículos de ese tipo vendió, calcular su sueldo e imprimirlo.
Algoritmo ejercicio10
	Escribir 'Ingrese el valor del vehículo:'
	Leer valorVehiculo
	Escribir 'Ingrese cantidad de vehículos vendidos de este tipo:'
	Leer cantidadVehiculo
	sueldoBase <- 500
	plusPorValor <- 0.1*(cantidadVehiculo*valorVehiculo)
	plusPorCantidad <- 50*cantidadVehiculo
	sueldo <- sueldoBase+plusPorValor+plusPorCantidad
	Escribir 'El sueldo final es de $', sueldo
	Escribir '-------------------------------'
	Escribir 'Sueldo base de $', sueldoBase
	Escribir 'Plus por cantidad: $', plusPorCantidad
	Escribir 'Plus porcentual del $', plusPorValor
FinAlgoritmo
