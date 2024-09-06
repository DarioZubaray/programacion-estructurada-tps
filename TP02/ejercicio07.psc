// 7. Ingresar el valor de la hora y el tiempo trabajado por un empleado, 
// calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs 
// y si trabajo más de 150 hs le dan otros $ 100 adicionales. Imprimir el sueldo
Algoritmo ejercicio07
	Escribir 'Ingrese el valor de la hora:'
	Leer valorHora
	Escribir 'Ingrese el tiempo trabajado por un operario:'
	Leer tiempoTrabajado
	sueldo <- valorHora*tiempoTrabajado
	Si tiempoTrabajado>50 Entonces
		sueldo <- sueldo+100
	FinSi
	Si tiempoTrabajado>150 Entonces
		sueldo <- sueldo+100
	FinSi
	Escribir 'El sueldo es: $', sueldo
FinAlgoritmo
