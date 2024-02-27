#include <iostream>

using namespace std;



void somation(int a,int b){

    cout << a + b << endl;
    
}

void multiplication(int a, int b){

    cout << a * b << endl;

}

void division(int a, int b){

    cout << a / b << endl;

}

void restofodivision(int a, int b){

    cout << a % b << endl;

}

void menu(){

    cout << endl;

    cout << "----------Menu----------" << endl;

    cout << endl;

    cout << "1 - Somation" << endl;
    cout << "2 - Multiplication" << endl;
    cout << "3 - Division" << endl;
    cout << "4 - Rest of Division" << endl;
    cout << "5 - Sair" << endl;

    cout << endl;

    cout << "----------Menu----------" << endl;

}

int getOpcao(){

    cout << endl;

    int opcao;
    cout << "Selecione a sua opcao." << endl;
    cin >> opcao;

    return opcao;
}

int getValorX(){

    int x;

    cout << "Digite o valor para o primeiro parametro: ";
    cin >> x;
    
    return x;
}

int getValorY(){

    int y;

    cout << "Digite o valor para o segundo parametro: ";
    cin >> y;

    return y;
}

void executaCalc(int opcao, int y, int x){

    switch(opcao){

        case 1:
            somation(x,y);
            break;

        case 2:
            multiplication(x,y);
            break;

        case 3:
            division(x,y);
            break;

        case 4:
            restofodivision(x,y);
            break;
    
        default:
            cout << "Bye Bye" << endl;
            break;
    }


}



int main(){

    int opcao;

    menu();    
    opcao = getOpcao();
    
    executaCalc(opcao, getValorY(), getValorX());

    return 0;
}

