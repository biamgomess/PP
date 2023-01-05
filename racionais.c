/*
* Arquivo: mdc.c
* Data de criação: 05.jan.23
* Beatriz Martins Gomes 
*/


#include <stdio.h>

typedef
    struct Racionais{
        adicionar, subtrair, multiplicar, dividir;       
  } 
Racionais;


int main(void){
    Racionais Q1;
    Racionais Q2;

    printf("Entre com o primeiro numero racional: ");
    scanf("%d %d", Q1);
    printf("Entre com o segundo numero racional: ");
    scanf("%d %d", Q2);

}
int mdc(int x, int y){
    if((x%y) == 0){
        return y;
    }
    else{
        return mdc(y,x%y);
    }
