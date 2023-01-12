/*
* Arquivo: racionais.c
* Data de criação: 12.jan.23
* Beatriz Martins Gomes 
*/
#include <stdio.h>
typedef
    struct Racional{
        int numerador, denominador;
    }
Racional;

int mdc(int a, int b);
int mod(int a);


int main(void){
    Racional Q;
    Racional P;
    Racional Soma;
    Racional Sub;
    Racional Mult;
    Racional Div;
    int c;
    printf("Entre com o primeiro numero racional: ");
    scanf("%d %d",&Q.numerador, &Q.denominador);
    printf("Entre com o segundo numero racional: ");
    scanf("%d %d", &P.numerador, &P.denominador);
    if((Q.denominador)<0){
        Q.denominador = Q.denominador *(-1);
        Q.numerador = Q.numerador * (-1);
    }

    if((P.denominador)<0){
        P.denominador = P.denominador * (-1);
        P.numerador = P.numerador * (-1);
    }
    
    c = Q.numerador;
    Q.numerador = Q.numerador/mdc(mod(Q.numerador),mod(Q.denominador));
    Q.denominador = Q.denominador/mdc(mod(c),mod(Q.denominador));

    c = P.numerador;
    P.numerador = P.numerador/mdc(mod(P.numerador), P.denominador);
    P.denominador = P.denominador/mdc(mod(c),P.denominador);


    Soma.numerador= ((Q.numerador)* (P.denominador)) + ((P.numerador)*(Q.denominador));
    Soma.denominador = ((Q.denominador)*(P.denominador));

    Sub.numerador = ((Q.numerador)*(P.denominador)) - ((P.numerador)*(Q.denominador));
    Sub.denominador = (Q.denominador)*(P.denominador);

    Mult.numerador = (Q.numerador) * (P.numerador);
    Mult.denominador = (Q.denominador) * (P.denominador);

    Div.numerador = (Q.numerador) * (P.denominador);
    Div.denominador = (Q.denominador) * (P.numerador);

    c = Soma.numerador;
    Soma.numerador = Soma.numerador/mdc(mod(Soma.numerador),Soma.denominador);
    Soma.denominador = Soma.denominador/mdc(mod(c), Soma.denominador);

    c= Sub.numerador;
    Sub.numerador = Sub.numerador/mdc(mod(Sub.numerador),Sub.denominador);
    Sub.denominador = Sub.denominador/mdc(mod(c),Sub.denominador);

    c = Mult.numerador;
    Sub.numerador = Mult.numerador/mdc(mod(Mult.numerador),Mult.denominador);
    Sub.denominador = Mult.denominador/mdc(mod(c),Mult.denominador);

    c = Div.numerador;
    Div.numerador = Div.numerador/mdc(mod(Div.numerador),mod(Mult.denominador));
    Mult.denominador = Div.numerador/mdc(mod(c),mod(Div.denominador));

    if(Div.denominador<0){
        Div.denominador = Div.denominador *(-1);
        Div.numerador = Div.numerador*(-1);
    }


    printf("%d/%d %d/%d %d/%d %d/%d %d/%d %d/%d",Q.numerador,Q.denominador, P.numerador, P.denominador,Soma.numerador,Soma.denominador,Sub.numerador, Sub.denominador,Mult.numerador,Mult.denominador,Div.numerador,Div.denominador);
    return 0;

    
}

int mdc(int a, int b){
    if (b==0){
        return a;
    }
    else{
        mdc(b,(a%b));
    }
}
int mod(int a){
    if(a<0){
        return(a*(-1));
    }
    else{
        return a;
    }
}
