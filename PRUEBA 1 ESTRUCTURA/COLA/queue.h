#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

class Queue : public Node {
    private:
        Node *backNode;
        int tam;

    public:
        Queue();
        bool enqueue(int);
        bool dequeue();
        int front();
        int size();
        bool isEmpty();
};

#endif // QUEUE_H