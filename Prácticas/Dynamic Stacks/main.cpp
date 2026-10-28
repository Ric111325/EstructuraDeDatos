#include <iostream>
#include <string>
#include <algorithm>
#include "dstack.hpp"

using namespace std;

void clean(string &s){
    //Limpiar la cadena

    //Quitar espacios    
    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    //Transformar mayusculas a minusculas

    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ 

        return std::tolower(c);
        }
    );
}

bool ispal(string &s){

    Dstack pila((int)s.length());

    // Prueba
    for (int i = 0; i < s.length(); i++) pila.push(s[i]);
    
    int i = 0;

    while (!pila.empty()){
        
        char c = pila.pick();
        pila.pop();

        if (s[i++] != c) return false;
    }  
    return true;

}

int main(int argc, char const *argv[]){
    
    string frase;

    cout << "Ingresa una frase: " << endl;
    getline(cin, frase);
    clean(frase);


    if (ispal(frase)) cout << "\nEs palindromo" << endl;
    else cout << "\nNo es palindromo" << endl ; 


    return 0;
}
