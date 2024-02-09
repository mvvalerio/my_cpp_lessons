#include <iostream>

using namespace std;


int main(){

    int x = 0;

    while (x < 10){
        
        cout << "x tem o valor de " << x << endl;
        cout << "test" << endl;
        cout << "" << endl;
        
        x++;

        if (x == 10){

            cout << "valor x: " << x << endl;
            cout << "chegou a 10 para quieto banana" << endl;
            break;
        }

    }

return 0;
}