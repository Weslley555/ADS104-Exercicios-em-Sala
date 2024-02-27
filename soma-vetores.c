#include <stdio.h>

int main(){

    int vetor[5]; //tipo-do-vetor  nome-do-vetor [tamanho do vetor]
    int vetor2[5];
    int vetor3[5];
    int i;  
    /*
    i começa em 0 e é utilizado pra determinar a posição de gravação do vetor.
    i++ utiliza para que apos gravar um número grave na próxima posição do vetor.
    Como o vetor é de 5 números a última posição do vetor seria 4, (i < 5) garante nn passar deste número.
    */
    for(i=0; i < 5 ; i++){
        printf("Digite um numero pro primeiro vetor:");
        scanf("%d",&vetor[i]);
    }

    for(i=0 ; i < 5 ; i++){
        printf("Digite um numero pro segundo vetor:");
        scanf("%d",&vetor2[i]);
    }

    //Ao trabalhar com vetores utilize [i] para referenciar as posições do vetores em suas corretas 
    // posições em sequência.
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
