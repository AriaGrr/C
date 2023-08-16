#include <stdio.h>

int main() {
    int a = scanf("Primeiro: %d", &a);
    int b = scanf("Segundo: %d", &b);
    int c = scanf("Terceiro: %d", &c);
    int d = scanf("Quarto: %d", &d);
    int e = scanf("Quinto: %d", &e);
    int soma = a + b + c + d + e;
    printf("%d", soma);
    return 0;
}

