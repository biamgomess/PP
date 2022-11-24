/*
* Arquivo: dist.c
* Data de criação: 24.nov.22
* Beatriz Martins Gomes 
*/

#include <stdio.h>
#include <math.h>

int main (void){
    double xA;
    double yA;
    double xB;
    double yB;

    printf("Digite a primeira coordenada: ");
    scanf("%lf %lf", &xA, &yA);
    printf("Digite a segunda coordenada: ");
    scanf("%lf %lf", &xB, &yB);

    double dist1;
    dist1 = (pow((xA-xB),(2))) + (pow((yA-yB),(2)));
    double dist2;
    dist2 = sqrt(dist1);

    printf("%g", dist2);


}