#include <iostream>
#include "olist.hpp"

int main(int argc, char const *argv[]){
    
    srand((unsigned) time (nullptr));

    olist list (10);

    while (!list.full()){
        int x = rand () % 100 + 1;

        cout << x << " ";
        list.ins(x);
        list.print();

    }

    int x;  
    cout << "Dame un dato: ";
    cin >> x;
    
    /* if (list.membresia(x)) cout << "Si esta\n";
    else cout << "No esta\n";
    MEMBRESIA
    */
    
    /*olist::node *p = list.referencia(x);
    
    if (p != nullptr){
        cout <<"Si esta: "<< p -> data() << endl;

    }else cout << "No esta\n";
    REFERENCIA
    */

    /* 
    int resp = list.copia(x);
    if (resp != -1) cout << "Si esta: " << resp << endl;
    else cout << "No esta\n";
    COPIA
    */

    int c;
    if (list.convento(x, c)) cout << "Si esta: " << c << endl;
    else cout << "No esta\n";
    
    return 0;

}

// Faltamplementar el hecho de que se inserten datos duplicados, en caso de eso no insertarlo y tampoco agrandar el tamaño de la lista

