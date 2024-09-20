#include <iostream>
using namespace std;

int myArray[] = { 1, 2, 3, 4, 5 };

string letras [2][4];                                              //dimensão do Array

string letras2 [2][4] = {
    {"A", "B", "C", "D"},                                          // y = 0 , 1
    {"E", "F", "G", "H"}                                           // x = 0, 1, 2, 3

};


int main(){
     
// cout << myArray[4] << endl;

// cout << sizeof(myArray)/4 << endl;

// cout << letras2 [1][2] << endl;                                    // Representa a letra "G"

for (int i = 0; i < 2; i++){
    for (int j = 0; j < 4; j++){

        cout << letras2 [i][j] << endl;
    }
}


    return 0;
}

