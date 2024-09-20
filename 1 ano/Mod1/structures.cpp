#include <iostream>
#include <string>

using namespace std;


struct bolo{
   string nome;
   double peso;
   double preco;
};

bolo bolos[] = {};

string nomeb, peso, preco;

int main (){

// made by Paulo Leite
// Bolos [0].nome  = "bolo de chocolate";
// Bolos [0].preco = 10
// Bolos [0].peso  = 1


// made by Emanuel 
bolo produto;

produto.nome     = "bolo de chocolate";
produto.preco    = 10;
produto.peso     = 1;


bolos[0]         = produto;


// cout << "Olá ! Vamos fazer a nossa receita !" << endl;
// cout << "Que nome tem este bolo ?" << endl;

// cin >> nomeb ;

// bolos[1] = nomeb;

// cout << "Quanto custa este bolo ?" << endl;
// cin >> bolos[1].preco << endl;

// cout << "Qual o peso do bolo ?" << endl;
// cin >> bolos[1].preco << endl;


// cout << "O bolo que criou é: " << bolos[1].nome << endl;
// cout << "O valor do bolo é: " << bolos[1].preco << endl;
// cout << "O peso do bolo é: " << bolos[1].peso << endl;

// for(int x = 0; x <= 6 ; x++){

// cout << "O bolo que criou é: " << bolos[x].nome << endl;
// cout << "O valor do bolo é: " << bolos[x].preco << endl;
// cout << "O peso do bolo é: " << bolos[x].peso << endl;

// }




// for(int i = 0; i <= 6; i++){
//     bolos[i] = produto;
//     cout << "Bolo = " << i + 1  << " - " <<bolos[i].nome << endl;
//     cout << "preco = " <<bolos[i].preco << endl;
//     cout << "peso = " <<bolos[i].peso << endl;
// }

// cout << "nome - " << bolos[0].nome << endl;
// cout << "preco - " << bolos[0].preco << endl;
// cout << "peso - " << bolos[0].peso << endl;


return 0;
}