/*
* Arquivo: reverteString.c
* Data de criação: 08.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <string.h>
#define N 1024

int main(void){
    char frase[N];
    char copia[N];
    char contrario[N];
    int i;
    int j;
    int tamanho;
    int diferentes;
    j = 0;
    diferentes = 0;

    printf("Digite uma frase: ");
    fgets(frase, N, stdin);

    for(i=0; i< strlen(frase); i++){
        if (frase[i] != ' '){
            copia[j++] = frase[i];
        }
    }
   
    
    tamanho = strlen(frase);
    j = tamanho;
    tamanho = tamanho + 1;
    j = j - 1;

    for (i=0; i<tamanho; i++){
        contrario[i] = copia[j];
        j = j -1;
    }
    tamanho = tamanho - 1;
    for (i = 0; i<tamanho; i++){
        if(copia[i] != contrario[i]){
            diferentes = 1;
        }

    }

    
    if (diferentes == 1){
        printf("Palindrono: Falso");

    }
    else{
        printf("Palindrono: Verdadeiro");
    }


}