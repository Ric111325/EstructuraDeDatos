#include <iostream>
#include <string>

using namespace std;

typedef struct snode
{
    string mssg;
    snode *yes;
    snode *no;

} node;

void inicializa(node &p, string m, node*y, node*n){

    p.mssg = m;
    p.yes = y;
    p.no = n;
};

int main(int argc, char const *argv[]){

    node a[11];

    //Construccion del nodo
    inicializa(a[0],"Does the damn thing work?",&a[2],&a[3]);
    inicializa(a[1],"No problem!",nullptr,nullptr);
    inicializa(a[2],"Don't fuck with it",&a[1],nullptr);
    inicializa(a[3],"Did you fuck with it?",&a[4],&a[8]);
    inicializa(a[4],"You dumb shit",&a[5],nullptr);
    inicializa(a[5],"Does anyone know?",&a[7],&a[6]);
    inicializa(a[6],"Hide it",&a[1],nullptr);
    inicializa(a[7],"Your poor bastard",&a[9],nullptr);
    inicializa(a[8],"Will you catch hell?",&a[7],&a[10]);
    inicializa(a[9],"Can you blame someone else?",&a[1],&a[7]);
    inicializa(a[10],"Shit-can it",&a[1],nullptr);

    // Procedimiento
    node *p = &a[0];
    
    while (p != nullptr){
        
        cout << p -> mssg << endl;

        if (p -> no == nullptr)p = p -> yes;
        else
        {
            string answer;

            cin >> answer;

            if (answer == "yes")p = p -> yes;
            else p = p -> no;
        }  
    }
    
    return 0;
}
