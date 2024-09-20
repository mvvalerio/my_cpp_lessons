#include <iostream>

using namespace std;


int i = 0;
const int num_Const = 20;


void showASCIITable(){

    cout << endl;

    for(int x = 33; x <= 127; x++){

        cout << (char)x << "\t";

        i++;

        if(i % num_Const == 0|| i >= 94){
            cout << endl;
        }
    
    }
    cout << endl;
  

    


}








int main(){

/*
    int i = 10;
    float f = 3.14;
    char c = 'a';


    //Cast Implicito

    float f2 = i;
    char c2 = i;


    cout << "f2: " << f2 << endl;
    cout << "c2: " << c2 << endl;


    //Cast Explicito


    int i2 = (int)f;
    int i3 = (int)c;

    
    int a = 1;                          
    int b = 1;
    string c = "Bo Dia";


    // cout << to_string(a) << endl;                to_string » cast de alguma variavel para string

    cout << a+b << endl;
    cout << to_string(a) + to_string(b) << endl;    // fica 11 porque são strings e não se adicionam

*/

    showASCIITable();


    return 0;
}