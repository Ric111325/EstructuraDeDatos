#ifndef Queue_hpp
#define Queue_hpp

#include <iostream>
#include <string>

using namespace std;


struct trabajo {
    int id;
    string owner;
    int pages;
};

class Queue{

    int n; 
    int s; 
    trabajo buffer[5]; 

    int front;
    int rear;

public:
    
    Queue(int);
    ~Queue();

    void enqueue(trabajo);
    void dequeue();
    void traversing();
    
    void EstadoBuffer();

    int capacity () const { return n;}
    int size() const {return s;}

    bool full() {return n == s;}
    bool empty() {return s == 0;}


};

#endif