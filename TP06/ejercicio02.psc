// 2- Ingresar 10 sueldos y edades de una empresa y calcular:
// - Sueldo promedio
// - Sueldo promedio de los empleados que tienen entre 23 y 40 años
// - Edad promedio
// - Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000.
// - Cantidad de empleados con edades menor a la edad promedio
Función preguntarSueldosEdades(sueldos,edades,largoVector)
	Para iterador<-1 Hasta largoVector Con Paso 1 Hacer
		Escribir 'Ingrese un valor numerico para sueldo {empl n°', iterador, '} :'
		Leer ingresoSueldo
		sueldos[iterador] <- ingresoSueldo
		Escribir 'Ingrese la edad para {empl n°', iterador, '} :'
		Leer ingresoEdad
		edades[iterador] <- ingresoEdad
	FinPara
FinFunción

Función obtenerPromedio(sueldoPromedio Por Referencia,edadPromedio Por Referencia,jovenes23A40Promedio Por Referencia,mayores30ConSueldoMenorMil Por Referencia,sueldos,edades,largoVector)
	Definir sueldoAcumulador, edadAcumulador, jovenes23A40Acumulador Como Entero
	Definir jovenes23A40 Como Entero
	Para iterador<-1 Hasta largoVector Con Paso 1 Hacer
		sueldoAcumulador <- sueldoAcumulador+sueldos[iterador]
		edadAcumulador <- edadAcumulador+edades[iterador]
		Si edades[iterador]>22 Y edades[iterador]<41 Entonces
			jovenes23A40 <- jovenes23A40+1
			jovenes23A40Acumulador <- jovenes23A40Acumulador+sueldos[iterador]
		FinSi
		Si edades[iterador]>29 Y sueldos[iterador]<1000 Entonces
			mayores30ConSueldoMenorMil <- mayores30ConSueldoMenorMil+1
		FinSi
	FinPara
	sueldoPromedio <- sueldoAcumulador/largoVector
	Si jovenes23A40>0 Entonces
		jovenes23A40Promedio <- jovenes23A40Acumulador/jovenes23A40
	FinSi
	edadPromedio <- edadAcumulador/largoVector
FinFunción

Algoritmo ejercicio02
	Definir largoVector Como Entero
	largoVector <- 10
	Dimensionar sueldos(largoVector)
	Dimensionar edades(largoVector)
	preguntarSueldosEdades(sueldos,edades,largoVector)
	Definir sueldoPromedio, edadPromedio, jovenes23A40Promedio Como Real
	Definir sueldoAcumulador, edadAcumulador, jovenes23A40Acumulador Como Entero
	Definir mayores30ConSueldoMenorMil, menoresAMedia Como Entero
	obtenerPromedio(sueldoPromedio,edadPromedio,jovenes23A40Promedio,mayores30ConSueldoMenorMil,sueldos,edades,largoVector)
	Escribir 'El sueldo promedio es de: ', sueldoPromedio
	Escribir 'Sueldo promedio de los empleados que tienen entre 23 y 40 años: ', jovenes23A40Promedio
	Escribir 'La edad promedio es de: ', edadPromedio
	Escribir 'Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000: ', mayores30ConSueldoMenorMil
	Para iterador<-1 Hasta largoVector Con Paso 1 Hacer
		Si edades[iterador]<edadPromedio Entonces
			menoresAMedia <- menoresAMedia+1
		FinSi
	FinPara
	Escribir 'Cantidad de empleados con edades menor a la edad promedio: ', menoresAMedia
FinAlgoritmo
