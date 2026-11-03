#include "Queue.hpp"

using namespace std;

int main(int argc, const char *argv[]){

    int opcion;
    Queue cola(5);

   
    do{
        
        cout << "=== CENTRO DE IMPRESION ===" << endl;
        cout << "1. Registrar trabajo de impresion " << endl;
        cout << "2. Procesar siguiente trabajo" << endl;
        cout << "3. Mostrar trabajos pendientes" << endl;
        cout << "4. Consultar estado del buffer" << endl;
        cout << "5. Salir" << endl;
        cout << "\nSelecciona una opcion: "<< endl;


        cin >> opcion;
        switch (opcion){
            case 1: {
                trabajo t;

                cout << "Ingresa ID del trabajo: ";
                cin >> t.id;
                cin.ignore();

                cout << "Ingresa el nombre del dueño: ";
                cin >> t.owner;
                getline(cin, t.owner);

                cout << "Ingrese el numero de paginas: ";
                cin >> t.pages;
                cola.enqueue(t);

                break;
            }
            case 2:
                cola.dequeue();
                break;

            case 3:
                cola.traversing();
                break;

            case 4:
                cola.EstadoBuffer();
                break;
                
            case 5:
                cout << "Programa finalizado" << endl;
                break;
        }
    } while (opcion != 5);


}