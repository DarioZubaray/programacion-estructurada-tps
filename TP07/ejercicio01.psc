// 1 - Ingrese 20 valores en un vector e imprimalo ordenado 
// utilizando el algoritmo bubblesort u ordenamiento por burbujeo.
Función ingresarValores(miVector,longitudVector)
	Definir valorNumerico, iterador Como Entero
	iterador <- 1
	Definir continuar Como Lógico
	continuar <- Verdadero
	Mientras continuar Hacer
		Escribir 'Ingrese un valor numerico: '
		Leer valorNumerico
		miVector[iterador] <- valorNumerico
		iterador <- iterador+1
		Si valorNumerico Es 0 O iterador > longitudVector Entonces
			continuar <- Falso
		FinSi
	FinMientras
FinFunción

Función mostrarVector(textoAMostrar,miVector,longitudVector)
	Escribir textoAMostrar
	Para i<-1 Hasta longitudVector Con Paso 1 Hacer
		Escribir 'miVector[', i, '] : ', miVector[i]
	FinPara
FinFunción

Función ordernarPorBurbujeo(miVector,longitudVector)
	Para iteradorI<-2 Hasta longitudVector Con Paso 1 Hacer
		Para iteradorJ<-1 Hasta longitudVector-iteradorI+1 Con Paso 1 Hacer
			Si miVector[iteradorJ]>miVector[iteradorJ+1] Entonces
				temporal <- miVector[iteradorJ]
				miVector[iteradorJ] <- miVector[iteradorJ+1]
				miVector[iteradorJ+1]<-temporal
			FinSi
		FinPara
	FinPara
FinFunción

Algoritmo ejercicio01
	Definir longitudVector Como Entero
	longitudVector <- 20
	Escribir 'Ingrese hasta un maximo de ', longitudVector, ' numeros'
	Escribir '(Ingrese 0 para terminar)'
	Dimensionar miVector(longitudVector)
	ingresarValores(miVector,longitudVector)
	mostrarVEctor('Orden inicial: ',miVector,longitudVector)
	ordernarPorBurbujeo(miVector,longitudVector)
	mostrarVEctor('Orden por burbujeo: ',miVector,longitudVector)
FinAlgoritmo
