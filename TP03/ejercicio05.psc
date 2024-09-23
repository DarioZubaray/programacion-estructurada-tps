// 05 - Ingresar la patente y monto de la multa de 50 autos, 
// indicar e imprimir cuántos montos superan los $40 
// y del total cobrado que porcentaje representa la suma de los que superan los $40.
Algoritmo ejercicio05
	acumulador <- 0
	contadorMontoMayorACuarenta <- 0
	acumuladorMontoMayorACuarenta <- 0
	totalIteraciones <- 50
	Definir contador Como Entero
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese el monto de la multa: '
		Leer valorMulta
		acumulador <- acumulador+valorMulta
		Si valorMulta>=40 Entonces
			contadorMontoMayorACuarenta <- contadorMontoMayorACuarenta+1
			acumuladorMontoMayorACuarenta <- acumuladorMontoMayorACuarenta+valorMulta
		FinSi
	FinPara
	Escribir 'Cantidad de montos mayores a $40: ', contadorMontoMayorACuarenta
	porcentajeMultasMayorACuarenta <- acumuladorMontoMayorACuarenta*100/acumulador
	Escribir 'Porcentaje de multas mayores a $40: ', porcentajeMultasMayorACuarenta, '%'
FinAlgoritmo
