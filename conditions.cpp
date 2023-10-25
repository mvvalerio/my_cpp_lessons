#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/*
 int a=10, b=12, c=9;

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
*/


/*
int main (){
    int num;
    int result;
    cout << "Manda um número" << endl;
    cin >> num;
    result = num % 2;
    switch (result)
    {
    case 0:
        cout << "O número é par" << endl;
        break;
        
    default:
        cout << "O número não é par" << endl;
        break;       
    }
    return 0;
}
*/

int main(){
    int num = 0;
    

   /** while (num < 5){                             //O "while" tem de ser verdade o que está dentro dos (), se não forma um loop
         cout << "Digita um número" << endl;
         cin >> num;

    }   
*/
    
 
srand ((unsigned) time (0));
int numSorte = 1+(rand()%100);

    while(numSorte != num){
        cout << "Qual é o número da sorte? " << endl;
        cin >> num;
        if(numSorte > num){
            cout << "O número da sorte é maior do que " << num << " burro lol" << endl;
        } else if (numSorte < num){
            cout << "O número da sorte é menor do que " << num << " atoleimado lol" << endl;
        } else {
            cout << "Parabéns, acertaste o número!" << endl;
        }
        }
        
        cout << "Acabou banana !" << endl;

        return 0;
}
