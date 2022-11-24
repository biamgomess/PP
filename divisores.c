/*
* Arquivo: areaTriRet.c
* Data de criação: 24.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>

int main (void){
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    int i;
    
    for(i=1; i <= x; i++ ){
        if (((x % i) == 0)) {
            printf("%d ", i);

        }
    }
    return 0;
}