/*
* Arquivo: aleatorios.c
* Data de criação: 14.jan.23
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef
    long long unsigned int
lluint;

void fib(lluint * vetor, int i);

int main(void){
    int n;
    lluint * vetor;
    vetor = (lluint *) malloc(n * sizeof(lluint));
    printf("Digite um número para a sequência de Fibonacci entre 1 e 94: ");
    scanf("%d%*c", &n);
    FILE * fibo;
    fibo = fopen("fibo.txt", "w");
    if(fibo == NULL){
        printf("Erro na abertura no arquivo!");
        return 1;
    }
    else{
        int i;
        for(int i = 0;i<n;i++){
            fib(vetor,i);
            fprintf(fibo,"%llu\n",vetor[i]);
            if(i==(n-1)){
                printf("%llu\n",vetor[i]);
            }
        }
    }
    free(vetor);
    fclose(fibo);
    return 0;
}
void fib(lluint * vetor, int n){
    if(n==0){
        vetor[n]=0;
    }
    else if(n == 1){
        vetor[n]=1;
    }
    else{
        vetor[n] = vetor[n - 1] + vetor[n - 2];
    }
}