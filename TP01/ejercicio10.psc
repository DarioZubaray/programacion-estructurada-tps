// 10. Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $500 por mes 
// m�s un plus del 10 MOD  del precio sobre cada veh�culo vendido y un valor constante de 50 pesos por cada uno de ellos, 
// se ingresa el valor del veh�culo y cuantos veh�culos de ese tipo vendi�, calcular su sueldo e imprimirlo.
Algoritmo ejercicio10
	Escribir 'Ingrese el valor del veh�culo:'
	Leer valorVehiculo
	Escribir 'Ingrese cantidad de veh�culos vendidos de este tipo:'
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
