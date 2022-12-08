/*
* Arquivo: contaVogais.c
* Data de criação: 08.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <string.h>
#define N 1024

void getstr(char * str, int nchar);

int main(void){
    char s[N];
    printf("Escreva uma palavra: ");
    fgets(s, N, stdin);

    int vogais;
    vogais = 0;
    int i;

    for (i = 0; s[i] != '\0'; i++){
        switch (s[i])
        {
        case 'a':
            
        case 'e':
             
        case 'i':
           
        case 'o':
           
        case 'u':
            
        case 'A':
            
        case 'E':
            
        case 'I':
           
        case 'O':
            
        case 'U':
            vogais = vogais + 1;


        default:
            break;
        }
    }

    printf("%d", (vogais));

    return 0;
}
