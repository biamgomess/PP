/*
* Arquivo: altura.c
* Data de criação: 05.jan.23
* Beatriz Martins Gomes 
*/
#include <stdio.h>

typedef
    struct Altura{
        int metros, centimetros;
    }
Altura;

int main(void){
    Altura altura;

    printf("Digite uma altura em metros: ");
    scanf("%d.%d", &altura.metros,&altura.centimetros);
    altura.centimetros = cm(altura.centimetros);

    printf("Altura %dm%d", altura.metros, altura.centimetros);

    return 0;


}
int cm(int x) {
    if(x < 10) return x*10;
    if(x > 99) return cm(x/10);
    return x;
}