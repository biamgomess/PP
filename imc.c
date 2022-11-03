/*
* Arquivo: aritmInt.c
* Data de criação: 03.nov.22
* Beatriz Martins Gomes Silva
*/


#include <stdio.h>

int main(void){
    float altura;
    int peso;

    printf("Qual é sua altura? ");
    scanf("%f", &altura);
    printf("Qual é o seu peso? ");
    scanf("%d", &peso);

    float imc;
    imc = peso / (altura*altura);

    if (imc<16){
        printf(" %f --> Perigo de vida!", imc);
    }
    if (imc>16 && imc<17){
         printf(" %f --> Muito abaixo do peso", imc);
    }
    if (imc>17 && imc<18.5){
        printf(" %f --> Abaixo do peso", imc);  
    }
    if (imc>18.5 && imc<25){
        printf(" %f --> Peso normal", imc);   
    }
    if(imc>25 && imc<30){
        printf(" %f -->Acima do peso", imc);
    }
    if(imc>30 && imc<35){
        printf(" %f --> Obesidade grau I", imc);
    }
    if(imc>35 && imc<40){
        printf(" %f --> Obesidade grau II", imc);

    }
    if(imc>40){
        printf(" %f --> Obesidade grau III", imc);
    }
    return 0;


}