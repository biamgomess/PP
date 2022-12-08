/*
* Arquivo: dec2bin.c
* Data de criação: 08.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>

int main(void){
    int binario;
    binario = 0;
    int num;
    num = 0;
    int resp;
    resp = 0;
    int cont;
    cont = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    do{
        binario = (binario * 10) + (num % 2);
        num = num / 2;
        cont = cont + 1;
    }
    while(num > 0);
    do{
        cont = cont - 1;
        resp =(resp * 10) + (binario % 2);
        binario = (binario - (binario % 2)) / 10;
    }
    while (cont > 0);
    printf("%d", resp);
    return 0;
}