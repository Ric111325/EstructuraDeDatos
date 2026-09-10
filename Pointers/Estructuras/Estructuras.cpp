#include <iostream>


using namespace std;

typedef struct {
    float x;
    float y;


} point;

void print (point p){

    cout <<"Variable: (" << p.x << ","<< p.y << ")" << endl ;

}

void print (point *p){

    cout <<"Apuntador: (" << p -> x << ","<< (*p).y << ")" << endl ;

}

int main(int argc, char const *argv[]){
    
    point a;

    a.x = 4;
    a.y = 5;

    print(a);
    print(&a);

    return 0;
}
