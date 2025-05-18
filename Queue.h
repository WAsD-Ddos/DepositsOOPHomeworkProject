#include "Clients.h"


class Queue {
private:
    Deposit* queue;  
    int size;        

public:
    Queue();
    ~Queue();
    void enqueue(Deposit element);  
    Deposit dequeue();              
    Deposit peek();                 
    int getLength();
    bool isEmpty();
    string toString();
};
