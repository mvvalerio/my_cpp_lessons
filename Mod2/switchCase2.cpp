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

    cout << "-------Menu-------" << endl;
    cout << "1 - Somation" << endl;
    cout << "2 - Multiplication" << endl;
    cout << "3 - Division" << endl;
    cout << "4 - Rest of Division" << endl;
    cout << "5 - Sair" << endl;

}

int getOpcao(){

    cout << endl;

    int opcao;
    cout << "Selecione a sua opcao." << endl;
    cin >> opcao;

return opcao;
}

void executaCalc(int c, int x, int y){

    switch(c){

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
        break;
    }
    
}

int main(){

    menu();    
    getOpcao();
    executaCalc();

return 0;
}

