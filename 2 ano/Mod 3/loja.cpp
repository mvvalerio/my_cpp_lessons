#include <iostream>

using namespace std;

// --------------------------------------------------------

struct produto {
    string nome;
    float preco;
    int quantidade;
};

const int prodmax = 10;
produto Produtos[prodmax];
int quantidadeatual = 0;
int opcao;

// --------------------------------------------------------

void addprod(produto Produtos[], int& quantidadeatual){
    
    system("clear");
    
    cout << "--------------------------------------" << endl;

    cout << "Adicione o Nome do Produto: ";
    cin >> Produtos[quantidadeatual].nome;

    cout << endl;

    cout << "Adicione o Preço do Produto: ";
    cin >> Produtos[quantidadeatual].preco;
    
    cout << endl;

    cout << "Adicione a Quantidade do Produto: ";
    cin >> Produtos[quantidadeatual].quantidade;

    cout << "--------------------------------------" << endl;
    
    quantidadeatual++;
    
    system("clear");
    
    cout << "Produto(s) adicionado(s) com sucesso !" << endl;
    
    cout << "--------------------------------------" << endl;
    
    cout << endl;

}

// --------------------------------------------------------

void exibprod(const produto Produtos[], int quantidadeatual){
    
    system("clear");
    
    if(quantidadeatual == 0){
        
        cout << "Nenhum produto adicionado !" << endl;

        cout << endl;
        
    }
    
    for(int x = 0; x < quantidadeatual; x++){

        cout << "--------------------------------------" << endl;

        cout << "Nome do Produto " << x+1 << ": " << Produtos[x].nome << endl;

        cout << endl;

        cout << "Preço do Produto " << x+1 << ": " << Produtos[x].preco << " EUR" << endl;

        cout << endl;

        cout << "Quantidade do Produto " << x+1 << ": " << Produtos[x].quantidade << endl;

        cout << "--------------------------------------" << endl;
    }
    
}

// --------------------------------------------------------

float calcvaltotal(const produto Produtos[], int quantidadeatual){
    
    float total = 0.0;

    for(int x = 0; x < quantidadeatual; x++){
        total += Produtos[x].preco * Produtos[x].quantidade;
    }
    
    system("clear");

    return total;
}

// --------------------------------------------------------

void executeshop(int opcao, produto Produtos[], int quantidadeatual){

    do{

        cout << "|--------------- MENU ---------------|" << endl;

        cout << "|                                    |" << endl;
        
        cout << "|   ! QUANTIDADE PRODUTOS MÁXIMO !   |" << endl;
        cout << "|               ! 10 !               |" << endl;
        
        cout << "|                                    |" << endl;
        
        cout << "|------------------------------------|" << endl;
        
        cout << "|                                    |" << endl;
 
        cout << "|1 - Adicionar Produto               |" << endl;
        cout << "|2 - Exibir Produtos                 |" << endl;
        cout << "|3 - Calcular Valor Total do Stock   |" << endl;
        cout << "|0 - Sair                            |" << endl;

        cout << "|                                    |" << endl;

        cout << "|--------------- MENU ---------------|" << endl;
        
        cout << endl;
        
        cout << "Escolha nº ";
        cin >> opcao;
        
        switch(opcao){
            
            case 1:
                
                if(quantidadeatual < prodmax){
                    
                    addprod(Produtos, quantidadeatual);
                    
                }else {
                    
                    cout << endl;
                    
                    cout << "Quantidade máxima atingida !" << endl;
                    
                }
            
            break;
            
            case 2:
            
                exibprod(Produtos, quantidadeatual);
            
            break;
            
            case 3:
            
                cout << "Valor Total dos Produtos é de: " << calcvaltotal(Produtos, quantidadeatual) << " EUR" << endl;
                
                cout << endl;
            
            break;
            
            case 0:

                system("clear");
            
                cout << endl;
            
                cout << "A Sair..." << endl;

                cout << endl;
            
            break;
            
            default:
            
                system("clear");
            
                cout << "Opção Inválida !" << endl;
                
                cout << endl;
            
            break;
            
        }
            
    }while(opcao != 0);
}

    
// --------------------------------------------------------

int main(){
    
    executeshop(opcao, Produtos, quantidadeatual);

    return 0;
}
