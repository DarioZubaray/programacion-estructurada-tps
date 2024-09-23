// 4 - Ingresar 30 valores. Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, 
// cuantos entre 20 y 30 y cuantos son mas de 30. 
// Luego mostrar el porcentaje de cada grupo en el total.
Algoritmo ejercicio04
	contadorPrimeraDecena <- 0
	contadorSegundaDecena <- 0
	contadorTerceraDecena <- 0
	totalIteraciones <- 30
	Para contador<-1 Hasta totalIteraciones Con Paso 1 Hacer
		Escribir 'Ingrese un valor numérico: '
		Leer valorIngresado
		Si valorIngresado>0 Y valorIngresado<10 Entonces
			contadorPrimeraDecena <- contadorPrimeraDecena+1
		SiNo
			Si valorIngresado<20 Entonces
				contadorSegundaDecena <- contadorSegundaDecena+1
			SiNo
				contadorTerceraDecena <- contadorTerceraDecena+1
			FinSi
		FinSi
	FinPara
	porcentajePrimeraDecena <- contadorPrimeraDecena*100/totalIteraciones
	Escribir 'Porcentaje valores en primera decena: ', porcentajePrimeraDecena, '%'
	porcentajeSegundaDecena <- contadorSegundaDecena*100/totalIteraciones
	Escribir 'Porcentaje valores en segunda decena: ', porcentajeSegundaDecena, '%'
	porcentajeTerceraDecena <- contadorTerceraDecena*100/totalIteraciones
	Escribir 'Porcentaje valores en tercera decena o más: ', porcentajeTerceraDecena, '%'
FinAlgoritmo
