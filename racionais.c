/*
* Arquivo: mdc.c
* Data de criação: 05.jan.23
* Beatriz Martins Gomes 
*/


#include <stdio.h>

typedef
    struct Racionais{
        int numerador, denominador;     
  } 
Racionais;


int mdc(int n,int m);

int main(void){
    Racionais Q1;
    Racionais Q2;
    int n;
    int m;
    int n1;
    int m1;
    int mdc1;
    int mdc2;


    printf("Entre com o primeiro numero racional: ");
    scanf("%d", &n);
    scanf("%d", &m);
    printf("Entre com o segundo numero racional: ");
    scanf("%d", &n1);
    scanf("%d", &m1);
    

    mdc1= mdc(n,m);
    mdc2= mdc(n1,m1);

    Q1.numerador = (n / mdc1);
    Q1.denominador = (m /m1);
    Q2.numerador = (n1/mdc2);
    Q2.denominador =(m1/mdc2);

    if(Q1.denominador<0){
        Q1.denominador *= (-1);
        Q1.numerador *= (-1);
    }
   
    if(Q2.denominador<0){
        Q2.denominador *= (-1);
        Q2.numerador *= (-1);
    }


    printf("%d/%d", Q1.numerador, Q1.denominador);
    printf(" ");
    printf("%d/%d", Q2.numerador, Q2.denominador);
    printf(" ");

    //soma
    n = ((Q1.numerador * Q2.denominador));
    m = ((Q2.numerador * Q1.denominador));
    n1 = n + m;
    m1 = ((Q1.denominador * Q2.denominador));

    if (n1==0){
        m1 = 1;
    }
    mdc1 = mdc(n1,m1);
    n1 = (n1/mdc1);
    m1= (m1/mdc1);

    if (m1<0){
        n1 = n1 * (-1);
        m1 = m1 * (-1);

    }
    printf("%d/%d", n1,m1);
    printf(" ");

    // subtração
    n = ((Q1.numerador * Q2.denominador));
    m = ((Q2.numerador * Q1.denominador));
    n1 = n - m;
    m1 = (Q1.denominador * Q2.denominador);

    if (n1==0){
        m1 = 1;
    }

    mdc1 = mdc(n1,m1);
    n1 = (n1/mdc1);
    m1= (m1/mdc1);
     if (m1<0){
        n1 = n1 * (-1);
        m1 = m1 * (-1);
    }

    printf("%d/%d", n1,m1);
    printf(" ");

    // multiplicação

    n = ((Q1.numerador * Q2.denominador));
    m = ((Q2.numerador * Q1.denominador));

    if(n==0){
        m = 1;
    }

    mdc1= mdc(n,m);
    n = (n/mdc1);
    m = (m/mdc1);
    
    if(m<0){
        n = n * (-1);
        m = m * (-1);
    }
    printf("%d/%d", n,m);
    printf(" ");

    // divisão
    n = ((Q1.numerador * Q2.denominador));
    m = ((Q2.numerador * Q1.denominador));

     if(n==0){
        m = 1;
    }
    mdc1= mdc(n,m);
    n = (n/mdc1);
    m = (m/mdc1);
    
    if(m<0){
        n = n * (-1);
        m = m * (-1);
    }
    printf("%d/%d", n,m);
    printf(" ");
    

    return 0;
}
int mdc(int n, int m){
    if (m == 0){
        return n;

    }
    else{
        return(mdc(m, n%m));
    }

}    