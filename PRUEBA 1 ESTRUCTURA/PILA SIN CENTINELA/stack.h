#ifndef STACK_H
#define STACK_H

#include "node.h"

class Stack {
    private:
        Node *topNode;
        int tam;

    public:
        Stack();
        bool push(int);
        bool pop();
        int top();
        int size();
        bool isEmpty();
};

#endif // STACK_H