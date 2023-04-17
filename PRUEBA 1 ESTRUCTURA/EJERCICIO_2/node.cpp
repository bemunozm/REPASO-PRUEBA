#include "node.h"
#include <iostream>
using namespace std;

Node::Node(){
    dato = -1;
    sig = NULL;
}

Node::Node(int n){
    dato = n;
    sig = NULL;
}

bool Node::add(Node *p){
    p->sig = this->sig;
    this->sig = p;
    return true;
}

bool Node::delete_d(int n){
    Node *aux = NULL;
    if(this->sig->dato == n){
        aux = this->sig;
        this->sig = this->sig->sig;
        delete aux;
        return true;
    }
    else{
        if(this->sig != NULL){
            this->sig->delete_d(n);
        }
        return false;
    }
}

bool Node::delete_i(int pos){
    return this->delete_p(pos,0);
}

bool Node::delete_p(int pos, int actual){
    Node *aux = NULL;
    if(pos == actual){
        aux = this->sig;
        this->sig = this->sig->sig;
        delete aux;
        return true;
    }
    else{
        if(this->sig != NULL){
            this->sig->delete_p(pos, actual + 1);
        }
        return false;
    }
}

void Node::show(){
    cout<<this->dato<<endl;
    if(this->sig != NULL){
        this->sig->show();
    }
}

bool Node::change_dato(int actual, int nuevo){
    if(this->sig != NULL){
        if(this->sig->dato == actual){
            this->dato = nuevo;
            return true;
        }
        else{
            this->sig->change_dato(actual,nuevo);
        }
    }
    return false;
}