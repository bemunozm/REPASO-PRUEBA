#include "node.h"
#include <iostream>
#include <stdio.h>
using namespace std;

Node::Node(){
    value = -1;
    next = NULL;
    tam = 0;
}

Node::Node(int value){
    this->value = value;
    next = NULL;
    tam = 0;
}

bool Node::add(Node *p){
    p->next = this->next;
    this->next = p;
    return true;
}

bool Node::remove(int n){
    Node *p = NULL;
    if(this->next->value == n){
        p = this->next;
        this->next = this->next->next;
        delete p;
        return true;
    }
    else{
        if(this->next != NULL){
            this->next->remove(n);
        }
        return false;
    }
}

bool Node::positional(int n){
    return this->next->remove_positional(n,0); //llama a la funcion partiendo desde el centinela
}

bool Node::remove_positional(int delete_i, int position){ // delete_i = posicion a borrar y position = a posicion actual
    Node *p = NULL;
    if(delete_i == position+1){ // verifica si el que queremos borrar es igual al position + 1
        p = this->next;
        this->next = this->next->next;
        delete p;
        return true;
    }
    else{
        if(this->next != NULL){
            this->next->remove_positional(delete_i,(position + 1));
        }
        return false;
    }
}

void Node::show(){
    if(this->next == NULL){
        cout<<this->value<<endl;
    }
    else{
        cout<<this->value<<endl;
        this->next->show();
    }
}

bool Node::change(int n, int new_n){
    if(this->next != NULL){
        if(this->next->value ==n){
            this->next->value = new_n;
            return true;
        }
        else{
            this->next->change(n,new_n);
        }
    return false;
    }
    return false;
}
