#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {
    topNode = NULL;
    tam = 0;
}

bool Stack::push(int dato) {
    Node *newNode = new Node(dato);
    newNode->sig = topNode;
    topNode = newNode;
    tam++;
    return true;
}

bool Stack::pop() {
    if(isEmpty() == 0){
    Node *tempNode = topNode;
    topNode = topNode->sig;
    delete tempNode;
    tam--;
    return true;
    }
    return false;
}

int Stack::top() {
    if(isEmpty() == 0){
        return topNode->dato;
    }
    return -1;
}

int Stack::size() {
    return tam;
}

bool Stack::isEmpty() {
    if(tam == 0){
        return true;
    }
    return false;
}
