#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "lab.h"

int main (){
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Escolha uma execução: \n");
    wprintf(L"1 - Média de dois números\n");
    wprintf(L"2 - Distância entre dois pontos\n");
    wprintf(L"3 - Média das matérias\n");
    int exe;
    float valor;
    scanf("%d", &exe);
    switch (exe){
        case 1:
            wprintf(L"Digite o primeiro número: ");
            float a, b;
            scanf("%f", &a);
            wprintf(L"Digite o segundo número: ");
            scanf("%f", &b);
            wprintf(L"Média = %f", media(a, b));
            break;
        case 2:
            wprintf(L"Digite o X1: ");
            float c, d, e, f;
            scanf("%f", &c);
            wprintf(L"Digite o Y1: ");
            scanf("%f", &d);
            wprintf(L"Digite o X2: ");
            scanf("%f", &e);
            wprintf(L"Digite o Y2: ");
            scanf("%f", &f);
            wprintf(L"Distancia: %lf", distancia(c, d, e, f));
            break;
        case 3:
            valor = nota();
            wprintf(L"\nMédia: %f", valor);
            if (valor >= 5){
                wprintf(L"\nVocê foi aprovado");
            } else {
                wprintf(L"\nVocê foi reprovado");
            }
            break;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}