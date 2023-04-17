#ifndef NODE_H
#define NODE_H
class Node{
    public:
        int dato;
        Node *sig;
    
    public:
        Node();
        Node(int);
        bool add(Node *);
        bool delete_d(int);
        bool delete_i(int);
        bool delete_p(int, int);
        void show();
        bool change_dato(int, int);
};

#endif