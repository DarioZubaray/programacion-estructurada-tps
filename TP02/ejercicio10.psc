// 10. Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados con m�s de 5 a�os de antig�edad
Algoritmo ejercicio10
	Escribir 'Ingrese el sueldo del empleado: '
	Leer sueldo
	Escribir 'Ingrese el n�mero de la categoria: '
	Leer categoria
	Escribir 'Ingrese los a�os de antig�edad'
	Leer antiguedad
	Si categoria==1 Entonces
		sueldo <- 50*antiguedad+sueldo
	FinSi
	Si antiguedad>=5 Entonces
		Escribir 'El sueldo final del empleado con mas de 5 a�os en la empresa es de $', sueldo
	SiNo
		Escribir 'El empleado no cuenta con los a�os m�nimos para visualizar esta informaci�n'
	FinSi
FinAlgoritmo
