// 7 - En una carrera de autos se ingresan el numero de auto y su tiempo, 
// indicar e imprimir cual gano y cual fue el ultimo
Función continuar <- deseaContinuar
	Escribir 'Desea ingresar un nuevo valor? (s/n)'
	Leer respuestaContinuar
	Si respuestaContinuar='n' O respuestaContinuar='N' Entonces
		continuar <- Falso
	SiNo
		continuar <- Verdadero
	FinSi
FinFunción

Algoritmo ejercicio07
	continuar <- Verdadero
	Definir mejorTiempo, peorTiempo Como Entero
	Definir mejorAuto, peorAuto Como Cadena
	Mientras continuar Hacer
		Escribir 'Ingrese numero de auto: '
		Leer nuevoAuto
		Escribir 'Ingrese su tiempo en seg: '
		Leer tiempoSegundos
		Si mejorTiempo=0 O tiempoSegundos<mejorTiempo Entonces
			mejorTiempo <- tiempoSegundos
			mejorAuto <- nuevoAuto
		FinSi
		Si tiempoSegundos>peorTiempo Entonces
			peorTiempo <- tiempoSegundos
			peorAuto <- nuevoAuto
		FinSi
		continuar <- deseaContinuar
	FinMientras
	Escribir 'El auto mas rapido fue: ', mejorAuto, ' con un tiempo de: ', mejorTiempo
	Escribir 'El auto mas lento fue: ', peorAuto, ' con un tiempo de: ', peorTiempo
FinAlgoritmo
