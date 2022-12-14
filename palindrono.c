/*
* Arquivo: reverteString.c
* Data de criação: 08.dez.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <string.h>
#define N 1024

int getstr(char * str, int nchar);
void upper(char * str);
void inversa(char * str, int nchar, int j);

int main(void){
    char s[N];
    printf("Digite uma frase: ");
    int j = getstr(s,N);
    upper(s);
    inversa(s,N,j);
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
void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}
void inversa(char * str, int nchar, int j){
    int g;
    int x;
    int y;
    y = 1;
    for (int k = 0; k<j; k++){
        if((str[k] >= 'A' && (str[k]<='Z'))){
            y = y+1;
        }
    }
    char vet1[N];
    char vet2[N];
    for(int k = 0; k<N; k++){
        vet1[k] = '\0';
        vet2[k] = '\0';
    }
    for(int k = 0, z=0; k<j; k++, z++){
        if((str[k] >= 'A' && (str[k] <= 'Z'))){
            vet1[z] = str[k];
            if(strlen(vet1) == y){
                break;
            }
        }
        else{
            z = z-1;
        }
    }
    for(int i = strlen(vet1)- 1, g = 0; i>=0; i--,g++){
        vet2[g] = vet1[i];
    }
    int a;
    a = 0;
    for(int i=0; i<y;i++){
        if(vet2[i] != vet1[i]){
            printf("Palindromo: Falso");
            a = 1;
            break;
        }
    }
    if (a == 0){
        printf("Palindromo: Verdadeiro");
        
    }
}