#include <iostream>
#include "olist.hpp"




int main(int argc, char const *argv[])
{
    srand((unsigned) time (nullptr));

    olist list (10);

    while (!list.full())
    {
        int x = rand () % 100 + 1;

        cout << x << " ";
        list.ins(x);
        list.print();
    }
    
    
    return 0;
}

// Implementar el hecho de que se inserten datos duplicados, en caso de eso no insertarlo y tampoco agrandar el tamaño de la lista

