#include <stdio.h>

int soma(int numero_1 , int numero_2){
        return(numero_1 + numero_2);
    }

int main(){

    int numero_1;
    int numero_2;


    printf("Digite o primeiro numero a ser somado : ");
    scanf("%d" , &numero_1);

    printf("Digite o segundo numero : ");
    scanf("%d", &numero_2);

    printf("%d" , soma(numero_1,numero_2));

    return 0;
}