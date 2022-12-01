/*
* Arquivo: diferencas.c
* Data de criação: 01.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>


void maxMin(float * vetor, int tamanho);
int main(void){
    int N;
    printf("Digite a quantidade de elementos que deseja trabalhar: ");
    scanf("%d", &N);

    float vetor_a[N];
    float vetor_b[N-1];

    int i;

    for(i=0;i<N; i++){
        printf("Informe o elemento %d: ", i + 1);
        scanf("%f",&vetor_a[i]);
    }
    for(i=0; i<N-1; i++){
        vetor_b[i]= vetor_a[i+1]- vetor_a[i];

    } 
    printf("%g", vetor_b[0]);
    for(i=1; i<N-1;i++){
        printf(", %g", vetor_b[i]);
    }
    maxMin(vetor_b,N-1);
    return 0;
}
void maxMin(float * vetor, int tamanho){
    float menor = vetor[0];
    float maior = vetor[0];
    for(int j = 0; j<tamanho; j++){
        if(vetor[j]< menor){
            menor = vetor[j];
        }
        if(vetor[j]> maior){
            maior = vetor[j];
        }
    }
    printf("\nmin = %g \nmax = %g", menor, maior);
    
}
