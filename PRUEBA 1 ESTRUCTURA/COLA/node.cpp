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

bool Node::add(Node *nuevo){
    nuevo->sig = this->sig;
    this->sig = nuevo;
    return true;
}

bool Node::delete_dato(int n){
    Node *p = NULL;
    if(this->sig->dato == n){
        p = this->sig;
        this->sig = this->sig->sig;
        delete p;
        return true;
    }
    else{
        if(this->sig != NULL){
            this->sig->delete_dato(n);
        }
    }
    return false;
}

bool Node::delete_i(int pos){
    return this->delete_position(pos, 0);
}

bool Node::delete_position(int pos, int act){
    Node *p = NULL;
    if(pos == act){
        p = this->sig;
        this->sig = this->sig->sig;
        delete p;
        return true;
    }
    else{
        if(this->sig != NULL){
            this->sig->delete_position(pos, act + 1);
        }
    }
    return false;
}

void Node::show(){
    cout<<this->dato<<endl;
    if(this->sig != NULL){
        this->sig->show();
    }
}

bool Node::change_position(int act, int nuevo){
    if(this->sig->dato == act){
        this->sig->dato = nuevo;
        return true;
    }
    else{
        if(this->sig != NULL){
            this->sig->change_position(act, nuevo);
        }
    }
    return false;
}