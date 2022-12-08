/*
* Arquivo: bin2dec.c
* Data de criação: 08.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 1024

int main(void){
    char binario [N];
    int unsigned long decimal;
    decimal = 0;
    int i;
    i = 0;
    int tamanho;
    printf("Escreva um número em binário: ");
    fgets(binario, N, stdin);
    tamanho = strlen(binario);

    while ( tamanho --){
        if(binario[tamanho] == '0' || binario[tamanho] == '1'){
            decimal = decimal + pow(2, i++) * (binario[tamanho] - '0');
        }
    }
    printf("%llu", decimal);
    return 0;
}