// Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el promedio 
// de lo valores pares y el promedio de los valores impares. 
// Luego mostrar por pantalla cuantos números superaron el valor 15.
Función valor0 <- sumarValores(valor1,valor2)
	valor0 <- valor1+valor2
FinFunción

Función mostrarPromedios(acumulador,totalIteraciones,acumuladorPar,contadorPar,acumuladorImpar,contadorImpar)
	Definir promedioGeneral, promedioValoresPares, promedioValoresImpares Como Real
	promedioGeneral <- acumulador/totalIteraciones
	Escribir 'Promedio general ', promedioGeneral
	promedioValoresPares <- validarDivisor(acumuladorPar,contadorPar)
	Escribir 'Promedio valores pares ', promedioValoresPares
	promedioValoresImpares <- validarDivisor(acumuladorImpar,contadorImpar)
	Escribir 'Promedio valores impares ', promedioValoresImpares
	Escribir 'Total número que superaron el valor 15: ', contadorMayorQuince
FinFunción

Función promedio <- validarDivisor(acumulador,contador)
	Si  NO (contador)=(0) Entonces
		promedio <- acumulador/contador
	FinSi
FinFunción

Algoritmo ejercicio03
	Definir acumulador, totalIteraciones Como Entero
	Definir acumuladorPar, contadorPar Como Entero
	Definir acumuladorImpar, contadorImpar, contadorMayorQuince Como Entero
	totalIteraciones <- 8
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un valor numérico: '
		Leer valorIngresado
		acumulador <- sumarValores(acumulador,valorIngresado)
		Si (valorIngresado>15) Entonces
			contadorMayorQuince <- sumarValores(contadorMayorQuince,1)
		FinSi
		Si (valorIngresado MOD 2==0) Entonces
			acumuladorPar <- sumarValores(acumuladorPar,valorIngresado)
			contadorPar <- sumarValores(contadorPar,1)
		SiNo
			acumuladorImpar <- sumarValores(acumuladorImpar,valorIngresado)
			contadorImpar <- sumarValores(contadorImpar,1)
		FinSi
	FinPara
	mostrarPromedios(acumulador,totalIteraciones,acumuladorPar,contadorPar,acumuladorImpar,contadorImpar)
FinAlgoritmo
