// 9. Ingresar el sueldo, categoría y antigüedad de un empleado, 
// calcular el sueldo final de cada uno de ellos, 
// si el empleado es de la categoría 1 se le adicionara $50 por cada año de antigüedad.
Algoritmo ejercicio09
	Escribir 'Ingrese el sueldo del empleado: '
	Leer sueldoParcial
	Escribir 'Ingrese el número de la categoria: '
	Leer categoria
	Escribir 'Ingrese los años de antigüedad'
	Leer antiguedad
	Si categoria==1 Entonces
		sueldofinal <- 50*antiguedad+sueldoParcial
		Escribir 'El sueldo final del empleado es $', sueldofinal
	SiNo
		Escribir 'El sueldo final del empleado es $', sueldoParcial
	FinSi
FinAlgoritmo
