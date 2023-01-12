/*
* Arquivo: mediaimpares.c
* Data de criação: 12.jan.23
* Beatriz Martins Gomes 
*/


#include <stdio.h>
#include <stdlib.h>

double media(int *v,int n);
int main(void){
    int * v;
    int n;
    int p;
    printf("Digite a quantidade elementos: ");
    scanf("%d",&n);
    v = (int *) malloc(n*sizeof(int));
    printf("Digite o primeiro elemento: ");
    scanf("%d",&p);
    if((p)%(2) != 0){
        p--;
    }
    for(int i = 0;i<n;i++){
        v[i] = p + 1;
        p = p + 2;
    }
    double med= media(v,n);
    printf("Penultimo:\n%d\n", v[n-2]);
    printf("Media:\n%lg",med);
    free(v);
    return 0;
}
double media(int * v,int n){
    int j = 0;
    int s = 0;
    for(j; j<n;j++){
        s = s + v[j];
    }
    s = s/n;
    return s;
}
