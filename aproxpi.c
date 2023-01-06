/*
* Arquivo: aproxpi.c
* Data de criação: 06.jan.23
* Beatriz Martins Gomes 
*/
#include <stdio.h>
#include <math.h>

double Sn(int n);

int main(void){
    double x;
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
   
    x = Sn(n);
    printf("%lf", x);
    return 0;
}
double Sn(int n){
    if (n==0){
        return 4.0;
    }
    else{
        return (Sn(n-1)+ (4*((pow(-1,n))/((2*n)+1))));
    }
}