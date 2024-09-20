#include <iostream>

using namespace std;


void opcao1(){
    cout << "n é 1" << endl;
}

void opcao2(){
    cout << "n é 2" << endl;
}

void opcao3(){
    cout << "n é 3" << endl;
}

int main(){

    int n;
    cin >> n;

    switch(n){

        case 1:
            opcao1();
            break;

        case 2:
            opcao2();
            break;

        case 3:
            opcao3();
            break;
            
        default:
        cout << "n não é 1 nem 2 nem 3" << endl;
        break;
    }

return 0;
}

