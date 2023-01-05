/*
* Arquivo: mdc.c
* Data de criação: 05.jan.23
* Beatriz Martins Gomes 
*/


#include <stdio.h>
int mdc(int x, int y);

int main(void){
    int a;
    int b;
    int resultado;
    printf("Digite dois números: ");
    scanf("%d", &a);
    scanf("%d", &b);
    resultado = mdc(a,b);
    printf("%d", resultado);
}
int mdc(int x, int y){
    if((x%y) == 0){
        return y;
    }
    else{
        return mdc(y,x%y);
    }
}