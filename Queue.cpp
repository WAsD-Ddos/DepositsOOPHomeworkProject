#include "Queue.h"
#include <string>

Queue::Queue() {
    queue = nullptr;
    size = 0;
}

Queue::~Queue() {
    if (queue != nullptr) {
        delete[] queue;
    }
}

bool Queue::isEmpty() {
    return size == 0;
}

int Queue::getLength() {
    return size;
}

void Queue::enqueue(Deposit element) {
    if (isEmpty()) {
        size = 1;
        queue = new Deposit[size];
        queue[0] = element;
    }
    else {
        Deposit* temp = new Deposit[size + 1];
        for (int i = 0; i < size; i++) {
            temp[i] = queue[i];
        }
        temp[size] = element;
        size++;
        delete[] queue;
        queue = temp;
    }
}

Deposit Queue::dequeue() {
    if (!isEmpty()) {
        Deposit first = queue[0];
        size--;
        Deposit* temp = new Deposit[size];
        for (int i = 0; i < size; i++) {
            temp[i] = queue[i + 1];
        }
        delete[] queue;
        queue = temp;
        return first;
    }
    return Deposit(); 
}

Deposit Queue::peek() {
    if (!isEmpty()) {
        return queue[0];
    }
    return Deposit();  
}

string Queue::toString(){
    if (isEmpty()) {
        return "Queue is empty";
    }
    string s = "[ ";
    for (int i = 0; i < size; i++) {
        if (i != 0) { s += "\n"; }
        s += queue[i].getInfo();
    }
    return s += "]";
}
