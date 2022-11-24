/*
* Arquivo: impares.c
* Data de criação: 24.nov.22
* Beatriz Martins Gomes 
*/

int main (void){
    int a;
    int b;
    printf("Digite um intervalo (em que a < b):");

    scanf("%d %d", &a, &b);

    
    int i;
    for(i = a; i < b; i++){
        if ((i%2)!= 0){
            printf("%d, ", i);
        }
    if ((b%2) != 0) {
        printf("%d", b);

    }   
    
    }
    return 0;
}  