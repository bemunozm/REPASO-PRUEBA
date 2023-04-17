#include "queue.h"
#include <iostream>
using namespace std;

int main() {
    // Iniciar variables
    Queue cola;

    // Agregar datos a la cola
    cola.enqueue(0);
    cola.enqueue(1);
    cola.enqueue(2);
    cola.enqueue(3);
    cola.enqueue(4);
    cola.enqueue(5);
    cola.enqueue(6);

    // Preguntar si está vacía y ver tamaño
    cout << "Esta vacia la cola?: " << cola.isEmpty() << endl;
    cout << "Cual es el tamaño de la cola?: " << cola.size() << endl;

    // Front
    cout << "Cual es el frente?: " << cola.front() << endl;

    // Dequeue
    cola.dequeue();

    // Front
    cout << "Cual es el frente?: " << cola.front() << endl;

    getchar();
    return 0;
}
