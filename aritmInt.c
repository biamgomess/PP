/*
* Arquivo: aritmInt.c
* Data de criação: 03.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>

int main (void){
    int x;
    int y;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    printf("%d + %d = %d \n", x, y, x+y);
    printf("%d - %d = %d \n", x, y, x-y);
    printf("%d * %d = %d \n", x, y, x*y);
    printf("%d / %d = %d \n", x, y, x/y);
    printf("%d %% %d = %d \n", x, y, x%y);

    return 0;
}
