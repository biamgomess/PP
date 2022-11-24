/*
* Arquivo: cosTaylor.c
* Data de criação: 10.nov.22
* Beatriz Martins Gomes  Silva
*/

#include <stdio.h>
#include <math.h>
#ifdef M_PI
  #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875

int fatorial(int i);

int main(void) {
    int n;
    int i;
    float x;
    float cos;
    printf("Digite um número para n: ");
    scanf("%d", &n);
    printf("Digite um número para x: ");
    scanf("%f", &x);
    x = x * M_PI;
    for (i=0; i<=n; i++){
        cos = cos + ((pow(-1,i))* (((pow(x,(2*i))))/(fatorial(i))));

    }
    printf("%.5f", cos);
    return 0;
    
}
int fatorial(int i){
    int a;
    int b;
    int resultado;
    resultado = 1;
    a = 2 * i;
    b = 1;
    
    while (b<=a){
        resultado = resultado * b;
        b = b + 1;
    }
    
    return resultado;
}
