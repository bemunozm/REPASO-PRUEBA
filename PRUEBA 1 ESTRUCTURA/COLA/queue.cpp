#include "queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {
    this->sig = NULL;
    backNode = NULL;
    tam = 0;
}

bool Queue::enqueue(int dato) {
    Node *newNode = new Node(dato);

    if (isEmpty()) {
        this->sig = newNode;
        backNode = newNode;
    } else {
        backNode->sig = newNode;
        backNode = newNode;
    }
    tam++;
    return true;
}

bool Queue::dequeue() {
    if (!isEmpty()) {
        Node *tempNode = this->sig;
        this->sig = this->sig->sig;
        delete tempNode;
        tam--;

        if (tam == 0) {
            backNode = NULL;
        }
        return true;
    }
    return false;
}

int Queue::front() {
    if (!isEmpty()) {
        return this->sig->dato;
    }
    return -1;
}

int Queue::size() {
    return tam;
}

bool Queue::isEmpty() {
    return tam == 0;
}
