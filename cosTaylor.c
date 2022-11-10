/*
* Arquivo: aritmInt.c
* Data de criação: 09.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <math.h>
#ifdef M_PI
  #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875

int main(void) {
    int x;
    float f;

    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite um número: ");
    scanf("%f", &f);

    int i;
    i = 0;

    float cos;
    cos = 0;

    int y;
    y = 1;

    int fatorial;
    fatorial = 1;

    while (i<=x) {
        while (y<=2*i){
            fatorial = fatorial * y;
            y = y + 1;
        }
        cos = cos + (pow(-1,i)*(pow(M_PI*i,2*i)/fatorial));
        i = i + 1;
    }
    printf("%.5f", cos);
    return 0;


}
