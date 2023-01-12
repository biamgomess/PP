/*
* Arquivo: raizes2grau.c
* Data de criação: 12.jan.23
* Beatriz Martins Gomes 
*/


#include <stdio.h>
#include <math.h>

int main(void){
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf("Digite cada elemento de uma equacao de 2 grau:\n");
    scanf("%f %f %f", &a, &b, &c);
    

    delta = (b*b) - (4*a*c);
    
    if(delta > 0) {
        printf("2\n");
        x1 = ((-b) + sqrt(delta))/2*a;
        x2 = ((-b) - sqrt(delta))/2*a;
        printf("%.2f %.2f", x1,x2);
    }
    if (delta == 0){   
        printf("1\n");
        x1 = (-b)/2*a;
        printf("%.2f", x1);   
    }

   if(delta<0){
        printf("0\n");
        
    }
    return 0;

   

}

