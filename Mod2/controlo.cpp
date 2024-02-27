#include <iostream>

using namespace std;

int somaNum(int limite){

    int soma = 0;

    for(int i = 1; i <= limite; i++){
        soma += i;
    }
   
    system("clear");
    
    return soma;
}

int getLimit(){

    int limite;

    cout << "Adicione o limite: ";
    cin >> limite;

    return limite;
}


int main(){

    int limite = getLimit();
    

    cout << "Total soma: " << somaNum(limite) << endl;


    return 0;
}