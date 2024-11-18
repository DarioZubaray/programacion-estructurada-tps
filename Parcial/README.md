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
# Parcial 02

Una ferretería recibe a diario pedidos de sus 20 clientes, esta ferretería comercializa 10 tipos distintos de lámparas y posee 10 empleados encargados de la recepción y entrega de los pedidos.
Se sabe que tienen los siguientes lotes de datos sin orden

Lote 1
Nro de lámpara (códigos de 3 dígitos)
Precio
Stock actual

Lote 2
Por cada pedido que se recibe, se ingresan los siguientes datos que finalizan con número de pedido=0
Nro de pedido
Nro de lámpara (códigos de 3 dígitos)
Nro de empleado que atendió el pedido (número de 2 dígitos)
Cantidad pedida 

__Si no se encuentra la lámpara entre las ingresadas en Lote 1__
__o si la lámpara pedida no cuenta con stock restante suficiente para satisfacer el pedido,__
__dicho pedido NO es tenido en cuenta.__

Es decir, sólo se deben poder vender aquellas lámparas que existen y tienen stock suficiente para cumplimentar el pedido.
Cada vez que se efectúe un pedido correctamente se debe ir manteniendo actualizado el stock correspondiente (por ejemplo si de una lámpara se pidieron 10 unidades y de la misma quedaban 70 unidades, se efectúa la venta y dicha lámpara pasa a quedar con 60 unidades restantes).

Se pide:
Cantidad de pedidos que atendió el empleado 55
Para cada lámpara, el nro de empleado que vendió la mayor cantidad en un pedido 
Stock final actualizado de cada nro de lámpara
Desarrolle y utilice donde corresponda una función void buscarLampara, que a partir de un nro de lámpara la busca en el vector de lámparas del Lote 1, y retorna la posición en la cual la encontró, o retorna -1 en caso de no encontrarla.