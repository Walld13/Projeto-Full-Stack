#include <stdio.h>

int main () {

int num;

printf("Digite um numero: ");
scanf ("%d", &num);

if (num >= 0) {

    if(num % 2 == 0)
        printf("Seu numero e par e positivo");
    else
        printf("Seu numero e impar e positivo");
}
else 
        printf("Seu numero e negativo");

return 0;


}