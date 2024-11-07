// 2- Cree un programa para ingresar 10 números en un vector y luego que permita introducir un número 
// para realizar una búsqueda. Permita que el operador del programa elija que tipo de algoritmo 
// quiere utilizar por medio de un menú (debe ser búsqueda binaria o secuencial).
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

Función mostrarVector(miVector,longitudVector)
	Escribir '{'Sin Saltar
	Para iterador<-1 Hasta 10 Con Paso 1 Hacer
		Escribir miVector[iterador], ', 'Sin Saltar
	FinPara
	Escribir '}'
FinFunción

Función busquedaBinaria(miVector,longitudVector,numeroABuscar)
	Definir encontrado Como Lógico
	Definir primero, medio, ultimo Como Entero
	primero <- 1
	medio <- 0
	ultimo <- longitudVector
	Mientras primero<ultimo Y  NO (encontrado)=(Verdadero) Hacer
		medio <- redon((ultimo+primero)/2)
		Escribir 'primero: ', primero, ', medio: ', medio, ', ultimo: ', ultimo
		Si (miVector[medio])=(numeroABuscar) Entonces
			Escribir 'Numero {', numeroABuscar, '}, encontrado en posicion: ', medio
			encontrado <- Verdadero
		SiNo
			Si numeroABuscar>miVector[medio] Entonces
				primero <- primero+1
			SiNo
				ultimo <- ultimo-1
			FinSi
		FinSi
	FinMientras
	Si (encontrado)=(Falso) Entonces
		Escribir 'El numero {', numeroABuscar, '} no fue encontrado con la busqueda binaria.'
	FinSi
FinFunción

Función busquedaSecuencial(miVector,longitudVector,numeroABuscar)
	Definir encontrado Como Lógico
	Para iterador<-1 Hasta longitudVector Con Paso 1 Hacer
		Si (miVector[iterador])=(numeroABuscar) Entonces
			Escribir 'Numero {', numeroABuscar, '}, encontrado en posicion: ', iterador
			encontrado <- Verdadero
		FinSi
	FinPara
	Si (encontrado)=(Falso) Entonces
		Escribir 'El numero {', numeroABuscar, '} no fue encontrado con la busqueda secuencial.'
	FinSi
FinFunción

Función ingresarBuscarNumero(miVector,longitudVector)
	Definir continuarBusqueda Como Lógico
	continuarBusqueda <- Verdadero
	Mientras continuarBusqueda Hacer
		Escribir '============================================'
		Escribir 'Ingrese un numero a buscar: '
		Leer numeroABuscar
		Si  NO (numeroABuscar)=(0) Entonces
			Escribir '============================================'
			Escribir 'Seleccione el tipo de algoritmo de busqueda: '
			Escribir '....1 - Binaria'
			Escribir '....2 - Secuencial'
			Escribir '============================================'
			Leer tipoAlgoritmo
			Según tipoAlgoritmo Hacer
				1:
					ordernarPorBurbujeo(miVector,longitudVector)
					mostrarVector(miVector,longitudVector)
					busquedaBinaria(miVector,longitudVector,numeroABuscar)
				2:
					mostrarVector(miVector,longitudVector)
					busquedaSecuencial(miVector,longitudVector,numeroABuscar)
				De Otro Modo:
					Escribir 'No existe un modo ', tipoAlgoritmo
			FinSegún
		SiNo
			continuarBusqueda <- Falso
			Escribir 'Fin programa.'
		FinSi
	FinMientras
FinFunción

Algoritmo ejercicio02
	Definir longitudVector Como Entero
	longitudVector <- 10
	Dimensionar miVector(longitudVector)
	Para i<-1 Hasta longitudVector Con Paso 1 Hacer
		Escribir 'Ingrese un valor numerico: '
		Leer miVector[i]
	FinPara
	ingresarBuscarNumero(miVector,longitudVector)
FinAlgoritmo
