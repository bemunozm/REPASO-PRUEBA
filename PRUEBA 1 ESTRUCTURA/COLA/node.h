#ifndef NODE_H
#define NODE_H

class Node{
    //Atributos
    public:
        int dato;
        Node *sig;
    public:
        Node();
        Node(int);
        bool add(Node *);
        bool delete_dato(int);
        bool delete_i(int);
        bool delete_position(int, int);
        void show();
        bool change_position(int, int);
};

#endif