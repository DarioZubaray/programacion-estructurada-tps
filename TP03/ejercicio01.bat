@echo off

gcc ejercicio01-parametrizado.c -o ejercicio01.exe

SET parametros=14,22,89,15,22,33,68,77,99,44,55,5,1,80,10,11,63,45,18,20,60,4,8,6,5

echo Ejercicio01
echo ...........
echo Ingresar 25 números, calcular su promedio e imprimirlo.
echo ...........
echo parametros: %parametros%
echo ...........

ejercicio01.exe %parametros%

pause