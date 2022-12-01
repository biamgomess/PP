/*
* Arquivo: remNegativos.c
* Data de criação: 01.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <math.h>


void removedora(int * vetor, int tamanho);

int main(void){
    int N;
    printf("Digite a quantidade de elementos que deseja trabalhar: ");
    scanf("%d", &N);

    int a[N];
    int i;

    for(i=0;i<N; i++){
        printf("Informe o elemento %d: ", i + 1);
        scanf("%d",&a[i]);
    } 
    removedora(a,N);
    return 0;
}
void removedora(int * vetor, int tamanho){
    int acumuladora;
    acumuladora = 0;
    for(int i=0; i<tamanho; i++){
        if(vetor[i] >= 0){
            printf("%d ", vetor[i]);
        }
        else{
            acumuladora = acumuladora + 1;
        }
    }
    if (acumuladora == tamanho){
        printf("A lista é vazia!");
    }


}
