#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>  // para usar o tolower()

using namespace std;

// --------------------------------------------------------

struct produto {
    int id;
    string nome;
    float preco;
    int quantidade;
    char estado;
};

const int prodmax = 50;
produto Produtos[prodmax];
int quantidadeatual = 0;
int opcao;

// --------------------------------------------------------

int ultimoID = 0;
const string nomeFicheiro = "produtos.txt";

// --------------------------------------------------------

void arquivoDB() {
    
    ifstream arquivo(nomeFicheiro);
    
    if (!arquivo) {
        
        // O ficheiro não existe
        
        char opcao;
        
        cout << "O ficheiro de base de dados não foi encontrado." << endl;
        
        cout << endl;
        
        cout << "Quer criar um ficheiro novo de base de dados? (S/N): ";
        
        cin >> opcao;

        if (opcao == 'S' || opcao == 's') {
            
            // Cria um novo ficheiro
            ofstream novoArquivo(nomeFicheiro);
            
            novoArquivo.close();
            
            system("clear");
            
            cout << "Ficheiro de base de dados criado com sucesso!" << endl;
            
            cout << "---------------------------------------------" << endl;
            
            cout << endl;
            
        } else {
            
            // Sai do programa
            
            system("clear");
            
            cout << "A sair..." << endl;
            
            exit(0); // Termina o programa
        }
    }
}

// --------------------------------------------------------

void lerprod(produto Produtos[], int& quantidadeatual){

    ifstream arquivo(nomeFicheiro);
    
    if (!arquivo) return;

    quantidadeatual = 0; 
    
     while (arquivo.good() && quantidadeatual < prodmax) {    
        produto prod;
        string line;
    
       
        if (getline(arquivo, line)) {
            
            stringstream ss(line);
            string idStr, precoStr, quantidadeStr, estadoStr;
            
            
            getline(ss, idStr, ',');              
            getline(ss, prod.nome, ',');          
            getline(ss, precoStr, ',');           
            getline(ss, quantidadeStr, ',');      
            getline(ss, estadoStr, ',');        
            
            
            prod.id = stoi(idStr);                
            prod.preco = stof(precoStr);          
            prod.quantidade = stoi(quantidadeStr);
            prod.estado = estadoStr[0];

            Produtos[quantidadeatual] = prod;
            quantidadeatual++; 
        }
    }
    
    arquivo.close(); 

}


// --------------------------------------------------------

void escreverprod(produto Produtos[], int quantidadeatual){
 
    ofstream arquivo(nomeFicheiro);  // output file stream, escreve nos arquivos
    
    if(arquivo.is_open()){
        
        for(int x = 0; x < quantidadeatual; x++){
            
            arquivo << Produtos[x].id         << ","
                    << Produtos[x].nome       << ","
                    << Produtos[x].preco      << ","
                    << Produtos[x].quantidade << ","
                    << Produtos[x].estado     << endl;
            
        }
        
        arquivo.close();
        
        cout << "Produtos salvos com sucesso !" << endl;
        
    } else {
        
        cout << "Oops.. parece que aconteceu um imprevisto para escrever no ficheiro !" << endl;
        
    }
    
}

// --------------------------------------------------------

void deleteprod(produto Produtos[], int quantidadeatual){

    system("clear");
    
    int idProduto;
    
    cout << "Insira o ID do produto que deseja deletar." << endl;
    
    cout << endl;
    
    cout << "ID do Produto: ";
    cin >> idProduto;
    
    for(int x = 0; x < quantidadeatual; x++){
        
        if(idProduto == Produtos[x].id){
            
            Produtos[x].estado = 'd';
            escreverprod(Produtos, quantidadeatual);

            system("clear");
           
            cout << "Produto de ID " << idProduto << " apagado com sucesso !" << endl;

            cout << endl;
            
            return;  // o bloco de código não vai para o cout a baixo porque lê todos os produtos disponiveis e se caso houver o id vai dar return a nada ou seja não vai para o cout a baixo
        }
           
    }        
        
    cout << "Produto com ID " << idProduto << " não é válido !" << endl;
    
}

// --------------------------------------------------------

char valorestado(){
    
    char estadoprod;
    
    cout << "Escolha o estado para o produto (Ativo = a ; A / Deletado = d ; D): ";
    cin >> estadoprod;
    
    estadoprod = tolower(estadoprod);   // converte todos os estados em minusculas
    
    if(estadoprod == 'a' ||  estadoprod == 'd'){
        
        return estadoprod;
        
    } else{
        
        cout << "Estado introduzido está inválido ! Insira um estado válido (Ativo = a , A ; Deletado = d , D )" << endl;
    }
    
}

// --------------------------------------------------------

