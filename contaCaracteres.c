/*
* Arquivo: contaCaracteres.c
* Data de criação: 10.dez.22
* Beatriz Martins Gomes 
*/
#include <stdio.h>
#include <string.h>
#define N 1024

int getstr(char * str, int nchar);
void contador(char * str, int nchar);

int main(void){
    char s[N];
    printf("Digite algo: ");
    for(int i = 0; i<N;i++){
        s[i]= '\0';
    }
    int j = getstr(s,N);
    contador(s,j);
    return 0;
}
int getstr(char * str, int nchar){
    char c;
    int i;
    int j = 0;
    for (i = 0; i< nchar; i++){
        c = getchar();
        if( c != '\n'){
            str[i] = c;
            j++;
        }
        else {
            str[i] = '\0';
            break;
        }
    }
    if( i == nchar){
        str[nchar-1] = "\0";
        // limpar buffer teclado
        while ((c = getchar() != '\n' && c != EOF));
    }
     return j;
}
void contador( char* str, int nchar){
    int caracter;
    int digito;
    int outros;
    caracter = digito = outros = 0;
    for(int k = 0; k<nchar; k++){
        if((str[k] >='A' &&(str[k]<='Z')||((str[k]>='a') && (str[k]<= 'z')))){
            caracter = caracter + 1;
        }
        else if((str[k] >= '0')&& (str[k]<= '9')){
            digito = digito + 1;

        }
        else{
            outros = outros + 1;
        }
    }
    printf("Letras: %d \nDigitos: %d \nOutros: %d", caracter,digito,outros);
}