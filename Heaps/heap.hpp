#ifndef heap_hpp
#define heap_hpp

#include <iostream>
#include <cassert>

using namespace std;

class heap{

    int n; // Capacidad
    int s; // Tamaño

    int *a; // Arreglo

    void swap(int &, int &);

    int parent(int i){ return (i - 1) / 2 ;}
    int left(int i){ return 2 * i + 1;}
    int right(int i){ return 2 * i + 2;}

public:

    heap(int);
    ~heap();

    void ins(int);


    int capacity () const { return n;}
    int size() const {return s;}

    bool full() {return n == s;}
    bool empty() {return s == 0;}

    void print();

};






#endif /* heap_hpp */
