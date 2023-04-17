#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack(){
    dato = -1;
    sig = NULL;
    tam = 0;
}

bool Stack::push(int dato){
    this->add(new Node(dato));
    this->tam++;
    return true;
}

bool Stack::pop(){
    this->delete_i(0);
    this->tam--;
    return true;
}

int Stack::top(){
    return this->sig->dato;
}

int Stack::size(){
    return this->tam;
}

bool Stack::isEmpty(){
    if(this->tam == 0){
        return true;
    }
    return false;
}