#include <iostream>

using namespace std;

long a, b;


const double PI = 3.14159;
int c;


int myArr[5];
int maior = 0, menor = 0;
int e = 1;
int soma = 0;

int main(){

// Calculadora
//    cout << "Digite o valor de a: ";
//    cin >> a;
//
//    cout << "Digite o valor de b: ";
//    cin >> b;
//
//    cout << "a + b = " << a + b << endl;
//    cout << "a - b = " << a - b << endl;
//    cout << "a x b = " << a * b << endl;
//
//    if (b==0){
//
//        cout << "Não é possivel dividir por zero" << endl;
//
//    } else {
//
//        cout << "A divisão de a e b é: " << a/b << endl;
//        cout << "O resto de divisão de a e b: " << a%b << endl;
//    }
// Calculadora


// PI
//    cout << "Digite o valor de c: " << c << endl;
//    cin >> c;
//
//    cout << "O valor da area é de: " << PI * c * c << endl;
// PI


// Notas

cout << endl;

    for (int d = 0; d < 5; d++){

        cout << "Dẽ um valor a nota de cada aluno" << endl;
        cout << "Aluno: " << e++ << endl;

        cin >> myArr[d];

        if(d < 0 || d > 20){
            
            cout << "Notas acima de 0 e abaixo de 20" << endl;

        } else{

            cout << "Aluno: " << e - 1 << endl;
            cin >> myArr[d];
        }
    }

    cout << endl;

    for ( int h = 0; h < 5; h++){

        cout << myArr[h] << " ";
    }

    cout << endl;

    maior = myArr[0];

    for(int f = 0; f < 5; f++){

        if (myArr[f] > maior){
        
            maior = myArr[f];
        }
    }
    cout << "A maior nota é: " << maior << endl;


    menor = myArr[0];

    for (int g = 0; g < 5; g++){

        if(myArr[g] < menor){

            menor = myArr[g];
        }
    }
    cout << "A maior nota é: " << menor << endl;

    return 0;
}