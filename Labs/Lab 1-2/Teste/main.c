#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "lab.h"

// locale não está funcionando, então utilizei wprintf e wscanf
int main (){

    // Regionalização
    setlocale(LC_ALL, "Portuguese");

    wprintf(L"Escolha uma execução: \n");
    wprintf(L"1 - Média de dois números\n");
    wprintf(L"2 - Distância entre dois pontos\n");
    wprintf(L"3 - Média das matérias\n");
    int exe;
    scanf("%d", &exe);
    switch (exe){
        case 1:
            media();
            break;
        case 2:
            distancia();
            break;
        case 3:
            nota();
            break;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}
