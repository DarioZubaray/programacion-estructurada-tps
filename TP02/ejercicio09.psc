// 9. Ingresar el sueldo, categor�a y antig�edad de un empleado, 
// calcular el sueldo final de cada uno de ellos, 
// si el empleado es de la categor�a 1 se le adicionara $50 por cada a�o de antig�edad.
Algoritmo ejercicio09
	Escribir 'Ingrese el sueldo del empleado: '
	Leer sueldoParcial
	Escribir 'Ingrese el n�mero de la categoria: '
	Leer categoria
	Escribir 'Ingrese los a�os de antig�edad'
	Leer antiguedad
	Si categoria==1 Entonces
		sueldofinal <- 50*antiguedad+sueldoParcial
		Escribir 'El sueldo final del empleado es $', sueldofinal
	SiNo
		Escribir 'El sueldo final del empleado es $', sueldoParcial
	FinSi
FinAlgoritmo
