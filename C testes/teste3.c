#include <stdio.h>

int main() {
    float a, b, c, d, e;

    printf("Primeiro: ");
    scanf("%f", &a);

    printf("Segundo: ");
    scanf("%f", &b);

    printf("Terceiro: ");
    scanf("%f", &c);

    printf("Quarto: ");
    scanf("%f", &d);

    printf("Quinto: ");
    scanf("%f", &e);

    float soma = a + b + c + d + e;
    
    printf("%f\n", soma);

    return 0;
}