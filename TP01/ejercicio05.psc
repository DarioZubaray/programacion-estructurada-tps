// 5. Ingresar dos lados de un tri�ngulo rect�ngulo y calcular, la hipotenusa, el per�metro, la superficie. Imprima los resultados solicitados.
Algoritmo ejercicio05
	Escribir 'Ingrese un primer cateto del tri�ngulo: '
	Leer catetoUno
	Escribir 'Ingrese un segundo cateto del tri�ngulo: '
	Leer catetoDos
	hipotenusa <- raiz(catetoUno*catetoUno+catetoDos*catetoDos)
	Escribir 'La hipotenusa del tri�ngulo es: ', hipotenusa
	perimetro <- hipotenusa+catetoUno+catetoDos
	Escribir 'El per�metro del tri�ngulo es: ', perimetro
	semip <- perimetro/2
	area <- raiz(semip*(semip-catetoUno)*(semip-catetoDos)*(semip-hipotenusa))
	Escribir 'El area del tri�ngulo es bajo la f�rmula de Her�n es: ', area
FinAlgoritmo
