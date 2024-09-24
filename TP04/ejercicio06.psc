// 6 - Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor
Algoritmo ejercicio06
	continuar <- Verdadero
	mayorTemperatura <- 0
	menorTemperatura <- 0
	Mientras continuar Hacer
		Escribir 'Ingrese una temperatura:'
		Leer nuevaTemperatura
		Si nuevaTemperatura=1000 Entonces
			continuar <- Falso
		SiNo
			Si nuevaTemperatura>mayorTemperatura Entonces
				mayorTemperatura <- nuevaTemperatura
			FinSi
			Si nuevaTemperatura<menorTemperatura Entonces
				menorTemperatura <- nuevaTemperatura
			FinSi
		FinSi
	FinMientras
	Escribir 'La mayor temperatura registrada es: ', mayorTemperatura
	Escribir 'La menor temperatura es: ', menorTemperatura
FinAlgoritmo
