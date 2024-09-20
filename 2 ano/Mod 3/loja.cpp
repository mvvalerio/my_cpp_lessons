#include <iostream>

using namespace std;


struct produto {
    string nome;
    float preco;
    int quantidade;
};

// ------------------------

void menu(){

    system("clear");

    cout << endl;

    cout << "---------- Menu ----------" << endl;

    cout << endl;

    cout << "1 - Adicionar Produto" << endl;
    cout << "2 - Exibir Produtos" << endl;
    cout << "3 - Calcular Valor Total do Stock" << endl;
    cout << "0 - Sair" << endl;

    cout << endl;

    cout << "---------- Menu ----------" << endl;

}

// ------------------------

int getopcao(){

    cout << endl;

    int opcao;

    cout << "Número: ";

    cin >> opcao;

    return opcao;
}

// ------------------------ 

void addprod(produto Produtos[], int& quantidadeatual){

    cout << "---------------------------------" << endl;

    cout << "Adicione o Nome do Produto: ";
    cin >> Produtos[quantidadeatual].nome;

    cout << endl;

    cout << "Adicione o Preço do Produto: ";
    cin >> Produtos[quantidadeatual].preco;

    cout << endl;

    cout << "Adicione a Quantidade do Produto: ";
    cin >> Produtos[quantidadeatual].quantidade;

    cout << "---------------------------------" << endl;


}

void exibprod(const produto Produtos[], int quantidadeatual){

    cout << "---------------------------------" << endl;

    cout << "Nome do Produto: " << Produtos[quantidadeatual].nome << endl;

    cout << endl;

    cout << "Preço do Produto: " << Produtos[quantidadeatual].preco << endl;

    cout << endl;

    cout << "Quantidade do Produto: " << Produtos[quantidadeatual].quantidade << endl;

    cout << "---------------------------------" << endl;

}

float calcvaltotal(const produto Produtos[], int qualidadeatual){



}

// ------------------------

void executeshop(int opcao, produto Produtos[], int quantidadeatual){

    switch (opcao){

        case 1:

        

        break;


        case 2:

        break;


        case 3:

        break;


        case 0:

        cout << "Saindo da Lista... " << endl;

        break;

        default:

        cout << "Opção Inválida, voltando ao menu inicical !" << endl;

        

        break;

    }

}


// ------------------------

int main(){

    produto Produtos[500];
    int quantidadeatual = 0;

    int opcao;
    menu();
    opcao = getopcao();
    executeshop(opcao, Produtos, quantidadeatual);


    return 0;
}