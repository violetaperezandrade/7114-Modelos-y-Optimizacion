# 7114-Modelos-y-Optimización
TP1 Individual de la materia Modelos y Optimización

El problema consiste en una lavanderia que tiene que lavar prendas, donde algunas son incompatibles con otras ya que las destiñen. Cada prenda tiene un tiempo de lavado y cada lavado durará lo que tarde la prenda de mayor tiempo.

Se busca la mejor solución posible, es decir que se puedan lavar todas las prendas en el menor tiempo posible.

# Primera Parte

Para la primera parte se intento de forma de fuerza bruta. A cada prenda, se le asignó una lista de las prendas con las que es incompatible.

De esta forma, se parsea el archivo de la siguiente forma. Hay un diccionario el cual tiene como clave el numero de prenda y como valor una lista de las prendas con las cuales es incompatible. 
Una vez hecho esto, para cada prenda, se analiza si hay un lavado donde sea compatible y en caso contrario se crea un nuevo lavado con esa prenda. 

Con este intento, en el cual no se tuvo en cuenta el tiempo, se llegó a un resultado óptimo.

# Segunda Parte

Para la segunda parte, es el mismo probelma pero con una cantidad de prendas considerablemente mayor, por lo que en cierto modo, se busca de alguna forma optimizar lo realizado en la primera parte.

El primer intento constó en repetir la idea usada en la primera parte. Como se mencionó, en la primera parte no se tuvo en cuenta el tiempo de ninguna forma.
Por este motivo, esta solución en esta segunda parte resultó sumamente ineficiente.

Una idea para poder optimizarlo fue la siguiente:

Antes de crear los lavados, se ordenó la lista de prendas a recorrer por tiempo de lavado de forma descendiente. De este modo, los lavados se llenan primero con prendas de mayor duración, y las prendas que pueden llegar a quedar solas al final son las de menor duración. De esta forma, queda algo emparejada la distribucion de prendas en los lavados en cuanto al tiempo ademas de la compatibilidad.

# Tercera Parte
El algoritmo provisto, resuelve el problema de la siguiente forma. Se crea un grafo, al cual se le asignan 
distintos colores donde cada color puede ser pensado como cada lavado en nuestro problema de la lavanderia. 
El algoritmo original, le asigna un lavado(color) a cada prenda, por lo que no es para nada eficiente. El
valor obtenido con este primer algoritmo fue de 97, haciendo uso de una gran cantidad de tiempo.
Para poder optimizar el algoritmo se realizó lo siguiente:
Primero se ejecuto el codigo entregado en el ultimo trabajo practico con el nuevo input, obteniendo asi un
puntaje que tampoco fue el optimo(106). Una vez obtenido este output, en el codigo provisto se agrego el numero
de lavado para cada prenda para antes de crear el grafo. Además, se agrego en el código la restricción mencionada 
en el enunciado. De esta forma, se pudo obtener el valor optimo(91)


