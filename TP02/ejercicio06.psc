// 6. Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad
Algoritmo ejercicio06
	Escribir 'Ingrese la edad de la primera persona: '
	Leer edadPrimeraPersona
	Escribir 'Ahora ingrese la altura de esta misma: '
	Leer alturaPrimeraPersona
	Escribir 'Ingrese la edad de la segunda persona: '
	Leer edadSegundaPersona
	Escribir 'Ahora ingrese la altura de esta misma: '
	Leer alturaSegundaPersona
	Si edadPrimeraPersona>=edadSegundaPersona Entonces
		Escribir 'La estatura de la persona de mayor edad es: ', alturaPrimeraPersona
	SiNo
		Escribir 'La estatura de la persona de mayor edad es: ', alturaSegundaPersona
	FinSi
FinAlgoritmo
