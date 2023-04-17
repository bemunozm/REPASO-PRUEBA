#include "node.h"
#include "stock.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    Stock *stock = new Stock();
    cout << "Is empty? " << (stock->is_empty() ? "Yes" : "No") << endl;

    stock->push(1);
    stock->push(2);
    stock->push(3);
    stock->push(4);

    cout << "Is empty? " << (stock->is_empty() ? "Yes" : "No") << endl;
    cout << "Size: " << stock->size() << endl;
    cout << "Top: " << stock->top() << endl;
    stock->pop();
    stock->show();
    cout << "Size after pop: " << stock->size() << endl;

    getchar();
    return 0;
}