void modificaprod(produto Produtos[], int quantidadeatual){
    
    system("clear");
    
    int idProduto;

    cout << "Escolha o ID do produto que deseja modificar !" << endl;
    
    cout << "ID: ";
    cin >> idProduto;
    
    cout << endl;
    
    for(int x = 0; x < quantidadeatual; x++){
        
        if(idProduto == Produtos[x].id){
            
            cout << "Escolha um novo nome para o produto." << endl;
            
            cout << "Novo Nome: ";
            cin >> Produtos[x].nome;
            
            cout << endl;
            
            cout << "Escolha uma nova quantidade para o produto." << endl;
            
            cout << "Nova Quantidade: ";
            cin >> Produtos[x].quantidade;
            
            cout << endl;
            
            cout << "Escolha um novo preço para o produto." << endl;
            
            cout << "Novo Preço: ";
            cin >> Produtos[x].preco;
            
            cout << endl;
            
            Produtos[x].estado = valorestado();

            escreverprod(Produtos, quantidadeatual);
            
            cout << endl;

            system("clear");
            
            cout << "Produto com ID " << idProduto << " modificado com sucesso !" << endl;
            
            return;
        }
        
    }
    
    cout << "Produto com ID " << idProduto << " é inválido, tente um ID válido !" << endl;
    
}

// --------------------------------------------------------

void addprod(produto Produtos[], int& quantidadeatual, int& ultimoID){
    
    system("clear");
    
    Produtos[quantidadeatual].id = ++ultimoID;

    cout << "Adicione o Nome do Produto: ";
    cin >> Produtos[quantidadeatual].nome;
    getline(cin, Produtos[quantidadeatual].nome);

    cout << endl;

    cout << "Adicione o Preço do Produto: ";
    cin >> Produtos[quantidadeatual].preco;
    
    cout << endl;

    cout << "Adicione a Quantidade do Produto: ";
    cin >> Produtos[quantidadeatual].quantidade;
    
    cout << endl;
    
    Produtos[quantidadeatual].estado = 'a'; 
    
    cout << "--------------------------------------" << endl;
    
    quantidadeatual++;
    
    escreverprod(Produtos, quantidadeatual);
    
    system("clear");
    
    cout << "Produto adicionado com sucesso ! (ID: " << Produtos[quantidadeatual-1].id << ")"  << endl;
    
    cout << "--------------------------------------" << endl;
    
    cout << endl;

}

// --------------------------------------------------------

void consultprod(const produto Produtos[], int quantidadeatual){
    
    system("clear");
    
    if(quantidadeatual == 0){
        
        cout << "Nenhum produto adicionado !" << endl;

        cout << endl;
        
    }
    
    for(int x = 0; x < quantidadeatual; x++){

        cout << "--------------------------------------" << endl;
        
        cout << "ID do Produto: " << Produtos[x].id << endl;
        
        cout << endl;

        cout << "Nome do Produto: " << Produtos[x].nome << endl;

        cout << endl;

        cout << "Preço do Produto: " << Produtos[x].preco << " EUR" << endl;

        cout << endl;

        cout << "Quantidade do Produto: " << Produtos[x].quantidade << endl;
        
        cout << endl;
        
        cout << "Estado do Produto: " << Produtos[x].estado << endl;

        cout << "--------------------------------------" << endl;
    }
    
}

// --------------------------------------------------------

float calcvaltotal(const produto Produtos[], int quantidadeatual){
    
    float total = 0.0;

    for(int x = 0; x < quantidadeatual; x++){
        
        if(Produtos[x].estado == 'a'){
        
        total += Produtos[x].preco * Produtos[x].quantidade;
        
        }
    }
    
    system("clear");

    return total;
}

// --------------------------------------------------------

void executeshop(int opcao, produto Produtos[], int quantidadeatual){
    
    lerprod(Produtos, quantidadeatual);

    do{

        cout << "|--------------- MENU ---------------|" << endl;

        cout << "|                                    |" << endl;
        
        cout << "|   ! QUANTIDADE PRODUTOS MAXIMO !   |" << endl;
        cout << "|               ! 50 !               |" << endl;
        
        cout << "|                                    |" << endl;
        
        cout << "|   ! Ativo = a     Deletado = d !   |" << endl;
        
        cout << "|                                    |" << endl;
        
        cout << "|------------------------------------|" << endl;
        
        cout << "|                                    |" << endl;
 
        cout << "|1 - Adicionar Produto               |" << endl;
        cout << "|2 - Consultar Produtos              |" << endl;
        cout << "|3 - Calcular Valor do Stock         |" << endl;
        cout << "|4 - Modificar Produto               |" << endl;
        cout << "|5 - Deletar Produto                 |" << endl;
        cout << "|0 - Sair                            |" << endl;

        cout << "|                                    |" << endl;

        cout << "|--------------- MENU ---------------|" << endl;
        
        cout << endl;
        
        cout << "Escolha nº ";
        cin >> opcao;
        
        switch(opcao){
            
            case 1:
                
                if(quantidadeatual < prodmax){
                    
                    addprod(Produtos, quantidadeatual, ultimoID);
                    
                }else {
                    
                    cout << endl;
                    
                    cout << "Quantidade máxima atingida !" << endl;
                    
                }
            
            break;
            
            case 2:
            
                consultprod(Produtos, quantidadeatual);
            
            break;
            
            case 3:
            
                cout << "Valor Total dos Produtos é de: " << calcvaltotal(Produtos, quantidadeatual) << " EUR" << endl;
                
                cout << endl;
            
            break;
            
            case 4:
            
                modificaprod(Produtos, quantidadeatual);
            
            break;
            
            case 5:
            
                deleteprod(Produtos, quantidadeatual);
            
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
    
    system("clear");
    
    arquivoDB();
    
    executeshop(opcao, Produtos, quantidadeatual);

    return 0;
}
