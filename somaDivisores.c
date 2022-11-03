/*
* Arquivo: aritmInt.c
* Data de criação: 03.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>

int main(void){
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    int i;
    int somaDivisores;
    somaDivisores = 0;

    for(i=1; i<=x; i++){
        if(x % i == 0){
            somaDivisores = somaDivisores + i;
        }    
    } 
    printf("%d", somaDivisores);
    return 0;
}