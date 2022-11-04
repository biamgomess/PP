/*
* Arquivo: fatorial.c
* Data de criação: 03.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>

int main(void){
    int x;
    int auxiliar;

    int fatorial;
    fatorial = 1;
    printf("Digite um numero: ");
    scanf("%d", &x);
    auxiliar = x;

    while(x>0){
        fatorial = fatorial * x;
        x = x - 1;

    }
     printf("%d! = %d", auxiliar, fatorial);
    return 0;
}
