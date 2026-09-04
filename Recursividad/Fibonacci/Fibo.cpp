#include <iostream>

using namespace std;


/*long fibo (int i){

   

    if (i == 1 || i ==2) return 1;
    else return fibo(i-2) + fibo (i-1);

}
*/

long fibo_c(int i){

    long a =1;
    long b = 1;
    
    i -=2;

    while (i-- > 0){
        
        long  c = a + b;

        a = b;
        b = c;
    }

    return b;
}




int main(int argc, char const *argv[])
{
    
    /*for (int i = 1; i < 100; i++){
        cout << i << " " << fibo_c(i)<< endl;
    }*/
    

    return 0;
}
