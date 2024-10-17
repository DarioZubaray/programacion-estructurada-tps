// 4 - Ingresar 30 valores. Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, 
// cuantos entre 20 y 30 y cuantos son mas de 30. 
// Luego mostrar el porcentaje de cada grupo en el total.
Función variableRetorno <- perteneceARango (cotaInferior,cotaSuperior,valorIngresado)
	Si valorIngresado>cotaInferior Y valorIngresado<=cotaSuperior Entonces
		variableRetorno <- 1
	SiNo
		variableRetorno <- 0
	FinSi
FinFunción

Función porcentaje <- obtenerPorcentaje(numerador,divisor)
	porcentaje <- numerador*100/divisor
FinFunción

Algoritmo ejercicio04
	Definir contadorPrimeraDecena, contadorSegundaDecena, contadorTerceraDecena Como Entero
	totalIteraciones <- 5
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un valor numérico: '
		Leer valorIngresado
		contadorPrimeraDecena <- contadorPrimeraDecena+perteneceARango(0,10,valorIngresado)
		contadorSegundaDecena <- contadorSegundaDecena+perteneceARango(11,20,valorIngresado)
		contadorTerceraDecena <- contadorTerceraDecena+perteneceARango(21,30,valorIngresado)
	FinPara
	porcentajePrimeraDecena <- obtenerPorcentaje(contadorPrimeraDecena,totalIteraciones)
	Escribir 'Porcentaje valores en primera decena: ', porcentajePrimeraDecena, '%'
	porcentajeSegundaDecena <- obtenerPorcentaje(contadorSegundaDecena,totalIteraciones)
	Escribir 'Porcentaje valores en segunda decena: ', porcentajeSegundaDecena, '%'
	porcentajeTerceraDecena <- obtenerPorcentaje(contadorTerceraDecena,totalIteraciones)
	Escribir 'Porcentaje valores en tercera decena o más: ', porcentajeTerceraDecena, '%'
FinAlgoritmo
