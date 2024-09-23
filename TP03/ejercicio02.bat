@echo off

gcc ejercicio02-parametrizado.c -o ejercicio02.exe

SET parametros=14,22,0,15,22,-33,68,77,-99,0

echo Ejercicio02
echo ...........
echo Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros.
echo ...........
echo parametros: %parametros%
echo ...........

ejercicio02.exe %parametros%

pause