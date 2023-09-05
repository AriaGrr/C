#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include "lab.h"

int main (){
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Escolha uma execução: \n");
    wprintf(L"1 - Média de dois números\n");
    wprintf(L"2 - Distância entre dois pontos\n");
    wprintf(L"3 - Média das matérias\n");
    wprintf(L"4 - Qual o maior número\n");
    wprintf(L"5 - Qual o menor número\n");
    wprintf(L"6 - Qual o sinal\n");
    wprintf(L"7 - Está acima do limite\n");
    wprintf(L"8 - Busca\n");
    wprintf(L"9 - Média ponderada\n");
    wprintf(L"10 - Tamanho\n");
    wprintf(L"11 - Copia String\n");
    wprintf(L"12 - Input Python\n");
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
        case 4:
        wprintf(L"Digite o primeiro número: ");
        float g, h;
        scanf("%f", &g);
        wprintf(L"Digite o segundo número: ");
        scanf("%f", &h);
        float nu = max_float(g, h);
        if (nu == 0){
        wprintf(L"Ambos são iguais.", nu);
        } else{
        wprintf(L"O maior número é %f", nu);
        }
        break;
        case 5:
        wprintf(L"Digite o primeiro número: ");
        float i, j;
        scanf("%f", &i);
        wprintf(L"Digite o segundo número: ");
        scanf("%f", &j);
        float num = min_float(i, j);
        if (num == 0){
        wprintf(L"Ambos são iguais.", num);
        } else{
        wprintf(L"O menor número é %f", num);
        }
        break;
        case 6:
        wprintf(L"Digite o número: ");
        float k;
        scanf("%f", &k);
        int sin = sinal (k);
        if (sin == -1){
        wprintf(L"O número é negativo");  
        } else if(sin == 1){
        wprintf(L"O número é positivo");
        } else if(sin == 0){
        wprintf(L"O número 0 é positivo.");
        }
        break;
        case 7:
        wprintf(L"Digite o valor: ");
        float l, m;
        scanf("%f", &l);
        wprintf(L"Digite o limite: ");
        scanf("%f", &m);
        int ac = acima_de(l, m);
        if(ac == 1){
        wprintf(L"O valor está acima do limite.", ac);
        } else if(ac == 0){
        wprintf(L"O valor está dentro do limite.");
        }
        break;
        case 8:
        wprintf(L"Digite o tamanho do vetor: ");
        int tam;
        scanf("%d", &tam);
        int *valores = (int *)malloc(tam * sizeof(int));
        for (int i = 0; i < tam; i++){
            wprintf(L"Digite o valor %d: ", i);
            scanf("%d", &valores[i]);
        }
        wprintf(L"Digite o valor a ser buscado: ");
        int valor;
        scanf("%d", &valor);
        int res = busca(valor, valores, tam);
        if (res == 1){
            wprintf(L"O valor está no vetor.");
        } else if (res == 0){
            wprintf(L"O valor não está no vetor.");
        }
        break;
        case 9:
        wprintf(L"Digite o tamanho do vetor: ");
        int tamanh;
        scanf("%d", &tamanh);
        float *val = (float *)malloc(tam * sizeof(float));
        //corrigir pesos
        float *pesos = (float *)malloc(tamanh * sizeof(float));
        for (int i = 0; i < tamanh; i++){
            wprintf(L"Digite o valor %d: ", i);
            scanf("%f", &val[i]);
            wprintf(L"Digite o peso %d: ", i);
            scanf("%f", &pesos[i]);
        }
        wprintf(L"Média ponderada: %f", mediaPonderada(val, pesos, tamanh));
        break;
        case 10:
        wprintf(L"Digite a string: ");
        char string[100];
        scanf("%s", string);
        wprintf(L"Tamanho: %d", tamanho(string));
        break;
        case 11:
        wprintf(L"Digite a primeira string: ");
        char string1[100];
        scanf("%s", string1);
        wprintf(L"Digite a string a ser copiada: ");
        char string2[100];
        scanf("%s", string2);
        int resp = copiaString(string1, string2);
        if (resp == 0){
            wprintf(L"Não foi possível copiar.");
        } else if (resp == 1){
            wprintf(L"Cópia realizada com sucesso.");
        }
        break;
        case 12: 
        wprintf(L"Digite a string: ");
        char inpt[100];
        char str[100];
        scanf("%s", str);
        wprintf(L"%s", python(str, inpt));
        break;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}