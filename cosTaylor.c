/*
* Arquivo: aritmInt.c
* Data de criação: 04.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
int fatorial(int x);

int main(void){
    fatorial;


}
int fatorial(int x){
    int x;
    int fatorial;
    fatorial = 1;
    printf("Digite um numero: ");
    scanf("%d", &x);
    while(x>0){
        fatorial = fatorial * x;
        x = x - 1;
    return fatorial;
}
}