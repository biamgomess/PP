/*
* Arquivo: areaTriRet.c
* Data de criação: 24.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>

int main (void){
    int a;
    int b;
    printf("Digite um intervalo (em que a < b): ");

    scanf("%d %d", &a, &b);


    int primos;
    int aux;

    int i;
    int j;

    for(i=a; a <= b; i++){
        primos = 0;
        for (j=1;j<=i;j++){
            if((i%j)==0){
                primos = primos + 1;
            }
        }
        if(primos == 2){
            aux = aux + 1;
        }
        

    }
    printf("%d", aux);
    
    return 0;

}