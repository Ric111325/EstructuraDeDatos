#include "dstack.hpp"


int main(int argc, const char *argv[]){
    
    srand((unsigned) time (nullptr));

    Dstack pila(10);
//prueba de generar inseciones y extracciones de manera random

    while (!pila.full()){
       
        if (rand()% 2 == 0){ //extraccion
          
            if (pila.empty())cout << "No se puede hacer Pop" << endl;
            else{
                int x = rand() % 100 + 1;

                cout << x << ": " ;
                pila.push(x);
                pila.print();
            }

        } else { //insercion
            int x = rand() % 100 + 1;

            cout << x << ": " ;
            pila.push(x);
            pila.print();
            
        }

    }
    
/* Prueba de que funciona
    while (!pila.full()){
        int x = rand() % 100 + 1;

        cout << x << ": " ;
        pila.push(x);
        pila.print();
    }
    
    cout << endl << "Vaciado de la pila: " << endl;

    while ( !pila.empty()){
        
        int x = pila.pick();

        pila.pop();

        cout << x << " ";
        pila.print();
    }
    */

    return 0;
}
