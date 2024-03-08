#include <iostream>

using namespace std;


struct pessoa{

    int idade;
    string pNome;
    string uNome;
    long cc;

};

pessoa editarPessoa(pessoa x){

    x.pNome = "Oscar";
    x.uNome = "Pastilha";
    x.idade = 19;
    x.cc = 5892572; 

    return x;
}

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

    pessoa padeiro;

    editarPessoa(padeiro);

    int limite = getLimit();
    

    cout << "Total soma: " << somaNum(limite) << endl;


    return 0;
}