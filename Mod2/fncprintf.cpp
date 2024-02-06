#include <stdio.h>
#include <stlib.h>

using namespace std;


int main(){

char nome [50];

    printf("Teste\n");
    printf("Character: %s %s %s \n", "ey", "ty", "teste");
    printf("Decimals: %d %ld \n", 1977, 650000L);
    printf("Preceding with blanks: %10d \n", 1977);
    printf("Width trick: %*d \n", 10, 10);

    printf("Nome \n");
    scanf("%s", nome);                                      //scanf = vai dar input
    printf("Ola %s \n", nome);

    

}