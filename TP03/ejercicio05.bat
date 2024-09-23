@echo off

gcc ejercicio05-parametrizado.c -o ejercicio05.exe

SET parametros=0,-40,40,54,52,61,0,14,60,98,85,81,26,89,14,64,5,51,75,97,8,43,10,2,5,41,73,64,-93,9,3,73,11,31,74,15,92,17,36,2,-41,96,72,98,40,60,31,45,93,84

echo Ejercicio05
echo ...........
echo Ingresar la patente y monto de la multa de 50 autos, indicar e imprimir cuántos montos superan los $40 y del total cobrado que porcentaje representa la suma de los que superan los $40.
echo ...........
echo parametros: %parametros%
echo ...........

ejercicio05.exe %parametros%

pause