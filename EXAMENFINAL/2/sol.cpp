/*

Se crea una clase CDummy la cual tiene un miembro estatico llamado n 
Se creo un constructor que incrementa n en uno cada vez q se cree un objeto
    y un dsetructor que decrementa n en un uno cuando se destruya el objeto.
Luego veremos que se inicializa n en 0 
Luego entramos al main donde creamos un puntero de cdummy llamado a 
Luego entramos a un if verdadero donde se crea un objeto x que al crearse
    se incrementa n en uno.
Luego le seteamos un valor al puntero a en donde se le volverá a incrementar 1
En el primer cout va imprimir 2.
Luego salimos del if y se crea un arreglo  de tipo cdummy llamado b , 
    creando después un objeto cdummy llamado c.
En ese cout nos saldrá error porque pide imprimir x.n cuando x solo está 
    definido en el if , entonces saldrá error de variable no declarada.
*/