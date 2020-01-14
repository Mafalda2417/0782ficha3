#include <stdio.h>

int main(){
    int num;

    printf("Digite um número inteiro entre 1 e 7: \n");
    scanf("%d", &num);

    if(num == 1 || num == 2 || num == 3 || num == 4 || num == 5 || num == 6 || num == 7){
    switch (num)
    {
    case 1:
        printf("%d é Domingo\n", num);
        break;
    
    case 2:
        printf("%d é Segunda-feira\n", num);
        break;

    case 3:
        printf("%d é Terça-feira\n", num);
        break;

    case 4:
        printf("%d é Quarta-feira\n", num);
        break;

    case 5:
        printf("%d é Quinta-feira\n", num);
        break;

    case 6:
        printf("%d é Sexta-feira\n", num);
        break;

    case 7:
        printf("%d é Sábado\n", num);
        break;

    
    default:
        break;
    }
}
}
