#include <iostream>
using namespace std;

/**int a=10, b=12, c=9;

int main(){

if ( a < b ){                            // "||" esse ou o outro, "&&" e o outro
    cout << "é vidade" << endl;
} else if ( a < c ){
    cout << "é vidade" << endl;
    }else{
    cout << "é mintixra" << endl;
    }
return 0;
}
*/

/**
 * @brief peça um número e mostre se ele é positivo ou negativo
 * 
 * @return int
 * 
*/

int main(){
    int num;

    cout << "Atira prai um número";
    cin >> num;

    if (num >= 0){
        cout << "É Positivo naião" << endl;
    } else {
     cout << "É Negativo Padeiro" << endl;
    }
    return 0;
    } 