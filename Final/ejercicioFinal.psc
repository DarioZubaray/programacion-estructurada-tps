Funcion cargarValoresPrecioUnitario(vpu)
	vpu[1] <- 50
	vpu[2] <- 8
	vpu[3] <- 15
	vpu[4] <- 70
	vpu[5] <- 10
FinFuncion
Funcion cargarDescripciones(vpu)
	vpu[1] <- 'articulo 1'
	vpu[2] <- 'articulo 2'
	vpu[3] <- 'articulo 3'
	vpu[4] <- 'articulo 4'
	vpu[5] <- 'articulo 5'
FinFuncion

Funcion AplicaDescuentos(vpu, vdesc, P, N, descuentoPorcentual)
	Para iterador <- 1 Hasta N Con Paso 1 Hacer
		Si vpu[iterador] > P Entonces
			Escribir 'Precio unitario de ', vdesc[iterador], '($',vpu[iterador],') es mayor a precio P($', P,'), aplicando descuento'
			vpu[iterador] <- vpu[iterador] - vpu[iterador] / descuentoPorcentual
			Escribir 'Precios descontado: ', vpu[iterador], ' a ', vdesc[iterador]
			Escribir ''
		FinSi
	Fin Para
FinFuncion


Algoritmo ejercicioFinal
	Escribir 'AplicaDescuentos'
	Escribir '----------------'
	// vpu = Vector Precios Unitarios
	// vdesc Vactor Descripciones
	// P Precios
	Definir N, P, descuento Como Entero
	N <- 5 // Cambiar a 100
	descuentoPorcentual <- 10
	p <- 12
	
	Dimensionar vpu[N], vdesc[N]
	
	// Cargando datos de prueba
	cargarValoresPrecioUnitario(vpu) // comentar en N=100
	cargarDescripciones(vdesc) // comentar en N=100
	
	AplicaDescuentos(vpu, vdesc, P, N, descuentoPorcentual)
FinAlgoritmo
