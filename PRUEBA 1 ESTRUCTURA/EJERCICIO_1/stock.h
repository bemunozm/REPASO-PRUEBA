#ifndef STOCK_H
#define STOCK_H
#include "node.h"

class Stock:public Node{

    public:
    bool push(int);
    int pop();
    int top();
    int size();
    bool is_empty();
};

#endif