#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Primeiro: ");
    scanf("%d", &a);

    printf("Segundo: ");
    scanf("%d", &b);

    printf("Terceiro: ");
    scanf("%d", &c);

    printf("Quarto: ");
    scanf("%d", &d);

    printf("Quinto: ");
    scanf("%d", &e);

    int soma = a + b + c + d + e;
    printf("%d\n", soma);

    return 0;
}