// 7 - Desarrolle un programa que pida al usuario los datos de dos matrices de `2x2`, 
// y calcule y muestre su producto. Investigue como obtener el producto de dos matrices.
Función obtenerMatriz(miVector)
	Para i<-1 Hasta 2 Con Paso 1 Hacer
		Para j<-1 Hasta 2 Con Paso 1 Hacer
			Escribir 'ingrese su coordenada [', i, ',', j, ']:'
			Leer coordenada
			miVector[i,j]<-coordenada
		FinPara
	FinPara
FinFunción

Función calcularProductoMatriz(miVectorA,miVectorB,miVectorC)
	Para i<-1 Hasta 2 Con Paso 1 Hacer
		Para j<-1 Hasta 2 Con Paso 1 Hacer
			miVectorC[i,j]<-(miVectorA[i,1]*miVectorB[1,j])+(miVectorA[i,2]*miVectorB[2,j])
		FinPara
	FinPara
FinFunción

Algoritmo ejercicio07
	Dimensionar miVectorA(2,2)
	Dimensionar miVectorB(2,2)
	Dimensionar miVectorC(2,2)
	Escribir 'ingrese un los valores de una matriz 2x2'
	obtenerMatriz(miVectorA)
	obtenerMatriz(miVectorB)
	Escribir 'El producto de las matrices ingresadas es:'
	calcularProductoMatriz(miVectorA,miVectorB,miVectorC)
	Para i<-1 Hasta 2 Con Paso 1 Hacer
		Para j<-1 Hasta 2 Con Paso 1 Hacer
			Escribir '[', i, ',', j, '] : ', miVectorC[i,j]
		FinPara
	FinPara
FinAlgoritmo
