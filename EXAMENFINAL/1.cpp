/*lo que hace el CONSTRUCTOR COPIA es tomar como argumento un objeto del 
mismo tipo de su clase y inicializa un nuevo objeto con la misma información
del constructor anterior*/

        /*        
        DynamicArray (DynamicArray& o){
            this→size=o.size;
            o.data=new int[size];
            for (int i=o; i<size;i++){
                data[i]=o.data[i];
            }}
        main{
            DynamicArray arr1(array int,5);
            DynamicArray arr2;
            arr2=arr1;//esta linea procede gracias al constructor copia
        }
        
        */


/*Dangling pointer es un puntero que apunta a memoria cuyo contenido no esta
definido */
/*
            #include <iostream>
            int* createInteger() {
                int value = 10;
                int* ptr = &value;
                return ptr;
            }

            int main() {
                int* danglingPtr = createInteger(); // Se devuelve un puntero a una variable local
                // La variable 'value' ha dejado de existir y 'danglingPtr' ahora es un dangling pointer
                // Acceder a este puntero puede provocar un comportamiento indefinido

                std::cout << *danglingPtr << std::endl; // Acceso a un dangling pointer
                return 0;
            }
*/

/*El operador de asignación "="no es necesaria en la sobrecarga , sin embargo 
se presenta cuando hay miembros de la clase que son punteros  */
/*
class MiClase {
public:
    int dato;

    // Constructor
    MiClase(int valor) : dato(valor) {}

    // Sobrecarga del operador de asignación
    MiClase& operator=(const MiClase& otra) {
        if (this != &otra) {
            dato = otra.dato;
        }
        return *this;
    }
};
*/

/*El dynamic cast es una función la cual nos sirve para hacer downcasting
, esto consiste en convertir un puntero de clase padre a uno de clase hija.
Esto es poisble mientras sean de la misma jerarquia */

/*
    clasehija hija1(1,2);
    clasehija *ptr1{&hija1};
    clasepadre *ptr2=*ptr1;
    dynamic_cast <ptr2>(ptr1);//esta linea nos ayuda a comprobar el downscasting
    . La cual si carece de una jerarquia va retornar un nullptr, por otro lado puede
    retornar una dirección de memoria
*/


/*Vector STL es un conjunto de datos de un mismo tipo el cual puede tener 
un tamaño que va variando , dicho de otro modo es manipulable y no estatico*/
/*
    vector<int>r1{1,2,3};//se creo un vector de tipo enteros mientras se van
    asignando sus valores
*/