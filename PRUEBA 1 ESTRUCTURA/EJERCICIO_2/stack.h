#include "node.h"

class Stack:public Node{
    public:
        int tam;
    public:
        Stack();
        bool push(int);
        bool pop();
        int top();
        int size();
        bool isEmpty();
};