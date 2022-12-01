/*
* Arquivo: produtorio.c
* Data de criação: 01.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>

int main(void){
    int N;
    float prod;
    prod = 1;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &N);
    float l[N+1];
    for (int i =0; i<N; i++){
        printf("Informe o elemento %d: ", i + 1);
        scanf("%f",&l[i]);
    }
    for (int j=0; j<N;j++){
        prod = prod * l[j];
    }
    l[N]= prod;
    for(int k=0; k<N-1; k++){
        printf("%g *",l[k]);
    }
    printf("%g = %g", l[N-1], l[N]);
    return 0;
}