#include <iostream>

using namespace std;


int main(){

    int n;
    int sum = 0;

    cout << "Qual o valor para n" << endl;
    cin >> n;

    for(int i = 0; i <= n; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }

    cout << "A soma dos números impares é: " << sum << endl;

    return n;
}