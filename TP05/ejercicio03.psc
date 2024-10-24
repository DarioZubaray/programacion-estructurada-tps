// 3 - Cree una matriz de enteros de `3x3`. Inicialícela en base a la siguiente tabla:
Algoritmo ejercicio03
	Dimensionar miVector(3,3)
	miVector[1,1]<-100
	miVector[1,2]<-74
	miVector[1,3]<-99
	miVector[2,1]<-11
	miVector[2,2]<-36
	miVector[2,3]<-68
	miVector[3,1]<-23
	miVector[3,2]<-9
	miVector[3,3]<-81
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Para j<-1 Hasta 3 Con Paso 1 Hacer
			Escribir 'Elemento ', i, ': ', miVector[i,j]
		FinPara
	FinPara
FinAlgoritmo
