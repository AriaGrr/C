#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "exer.h"

int main (){
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Escolha uma execução: \n");
    wprintf(L"1 - Soma\n");
    wprintf("2 - Multiplicação\n");
    wprintf("3 - Maior\n");
    wprintf("4 - Copia\n");
    wprintf("5 - Exibe\n");
    wprintf("6 - Soma de Matrizes\n");
    wprintf("0 - Sair\n");
    int exe;
    scanf("%d", &exe);
    switch (exe){
        case 0:
            printf("Saindo...\n");
            exit(0);
        break;
        case 1:
            wprintf(L"Digite o vetor de inteiros: ");
            wprintf(L"Digite o seu tamanho: ");
            int tam;
            scanf("%d", &tam);
            
        break;
        case 2:

        break;
        case 3:

        break;
        case 4:

        break;
        case 5:

        break;
        case 6:

        break;
        default:
            printf("Opção inválida\n");
            break;
    }
    return 0;
}