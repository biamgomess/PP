/*
* Arquivo: aritmInt.c
* Data de criação: 03.nov.22
* Beatriz Martins Gomes Silva
*/

#include <stdio.h>

int main(void){
    int x;
    int soma;
    soma = 0;
    printf("Digite um numero logo: ");
    scanf("%d", &x);
    while(x>0){
        soma = soma + x;
        x = x - 1;
    }
    printf("Soma = %d", soma);
    return 0;
}