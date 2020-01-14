#include <stdio.h>

int main(){
    int operacoes;
    int num1;
    int num2;
    int total;


    printf("Opções de operações: \n1-Multiplicação \n2-Divisão \n3-Adição \n4-Subtração\n");
    scanf("%d", &operacoes);

    printf("1ºvalor numérico:\n");
    scanf("%d", &num1);

    printf("2ºvalor numérico:\n");
    scanf("%d", &num2);

    if(operacoes == 1){
        total = num1 * num2;
        printf("O resultado da multiplicação entre %d e %d é %d\n", num1, num2, total);
    }else if(operacoes == 2){
        total = num1 / num2;
        printf("O resultado da divisão entre %d e %d é %d\n", num1, num2, total);
    }else if(operacoes == 3){
        total = num1 + num2;
        printf("O resultado da adiçaõ entre %d e %d é %d\n", num1, num2, total);
    }else if(operacoes == 4){
        total = num1 - num2;
        printf("O resultado da adiçaõ entre %d e %d é %d\n", num1, num2, total);
    }
}