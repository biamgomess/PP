/*
* Arquivo: aritmInt.c
* Data de criação: 03.nov.22
* Beatriz Martins Gomes 
*/


#include <stdio.h>

int main(void) {

    int a;
    a = 0;
    int b;
    b = 1;

    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

     if (n >= 0) {
    printf("%d\n", a);
    }

    if (n >= 1){
        printf("%d\n", b);
    }

    
    int i;
    int auxiliar; 
    
    for (i = 3; i <= n; i++) {
        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
}
