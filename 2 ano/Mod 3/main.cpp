#include <iostream>
using namespace std;


struct livro{

    string titulo;

};


void inserirtitulo(livro &l){

    cout << "Insira o titulo do livro: ";
    cin >> l.titulo;

    

}

void mostratitulo(livro l){


    cout << "O Titulo do livro e: " << l.titulo << endl;

}



int main(){

    livro livro1;


    inserirtitulo(livro1);
    mostratitulo(livro1);




    return 0;
}