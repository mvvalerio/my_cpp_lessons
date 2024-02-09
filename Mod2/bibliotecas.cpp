#include <iostream>

using namespace std;


int main(){

const double PI = 3.1416;

double raio;

double area;

double altura;

double volume;

cout << "Qual o raio do circulo \n";
cin >> raio;

area = PI * (raio * raio);

cout << "A area do circulo é " << area << endl;

cout << "Qual a altura do cilindro" << endl;
cin >> altura;

volume = area * altura;

cout << "A volume do circulo " << volume << endl;


return 0;
}