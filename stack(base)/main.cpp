#include "stack.hpp"

int main(int argc, char const *argv[]){
    
    int n = 10;
    srand((unsigned) time(nullptr));

    Stack s(n);

    cout << "Insercion de datos" << endl; 

    while (!s.full()){
        int x = rand () %(n * 10) + 1;
    
        cout << "x: " << x << " ";

        s.push(x);
        s.print();

    }
    
    cout << "\nPila llena\n";
    cout << "\nExtraccion de datos\n\n";

    while (!s.empty())
    {
        int x = s.pick();

        s.pop();

        cout << x << " ";
        s.print();
    }
    
    cout << "\nPila vacia";

    return 0;
}
