/*
* Arquivo: muSigma.c
* Data de criação: 01.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <math.h>

float media(int N,float L[N]);
float des(int N, float L[N],float m);

int main (void){
    int N;
    float avg;
    float dvg;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &N);
    float L[N];
    for(int i = 0; i<N; i++){
        printf("Informe o elemento %d: ", i + 1);
        scanf("%f", &L[i]);

    }
    avg = media(N,L);
    dvg = des(N,L,avg);
    printf("media %g, ", avg);
    printf("desvio %g", dvg);
    return 0;
}
float media(int N, float L[N]){
    float m;
    m = 0;
    for (int i = 0; i<=N-1; i++){
        m = m + L[i];
    }
    m = m /(N);
    return m;
}
float des(int N, float L[N], float m){
    float d;
    d = 0;
    float des;
    for (int i = 0; i<=N-1; i++){
        d = d + pow((L[i]-m), 2);

    }
    des = sqrt(d/N);
    return des;

}
