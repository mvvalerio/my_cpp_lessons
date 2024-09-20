#include <iostream>

using namespace std;


const float PI = 3.1415;
float o = 2.3;


int teste(){                      //para retornar um valor no main usar 'int'

    static int xpto = 3;          //A variavel static mantem o endereço de memória, poupa memória

    return xpto;
}


int main(){

    int n=0;

    while(n<=10){
        
        cout << n << endl;

        n++;
    
    }

    
}