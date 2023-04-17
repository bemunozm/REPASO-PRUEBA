#include "node.h"
#include "stack.h"
#include <iostream>
using namespace std;

int main(){
    //INICIAR VARIABLES
    Stack *pila = new Stack();

    //Agregar datos a la pila
    pila->push(0);
    pila->push(1);
    pila->push(2);
    pila->push(3);
    pila->push(4);
    pila->push(5);
    pila->push(6);

    //Preguntar si esta vacia y ver tamaño
    cout << "Esta vacia la pila?: "<< pila->isEmpty()<<endl;
    cout << "Cual es el tamano de la pila?: "<< pila->size()<<endl;

    //Top
    cout<<"Cual es el top?: "<<pila->top()<<endl;

    //borrar
    pila->pop();

    //Top
    cout<<"Cual es el top?: "<<pila->top()<<endl;

    getchar();
    return 0;
}