/*
* Arquivo: quaisDiv.c
* Data de criação: 01.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
void identifica_divisores(int * vetor, int tamanho, int referencia);
int main(void){
    int n;
    printf("Quais elementos? ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i ++){
        printf("Informe o elemento %d: ", i+1);
        scanf("%d",vetor + i); // &vetor[i]
    }
    int ref;
    printf("Escolha o número de referência: ");
    scanf("%d", &ref);
    identifica_divisores(vetor,n,ref);
    return 0;
}
void identifica_divisores(int * vetor, int tamanho, int referencia){
   
    for (int i = 0; i<tamanho; i++){
         printf("%d", vetor[i]);
         if((referencia % vetor[i]) == 0){
            printf("#");
        printf(" ");

        }

    }
    
}
