// 4 - Ingresar 30 valores. Contar cuantos est�n entre 1 y 10, cuantos entre 10 y 20, 
// cuantos entre 20 y 30 y cuantos son mas de 30. 
// Luego mostrar el porcentaje de cada grupo en el total.
Funci�n variableRetorno <- perteneceARango (cotaInferior,cotaSuperior,valorIngresado)
	Si valorIngresado>cotaInferior Y valorIngresado<=cotaSuperior Entonces
		variableRetorno <- 1
	SiNo
		variableRetorno <- 0
	FinSi
FinFunci�n

Funci�n asignarAContadores(valorIngresado,contadorPrimeraDecena Por Referencia,contadorSegundaDecena Por Referencia,contadorTerceraDecena Por Referencia)
	contador <- contador+perteneceARango(cotaInferior,cotaSuperior,valorIngresado)
FinFunci�n

Funci�n porcentaje <- obtenerPorcentaje(numerador,divisor)
	porcentaje <- numerador*100/divisor
FinFunci�n

Funci�n mostrarPorcentajes (totalIteraciones,contadorPrimeraDecena,contadorSegundaDecena,contadorTerceraDecena)
	porcentajePrimeraDecena <- obtenerPorcentaje(contadorPrimeraDecena,totalIteraciones)
	Escribir 'Porcentaje valores en primera decena: ', porcentajePrimeraDecena, '%'
	porcentajeSegundaDecena <- obtenerPorcentaje(contadorSegundaDecena,totalIteraciones)
	Escribir 'Porcentaje valores en segunda decena: ', porcentajeSegundaDecena, '%'
	porcentajeTerceraDecena <- obtenerPorcentaje(contadorTerceraDecena,totalIteraciones)
	Escribir 'Porcentaje valores en tercera decena o m�s: ', porcentajeTerceraDecena, '%'
FinFunci�n

Algoritmo ejercicio04
	Definir contadorPrimeraDecena, contadorSegundaDecena, contadorTerceraDecena Como Entero
	totalIteraciones <- 5
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un valor num�rico: '
		Leer valorIngresado
		asignarAContadores(valorIngresado,contadorPrimeraDecena,contadorSegundaDecena,contadorTerceraDecena)
	FinPara
	mostrarPorcentajes(totalIteraciones,contadorPrimeraDecena,contadorSegundaDecena,contadorTerceraDecena)
FinAlgoritmo
