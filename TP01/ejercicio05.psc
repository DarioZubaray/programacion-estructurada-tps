// 5. Ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el perímetro, la superficie. Imprima los resultados solicitados.
Algoritmo ejercicio05
	Escribir 'Ingrese un primer cateto del triángulo: '
	Leer catetoUno
	Escribir 'Ingrese un segundo cateto del triángulo: '
	Leer catetoDos
	hipotenusa <- raiz(catetoUno*catetoUno+catetoDos*catetoDos)
	Escribir 'La hipotenusa del triángulo es: ', hipotenusa
	perimetro <- hipotenusa+catetoUno+catetoDos
	Escribir 'El perímetro del triángulo es: ', perimetro
	semip <- perimetro/2
	area <- raiz(semip*(semip-catetoUno)*(semip-catetoDos)*(semip-hipotenusa))
	Escribir 'El area del triángulo es bajo la fórmula de Herón es: ', area
FinAlgoritmo
