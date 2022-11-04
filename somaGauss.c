/*
* Arquivo: somaGauss.c
* Data de criação: 03.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>

int main(void){
    int x;
    int soma;
    soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    while(x>0){
        soma = soma + x;
        x = x - 1;
    }
    printf("%d", soma);
    return 0;
}
