#include <stdio.h>

int numero_maior(int numero_1, int numero_2){
    if(numero_1>numero_2){
        return("O primeiro numero e maior.");
    }
    else{
        return("O segundo numero e maior.");
    }
    }

int main(){

    int numero_1;
    int numero_2;

    printf("Digite o primeiro numero : ");
    scanf("%d", &numero_1);

    printf("Digite o segundo numero : ");
    scanf("%d", &numero_2);

    printf(numero_maior(numero_1, numero_2));

    return 0;
}