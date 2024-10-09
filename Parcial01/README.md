# Parcial 01

- Calcular el monto que debe pagar un usuario en una cabina de internet por las horas usadas a lo largo de una semana. 

- El costo por hora es de $50 durante la semana y 30% adicional o sea $65 si es durante el fin de semana. 

- Para esto el usuario ingresa por cada una de las veces que entró a la cabina en la semana los siguientes datos: cuando, que  será 1 si es uso en la semana, 2 si es uso en fin de semana, y 3 para finalizar todos los ingresos. 

- Y luego horas que es la cantidad de horas utilizadas en ese ingreso a la cabina (las horas son enteras, no hay fracciones).

###### Se desea saber

- Cantidad de horas contratadas (es el total incluyendo semana + fin de semana).
- Monto total de la operación.


###### Posible ejemplo de datos sólo para entender mejor
```
cuando   horas
   1         3
   2         4
   1         2
   1         5
   2         1
   3
```
O sea en este ejemplo se utilizaron:
  - `10hs` de semana (3+2+5) que a `$50` c/u implican `$500` 
  -  y `5` hs de fin de semana (4+1) que a `$65` c/u implican `$325`.

###### Mostrar:
```
Cantidad de horas contratadas: 15hs (10 semana + 5 de fin de semana)
Monto total de la operación: $825 ($500 semana + $325 de fin de semana). 
```
