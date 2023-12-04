#include <iostream>

using namespace std;

// Reference is an alias for a variable
string food = "Pizza";

// Create a reference variable
string &meal = food;                                    // & lê-se "por referência"


int main(){

cout << food << endl;
cout << meal << endl;



return 0;
}