// 11. Ingresar las horas trabajadas por un empleado y su categoría, 
// calcular su sueldo sabiendo que los empleados de la categoría 1 cobran $50, 
// la 2 cobra $ 70 y la 3 cobra $ 80
Algoritmo ejercicio11
	Escribir 'Ingrese las horas trabajadas: '
	Leer horasTrabajadas
	Escribir 'Ingrese el número de la categoria: '
	Leer categoria
	Si categoria==1 Entonces
		sueldo <- 50*horasTrabajadas
		Escribir 'El sueldo del empleado es $', sueldo
	SiNo
		Si categoria==2 Entonces
			sueldo <- 70*horasTrabajadas
			Escribir 'El sueldo del empleado es $', sueldo
		SiNo
			Si categoria==3 Entonces
				sueldo <- 80*horasTrabajadas
				Escribir 'El sueldo del empleado es $', sueldo
			SiNo
				Escribir 'No se reconce la categoria del empleado -> ', categoria
			FinSi
		FinSi
	FinSi
FinAlgoritmo
