#include <iostream>

using namespace std;


/*int soma(int lista[]){

    int soma = 0;

    for(int x = 0; x < 5; x++){

        soma += lista[x];
    }

    return soma;
}
*/

/*float soma(float x, float y = 10.2){

    return x+y;
}
*/

/* ---------------------------------------------------------

                           Classes

   --------------------------------------------------------- */

class Carro{

public:

    int velocidade;
    int velocidadeMax;
    string nome;
    void insere(string x, int y); // funções dentro de class são métodos
    void mostra();

    void setNmodelo(int x){
        n_modelo = x;
    }

private:

    int n_modelo;

};

int main(){

    Carro carro1;

    carro1.nome = "BMW";

    carro1.setNmodelo(320);

    return 0;
}