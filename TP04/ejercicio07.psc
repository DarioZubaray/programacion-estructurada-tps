// 7 - En una carrera de autos se ingresan el n�mero de auto y su tiempo, 
// indicar e imprimir cu�l gan� y c�al fue el �ltimo
Algoritmo ejercicio07
	continuar <- Verdadero
	Definir mejorTiempo Como Entero
	Definir mejorAuto Como Cadena
	Definir peorTiempo Como Entero
	Definir peorAuto Como Cadena
	Mientras continuar Hacer
		Escribir 'Ingrese numero de auto:'
		Leer nuevoAuto
		Escribir 'Ingrese su tiempo en seg:'
		Leer tiempoSegundos
		Si mejorTiempo=0 O tiempoSegundos<mejorTiempo Entonces
			mejorTiempo <- tiempoSegundos
			mejorAuto <- nuevoAuto
		FinSi
		Si tiempoSegundos>peorTiempo Entonces
			peorTiempo <- tiempoSegundos
			peorAuto <- nuevoAuto
		FinSi
		Escribir 'Desea ingresar un nuevo tiempo? s/n'
		Leer respuestaContinuar
		Si respuestaContinuar='n' O respuestaContinuar='N' Entonces
			continuar <- Falso
		FinSi
	FinMientras
	Escribir 'El auto mas rapido fue: ', mejorAuto, ' con un tiempo de: ', mejorTiempo
	Escribir 'El auto mas lento fue: ', peorAuto, ' con un tiempo de: ', peorTiempo
FinAlgoritmo
