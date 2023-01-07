/*
* Arquivo: cadastro.c
* Data de criação: 06.jan.23
* Beatriz Martins Gomes 
*/


#include <stdio.h>
#define N 1024
typedef
    struct Nome{
        char nome[N];
        char sobrenome[N];
    }
Nome;

typedef 
    struct Data{
        int dia, mes, ano;
    }
Data;

typedef
    struct Altura{
        int metros,cm;
    }
Altura;

typedef
    struct Peso{
        float kg;
    }
Peso;

const char strmes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};

int cm(int x);
int main(void){
    Nome nome;
    Data data;
    Altura altura;
    Peso peso;

    printf("Digite seu nome: ");
    scanf("%s %s\n", &nome.nome,&nome.sobrenome);

    printf("Digite sua data de nascimento, no formato DD/MM/YY: ");
    scanf("%d/%d/%d\n",&data.dia,&data.mes,&data.ano);

    printf("Digite sua altura: ");
    scanf("%d.%d\n", altura.metros,altura.cm);

    printf("Digite seu peso: ");
    scanf("%f\n", peso.kg);

    altura.cm = cm(altura.cm);
    printf("%s %s; ",nome.nome,nome.sobrenome);
    printf("%02d%s%04d; ",data.dia, strmes[data.mes], data.ano);
    printf(" Altura %dm%d; ", altura.metros,altura.cm);
    printf("%0.1fkg", peso.kg);
    return 0;
}   
int cm(int x){
    if( x<10){
        return x*10;
    }
    if(x>99){
        return cm(x/10);
    }
    else{
        return x;
    }
}