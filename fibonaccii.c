/*
* Arquivo: fibonaccii.c
* Data de criação: 05.jan.23
* Beatriz Martins Gomes 
*/


#include <stdio.h>
int fib(int n);

int main(void){

    int n;
    
    int resultado;
    printf("Digite um indice para a sequencia: ");
    scanf("%d", &n);

    resultado = fib(n);
    printf("%d\n", resultado);

}
int fib (int n){
     if(n==0){
        return 0;
    }
    else if((n==1)||(n==2)){
        return 1;
    }
    else{
         return ((fib(n-1) + fib(n-2)));
    }
   
    
}

   