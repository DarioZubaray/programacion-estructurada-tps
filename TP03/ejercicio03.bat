@echo off

gcc ejercicio03-parametrizado.c -o ejercicio03.exe

SET parametros=14,22,89,15,22,33,68,77

echo Ejercicio03
echo ...........
echo Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el promedio de lo valores pares y el promedio de los valores impares. Luego mostrar por pantalla cuantos numeros superaron el valor 15.
echo ...........
echo parametros: %parametros%
echo ...........

ejercicio03.exe %parametros%

pause