#include "Queue.hpp"

Queue::Queue(int capacidad){

    n = 5;
    s = 0;
    front = 0;
    rear = 0;
}

Queue::~Queue(){
       
}

int Queue::forth (int i){

    return (i + 1) % n;
}

void Queue::enqueue(trabajo t){

    if (full()){
        cout << "\nCola de impresion llena" << endl;
        return;
    }

    buffer[rear] =  t;
    rear = forth(rear);
   
    s++;
}

void Queue::dequeue(){

    if (empty()){
        cout << "La cola esta vacia" << endl;
        return;
    }

    cout<< "\nImprimiendo:" << endl;
    cout << "ID: " << buffer[front].id << "\nPropietario: " << buffer[front].owner << "\nPaginas: " << buffer[front].pages << endl;
    
    front = forth(front);
    s--;
}

void Queue::traversing(){
    
    if(empty()){
        cout << "La cola esta vacia"<< endl;
        return;
    }

    cout << "\nCola de impresion: " << endl;
    
    int i = front;  

    if (full()) {
        cout << "ID: " << buffer[i].id << " ||Propietario: " << buffer[i].owner << " ||Paginas: " << buffer[i].pages << endl;
        i = forth(i); 
    }
    
    for (i; i != rear; i = forth(i)){
        cout << "ID: " << buffer[i].id << " ||Propietario: " << buffer[i].owner << " ||Paginas: " << buffer[i].pages << endl;
    }
}

void Queue::EstadoBuffer(){
    
    cout << "\nEstado del buffer: " << endl;
    cout << "Capacidad del buffer: " << n << endl;
    cout << "Trabajos pendientes: " << s << endl;
}
