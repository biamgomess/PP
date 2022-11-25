/*
* Arquivo: somaSeqHailst.c
* Data de criação: 25.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>

int main(void){
    int x;
    printf("Digite um número: ");
    scanf("%d",&x);

    int soma;
    soma = x;
    while (x!=1){
        if((x%2)==1){
            x = (3*x) + 1;

        }
        else{
            x = (x/2);
        }
        soma = soma + x;
    }
    printf("%d", soma);
    return 0;
}