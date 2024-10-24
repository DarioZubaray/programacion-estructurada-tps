// 6 - Desarrolle un programa que almacene en un vector el número de días que tiene cada mes 
// (supondremos que es un año no bisiesto), pida al usuario que le indique un mes 
// (1=enero, 12=diciembre) y muestre en pantalla el número de días que tiene ese mes
Algoritmo ejercicio06
	Dimensionar miVector(12)
	miVector[1] <- 31
	miVector[2] <- 28
	miVector[3] <- 31
	miVector[4] <- 30
	miVector[5] <- 31
	miVector[6] <- 30
	miVector[7] <- 31
	miVector[8] <- 31
	miVector[9] <- 30
	miVector[10] <- 31
	miVector[11] <- 30
	miVector[12] <- 31
	Escribir 'Indique un mes para saber su cantidad de dias: '
	Leer mesIngresado
	Escribir 'El mes ingresado tiene ', miVector[mesIngresado], ' dias.'
FinAlgoritmo
