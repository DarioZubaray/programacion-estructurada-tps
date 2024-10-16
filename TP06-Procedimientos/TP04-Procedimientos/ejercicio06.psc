// 6 - Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor
Función temperatura <- maximoRegistro(nuevaTemperatura,mayorTemperatura)
	Si nuevaTemperatura>mayorTemperatura Entonces
		temperatura <- nuevaTemperatura
	SiNo
		temperatura <- mayorTemperatura
	FinSi
FinFunción

Función temperatura <- minimoRegistro(nuevaTemperatura,menorTemperatura)
	Si nuevaTemperatura<menorTemperatura Entonces
		temperatura <- nuevaTemperatura
	SiNo
		temperatura <- menorTemperatura
	FinSi
FinFunción

Algoritmo ejercicio06
	continuar <- Verdadero
	mayorTemperatura <- 0
	menorTemperatura <- 0
	Mientras continuar Hacer
		Escribir 'Ingrese una temperatura: '
		Leer nuevaTemperatura
		Si nuevaTemperatura=1000 Entonces
			continuar <- Falso
		SiNo
			mayorTemperatura <- maximoRegistro(nuevaTemperatura,mayorTemperatura)
			menorTemperatura <- minimoRegistro(nuevaTemperatura,menorTemperatura)
		FinSi
	FinMientras
	Escribir 'La mayor temperatura registrada es: ', mayorTemperatura
	Escribir 'La menor temperatura es: ', menorTemperatura
FinAlgoritmo
