#include <iostream>

using namespace std;


/**
 * Exercćio #1 (15 mins)
 * 
 * Crie um programa capaz de ler dados de uma matriz
 * quadrada de inteiros. Ao final da leitura, o programa
 * deverá imprimir o número da linha que contém o menor
 * dentre todos os números lidos.
 * 
*/


int arr[3][3] = { {5, 2, 4} ,
                  {7, 3, 9} ,
                  {6, 1, 8} };

void lerMatriz(int arr[][3], int size){
    int lower = arr[0][0];
    int linha = 0;

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (arr[i][j] < lower){
                lower = arr[i][j];
                linha = i;
            }
        }
    } 
    cout << "O menor número é: " << lower << endl;
    cout << "A linha que contém o menor número é: " << linha << endl;
}

void mostraArr (int x){
    for (int i = 0; i <= x - 1; i++){
        for (int j = 0; j <= x - 1; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

/** Exercício #2 
 *
 * Crie um programa capaz de multiplicar uma
 * matriz bidimensional de inteiros por
 * um dado número e criar uma nova matriz
 * com o produto.
 * 
*/
void mulmatriz(int matriz1[3][3], int x)

int main(){
    system("clear");
    lerMatriz(arr, 3);
    mostraArr(3);
    multMatriz(arr2, 3);
}






