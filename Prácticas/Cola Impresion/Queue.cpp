#include "Queue.hpp"

Queue::Queue(int capacidad){

    n = 5;
    s = 0;
    front = 0;
    rear = 0;
}

Queue::~Queue(){

}

void Queue::enqueue(trabajo x){

    if (full()){
        cout << "Cola de impresion llena" << endl;
        return;
    }

    buffer[rear] =  x;
    rear = (rear + 1) % n;
   
    s++;
}

void Queue::dequeue(){

    if (empty()){
        cout << "La cola esta vacia" << endl;
        return;
    }

    cout << "ID: " << buffer[front].id << "\n Dueño: " << buffer[front].owner << "\n Paginas: " << buffer[front].pages << endl;
    
    front = (front + 1) % n;
    s--;
}
// nos "faltara" hacer el traversing  
void Queue::traversing(){

    if (empty()){
        cout << "La cola esta vacia" << endl;
        return;
    }

    cout << "Cola de impresion: " << endl;
    
    for (int i = 0; i < s; i++){ 
        
        int posicion = (front + i) % n;
        cout << "ID: " << buffer[posicion].id << " || Dueño: " << buffer[posicion].owner << " || Paginas: " << buffer[posicion].pages << endl;
    }

}

void Queue::EstadoBuffer(){
    
    cout << "Capacidad del buffer: " << n << endl;
    cout << "Trabajos pendientes: " << s << endl;
}
