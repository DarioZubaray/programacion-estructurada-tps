// 6 - Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor
Función maximoRegistro(nuevaTemperatura,mayorTemperatura Por Referencia)
	Si nuevaTemperatura>mayorTemperatura Entonces
		mayorTemperatura <- nuevaTemperatura
	FinSi
FinFunción

Función minimoRegistro(nuevaTemperatura,menorTemperatura Por Referencia)
	Si nuevaTemperatura<menorTemperatura Entonces
		menorTemperatura <- nuevaTemperatura
	FinSi
FinFunción

Función mostrarResultados(mayorTemperatura,menorTemperatura)
	Escribir 'La mayor temperatura registrada es: ', mayorTemperatura
	Escribir 'La menor temperatura es: ', menorTemperatura
FinFunción

Algoritmo ejercicio06
	Definir mayorTemperatura, menorTemperatura Como Entero
	Definir continuar Como Lógico
	continuar <- Verdadero
	mayorTemperatura <- 0
	menorTemperatura <- 0
	Mientras continuar Hacer
		Escribir 'Ingrese una temperatura: '
		Leer nuevaTemperatura
		Si (nuevaTemperatura)=(1000) Entonces
			continuar <- Falso
		SiNo
			maximoRegistro(nuevaTemperatura,mayorTemperatura)
			minimoRegistro(nuevaTemperatura,menorTemperatura)
		FinSi
	FinMientras
	mostrarResultados(mayorTemperatura,menorTemperatura)
FinAlgoritmo
