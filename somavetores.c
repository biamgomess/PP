/*
* Arquivo: somavetores.c
* Data de criação: 12.jan.23
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N;
    int M;
    int * v;
    int * u;
    int * r;
    int imp;
    imp = 1;
    int quatro;
    quatro = 0;
    int i;

    printf("Digite o número de elementos do vetor N:\n");
    scanf("%d", &N);
    printf("Digite o número de elemntos do vetor M:\n");
    scanf("%d", &M);

    if(N != M){
        printf("false");
        return 0;
    } 

    v = (int*) malloc(N*sizeof(int));
    u = (int*) malloc(M*sizeof(int));

    for(i = 0;i<N; i++){
        v[i] = imp;
        imp = imp + 2; 
    }

    for(i= 0; i<M; i++){
        u[i] = quatro;
        quatro = quatro + 4;
    }
    
    for(i=0;i<N;i++){
        r[i] = v[i] + u[i];
    }
    for(i = 0;i<N;i++){
        printf("%d ",r[i]);
    }
    free(v);
    free(u);
    free(r);
    return 0;

   
}