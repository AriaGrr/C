#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura a leitura de números com vírgulas

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

    printf("A soma dos números é: %.2f\n", soma);

    return 0;
}
