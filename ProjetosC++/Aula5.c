// Escreva um algoritimo que receba dois valores x e z, calcula e retorna x^z (sem utilizar funções ou operadores de potência prontos). */




#include <stdio.h>

int main () {
    
    int x, z;
    long int res = 1;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de z: ");
    scanf("%d", &z);    

    for (int i= 0; i < z; i++){

        res = res * x;
    }

    printf("%d elevado a %d eh igual a %ld\n", x, z, res);

    return 0;
    

    

}