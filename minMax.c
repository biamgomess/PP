/*
* Arquivo: minMax.c
* Data de criação: 01.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>

int main (void){
    int N;
    printf("Digite a quantidade de elementos que deseja trabalhar: ");
    scanf("%d", &N);

    int a[N];
    int i;

    for(i=0;i<N; i++){
        printf("Informe o elemento %d: ", i + 1);
        scanf("%d",&a[i]);
    }
    minMax(a,N);
    return 0;
}
void minMax(int * vetor, int tamanho){
    int maior = vetor[0];
    int menor = vetor[0];
    
    for (int i=0; i<tamanho; i++){
        if (maior> vetor[i]){
            maior = vetor[i];
        }
        if (menor< vetor[i]){
            menor = vetor[i];
        }
    }
    for(int i =0; i<tamanho; i++){
        if (vetor[i] == menor){
            printf("%d> ", vetor[i]);
        }
        else if(vetor[i]== maior){
            printf("%d< ", vetor[i]);
        }
        else{
            printf("%d ", vetor[i]);
        }
    }
}