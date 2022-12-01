/*
* Arquivo: areaTriRet.c
* Data de criação: 24.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>

int main(void){
    int a;
    int b;
    printf("Digite um intervalo (em que a < b): ");

    scanf("%d %d", &a, &b);

    int i;
    int aux;
    int j;
    int soma;
    soma = 0;
    for (int i=a+1;i<b;i++){
        aux = 1;
        for (j=2;j<i;j++){
            if((i%j)== 0){
                aux = 0;
            }
        }
    if(aux == 1){
        soma = soma + i;
    }
    
    } 
    printf("%d", soma);
    return 0;
}    
    
    
