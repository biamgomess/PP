/*
* Arquivo: reverteString.c
* Data de criação: 08.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <string.h>
#define N 1024

void upper(char * str);

int main (void){
    char s[N];
    char sInv[N];

    printf("Escreva uma palavra: ");
    fgets(s, N, stdin);
    
    int i;
    int j;
    int tamanho;

    tamanho = strlen(s);

    j = 0;
    int fim;
    fim = strlen(s);
    i = fim - 1;
    

    while (j<fim){
        sInv[j] = s[i];
        i = i - 1;
        j = j + 1;
    }
    sInv[i] = '\O';
    upper(sInv);
    return 0;
}

void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
    printf("%s", str);
}