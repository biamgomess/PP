/*
* Arquivo: fatorial.c
* Data de criação: 03.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>


int main(void){
    int64_t x;
    int auxiliar;

    int64_t fatorial;
    fatorial = 1;
    printf("Digite um numero: ");
    scanf("%lld", &x);
    auxiliar = x;

    while(x>0){
        fatorial = fatorial * x;
        x = x - 1;

    }
     printf("%d! = %lld", auxiliar, fatorial);
    return 0;
}
