/*
* Arquivo: aritmInt.c
* Data de criação: 03.nov.22
* Beatriz Martins Gomes Silva
*/

#include <stdio.h>

int main(void){
    int x;
    int fatorial;
    fatorial = 1;
    printf("Digite um numero: ");
    scanf("%d", &x);
    while(x>0){
        fatorial = fatorial * x;
        x = x - 1;

    }
     printf("Fatorial = %d", fatorial);
    return 0;
}