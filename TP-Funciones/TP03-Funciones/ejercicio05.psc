// 05 - Ingresar la patente y monto de la multa de 50 autos, 
// indicar e imprimir cuántos montos superan los $40 
// y del total cobrado que porcentaje representa la suma de los que superan los $40.
Función variableRetorno <- sumarValor(valor1,valor2)
	variableRetorno <- valor1+valor2
FinFunción

Función porcentaje <- obtenerPorcentaje(numerador,divisor)
	porcentaje <- numerador*100/divisor
FinFunción

Algoritmo ejercicio05
	Definir acumulador, totalIteraciones, contadorMontoMayorACuarenta, acumuladorMontoMayorACuarenta Como Entero
	acumulador <- 0
	contadorMontoMayorACuarenta <- 0
	acumuladorMontoMayorACuarenta <- 0
	totalIteraciones <- 5
	Definir contador Como Entero
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese el monto de la multa: '
		Leer valorMulta
		acumulador <- sumarValor(acumulador,valorMulta)
		Si valorMulta>=40 Entonces
			contadorMontoMayorACuarenta <- sumarValor(contadorMontoMayorACuarenta,1)
			acumuladorMontoMayorACuarenta <- sumarValor(acumuladorMontoMayorACuarenta,valorMulta)
		FinSi
	FinPara
	Escribir 'Cantidad de montos mayores a $40: ', contadorMontoMayorACuarenta
	porcentajeMultasMayorACuarenta <- obtenerPorcentaje(acumuladorMontoMayorACuarenta,acumulador)
	Escribir 'Porcentaje de multas mayores a $40: ', porcentajeMultasMayorACuarenta, '%'
FinAlgoritmo
