#include <stdio.h>

int main(){
    int valor = 50000000;
    int venc1;
    int venc2;
    int venc3;

    printf("A importância de 500 000,00€ será dividida entre três vencedores do concurso.\n");
    
    venc1 = valor * 0.46;
    printf("Vencedor 1: %d\n", venc1);

    venc2 = valor * 0.32;
    printf("Vencedor 2: %d\n", venc2);

    venc3 = valor * 0.22;
    printf("vencedor 3: %d\n", venc3);
}