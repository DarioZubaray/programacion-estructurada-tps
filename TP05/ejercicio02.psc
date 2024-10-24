// 2 - Cree un vector de `10` posiciones, pida al usuario que ingrese los `10` valores y luego muéstrelo de manera inversa.
Algoritmo ejercicio02
	posiciones <- 5
	Dimensionar miVector(posiciones)
	Para i<-1 Hasta posiciones Con Paso 1 Hacer
		Escribir 'Ingrese un valor numerico: '
		Leer valorNumerico
		miVector[i] <- valorNumerico
	FinPara
	Escribir 'Los valores ingresados de manera inversa son: '
	Para i<-posiciones Hasta 1 Con Paso -1 Hacer
		Escribir '{', miVector[i], '}'
	FinPara
FinAlgoritmo
