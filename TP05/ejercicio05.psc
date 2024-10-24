// 5 - Ingrese `10` valores en un vector de enteros. Sume todos los valores muestre el resultado en pantalla.
Algoritmo ejercicio05
	Dimensionar miVector(10)
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir 'Ingrese un valor numerico: '
		Leer valorNumerico
		miVector[i] <- valorNumerico
	FinPara
	Definir sumaTotal Como Entero
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		sumaTotal <- sumaTotal+miVector[i]
	FinPara
	Escribir 'La suma total de los valores ingresados es: ', sumaTotal
FinAlgoritmo
