#include <stdio.h>

int main(){
    int num;
    
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    printf("Antecessor: %d\n", (num-1));
    printf("Sucessor:%d\n", (num +1));

}