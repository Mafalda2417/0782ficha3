#include <stdio.h>

int main(){
    float fahrenheit;
    float celsius;
    
    printf("Temperatura(ºF)?\n");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8000;

    printf("%f ºF é %f ºC\n", fahrenheit, celsius);
}