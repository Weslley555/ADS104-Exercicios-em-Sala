#include <stdio.h>

int main(){

    int vetor[5]; //tipo-do-vetor  nome-do-vetor [tamanho do vetor]
    int vetor2[5];
    int vetor3[5];
    int i;


    for(i=0; i < 5 ; i++){
        printf("Digite um numero pro primeiro vetor:");
        scanf("%d",&vetor[i]);
    }

    for(i=0 ; i < 5 ; i++){
        printf("Digite um numero pro segundo vetor:");
        scanf("%d",&vetor2[i]);
    }

    for(i=0; i<5 ; i++){
        vetor3[i] = vetor[i] + vetor2[i];
    }

    printf("Valores Vetor 3:");

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", vetor3[i]);
    }
    

    return 0;
}