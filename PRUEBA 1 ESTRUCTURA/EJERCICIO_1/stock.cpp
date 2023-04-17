#include "node.h"
#include "stock.h"
#include <iostream>
using namespace std;

bool Stock::push(int n){
    this->add(new Node(n));
    this->tam++;
    return true;
}

int Stock::pop(){
    int p = this->value;
    this->positional(0);
    this->tam--;
    return p;
}

int Stock::top(){
    return this->next->value;
}

int Stock::size(){
    return this->tam;
}

bool Stock::is_empty(){
    if(this->tam == 0){
        return true;
    }
    else{
        return false;
    }
}