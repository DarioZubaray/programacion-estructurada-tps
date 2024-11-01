// 1- Ingresar datos y cargar un vector de 50 elementos, calcular:
// - La suma de todos los elementos.
// - El producto de todos los elementos.
// - Mostrar del vector el elemento 50 al 1.
// - Imprimir las componentes de indice par.
// - Imprimir las componentes de indice impar.
Función preguntarIngresarValores(miVector,largoVector)
	Para iterador<-1 Hasta largoVector Con Paso 1 Hacer
		Escribir 'Ingrese un valor numerico: '
		Leer ingreso
		miVector[iterador] <- ingreso
	FinPara
FinFunción

Función procesarSumaYProducto(miVector,largoVector,sumaTotal Por Referencia,productoTotal Por Referencia)
	Para iterador<-1 Hasta largoVector Con Paso 1 Hacer
		sumaTotal <- sumaTotal+miVector[iterador]
		Si  NO (productoTotal)=(0) Entonces
			productoTotal <- productoTotal*miVector[iterador]
		SiNo
			productoTotal <- miVector[iterador]
		FinSi
	FinPara
FinFunción

Función mostrarElementosDescendente(miVector,largoVector)
	Escribir 'El valor de los elementos en orden descendente es: '
	Para iterador<-largoVector Hasta 1 Con Paso -1 Hacer
		Si (iterador)=(largoVector) Entonces
			Escribir '[', miVector[iterador], ', 'Sin Saltar
		SiNo
			Si iterador<largoVector Y iterador>1 Entonces
				Escribir miVector[iterador], ', 'Sin Saltar
			SiNo
				Si (iterador)=(1) Entonces
					Escribir miVector[iterador], ']'
				FinSi
			FinSi
		FinSi
	FinPara
FinFunción

Función mostrarComponenteIndice(miVector,largoVector,paridad)
	Definir iterador Como Entero
	Definir condicion Como Lógico
	Para iterador<-1 Hasta largoVector Con Paso 1 Hacer
		Si paridad Entonces
			condicion <- (iterador MOD 2)=(0)
		SiNo
			condicion <- NO (iterador MOD 2)=(0)
		FinSi
		Si (iterador)=(1) Entonces
			Escribir '['Sin Saltar
		FinSi
		Si condicion Y (iterador<largoVector-1) Entonces
			Escribir miVector[iterador], ', 'Sin Saltar
		SiNo
			Si condicion Entonces
				Escribir miVector[iterador], ']'
			FinSi
		FinSi
	FinPara
FinFunción

Algoritmo ejercicio01
	Definir largoVector Como Entero
	largoVector <- 10
	Dimensionar miVector(largoVector)
	preguntarIngresarValores(miVector,largoVector)
	Definir sumaTotal, productoTotal Como Entero
	procesarSumaYProducto(miVector,largoVector,sumaTotal,productoTotal)
	Escribir 'La suma de todos los elementos es: ', sumaTotal
	Escribir 'El producto de todos los elementos es: ', productoTotal
	mostrarElementosDescendente(miVector,largoVector)
	Escribir 'Componentes de indice Par: '
	mostrarComponenteIndice(miVector,largoVector,VERDADERO)
	Escribir 'Componentes de indice Impar: '
	mostrarComponenteIndice(miVector,largoVector,FALSO)
	Escribir ''
FinAlgoritmo
