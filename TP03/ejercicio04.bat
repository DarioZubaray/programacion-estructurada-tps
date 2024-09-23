@echo off

gcc ejercicio04-parametrizado.c -o ejercicio04.exe

SET parametros=14,22,89,15,22,33,68,77,99,44,55,5,1,80,10,11,63,45,18,20,60,4,8,6,5,26,27,15,88,30

echo Ejercicio04
echo ...........
echo Ingresar 30 valores. Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, cuantos entre 20 y 30 y cuantos son mas de 30. Luego mostrar el porcentaje de cada grupo en el total.
echo ...........
echo parametros: %parametros%
echo ...........

ejercicio04.exe %parametros%

pause