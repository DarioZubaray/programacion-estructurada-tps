// 7 - En una carrera de autos se ingresan el numero de auto y su tiempo, 
// indicar e imprimir cual gano y cual fue el ultimo
Función deseaContinuar(continuar Por Referencia)
	Escribir 'Desea ingresar un nuevo valor? (s/n)'
	Leer respuestaContinuar
	Si respuestaContinuar='n' O respuestaContinuar='N' Entonces
		continuar <- Falso
	SiNo
		continuar <- Verdadero
	FinSi
FinFunción

Función validarMejorTiempo(tiempoSegundos,nuevoAuto,mejorTiempo Por Referencia,mejorAuto Por Referencia)
	Si mejorTiempo=0 O tiempoSegundos<mejorTiempo Entonces
		mejorTiempo <- tiempoSegundos
		mejorAuto <- nuevoAuto
	FinSi
FinFunción

Función validarPeorTiempo(tiempoSegundos,nuevoAuto,peorTiempo Por Referencia,peorAuto Por Referencia)
	Si tiempoSegundos>peorTiempo Entonces
		peorTiempo <- tiempoSegundos
		peorAuto <- nuevoAuto
	FinSi
FinFunción

Función mostrarResultados(mejorAuto,mejorTiempo,peorAuto,peorTiempo)
	Escribir 'El auto mas rapido fue: ', mejorAuto, ' con un tiempo de: ', mejorTiempo
	Escribir 'El auto mas lento fue: ', peorAuto, ' con un tiempo de: ', peorTiempo
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
		validarMejorTiempo(tiempoSegundos,nuevoAuto,mejorTiempo,mejorAuto)
		validarMejorTiempo(timpoSegundos,nuevoAuto,peorTiempo,peorAuto)
		deseaContinuar(continuar)
	FinMientras
	mostrarResultados(mejorAuto,mejorTiempo,peorAuto,peorTiempo)
FinAlgoritmo
