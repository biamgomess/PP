/*
* Arquivo: areaTriRet.c
* Data de criação: 24.nov.22
* Beatriz Martins Gomes 
*/

int main (void){
    double xA;
    double yA;

    double xB;
    double yB;

    printf("Digite a primeira coordenada: ");
    scanf("%lf %lf", &xA, &yA);
    printf("Digite a segunda coordenada: ");
    scanf("%lf %lf", &xB, &yB);

    double xC;
    double yC;

    xC = xB;
    yC = yA;


    double area;
    double base;
    double altura;
    base = xC - xA;
    altura = yB - yA;
    area = (base * altura)/2;

    printf("%g", area);
    
    return 0;

}