#ifndef NODE_H
#define NODE_H

class Node{
    //Atributes
    public:
    int value; //valor del dato
    Node *next; // flecha que apunta al siguiente nodo
    int tam;

    //Methods
    public:
    Node(); //Centinel
    Node(int);  //Constructor
    bool add(Node *);   //Add a node
    bool remove(int);   //Remove a node
    bool positional(int);    //Remove a node by positional
    bool remove_positional(int, int); //Positional
    void show();    //Show the list    
    bool change(int, int);  //change a value from one node 

};

#endif