// 8. Ingresar tres valores correspondientes al d�a, mes y a�o de una fecha, 
// indicar si es v�lida, considerar los a�os bisiestos
Algoritmo ejercicio08
	Escribir 'Ingrese un primer valor para el dia: '
	Leer valorDia
	Si (valorDia>0 Y valorDia<=31) Entonces
		Escribir 'Ingrese un segundo valor para el mes: '
		Leer valorMes
		Si (valorMes>0 Y valorMes<=12) Entonces
			Escribir 'Ingrese un tercer valor para el a�o: '
			Leer valorAnio
			Escribir ''
			Escribir 'La fecha ingresada es ', valorDia, '/', valorMes, '/', valorAnio
			Si valorDia==29 Y valorMes==2 Entonces
				Si valorAnio MOD 4=0 Entonces
					Escribir 'La fecha es correcta, por ser a�o bisiesto'
				SiNo
					Escribir 'Febrero solo tiene 29s en a�os bisiestos'
				FinSi
			SiNo
				Si valorDia==30 Y valorMes=2 Entonces
					Escribir 'Febrero no puede contener 30 d�as'
				SiNo
					Si valorDia==31 Y (valorMes==4 O valorMes==6 O valorMes==9 O valorMes==11) Entonces
						Escribir 'La fecha No es correcta, 31 no puede darse en abril, junio, septiembre o noviembre'
					SiNo
						Escribir 'La fecha es correcta =)'
					FinSi
				FinSi
			FinSi
		SiNo
			Escribir 'La fecha no es v�lida, el mes ', valorMes, ' es incorrecto'
		FinSi
	SiNo
		Escribir 'La fecha no es v�lida, el dia ', valorDia, ' es incorrecto.'
	FinSi
FinAlgoritmo
