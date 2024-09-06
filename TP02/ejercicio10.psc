// 10. Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados con más de 5 años de antigüedad
Algoritmo ejercicio10
	Escribir 'Ingrese el sueldo del empleado: '
	Leer sueldo
	Escribir 'Ingrese el número de la categoria: '
	Leer categoria
	Escribir 'Ingrese los años de antigüedad'
	Leer antiguedad
	Si categoria==1 Entonces
		sueldo <- 50*antiguedad+sueldo
	FinSi
	Si antiguedad>=5 Entonces
		Escribir 'El sueldo final del empleado con mas de 5 años en la empresa es de $', sueldo
	SiNo
		Escribir 'El empleado no cuenta con los años mínimos para visualizar esta información'
	FinSi
FinAlgoritmo
