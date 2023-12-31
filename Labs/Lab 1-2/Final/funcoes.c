#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float media(float x, float y){
    return (x + y) / 2;
}

double distancia(float x1, float y1, float x2, float y2){
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

float nota(){
wprintf(L"Escolha a disciplina que deseja calcular a média: \n");
wprintf(L"1 - Cálculo I\n");
wprintf(L"2 - Cálculo II\n");
wprintf(L"3 - Desenvolvimento de algoritimos\n");
wprintf(L"4 - Física básica\n");
wprintf(L"5 - Geometria analítica\n");
wprintf(L"6 - Filosofia\n");
wprintf(L"7 - Teoria de grafos\n");
int disciplina;
scanf("%d", &disciplina);
switch (disciplina) {
    case 1:
        printf("Digite a nota das atividades \n");
        float at1, at2, at3;
        printf("Digite a nota da primeira atividade: ");
        scanf("%f", &at1);
        printf("Digite a nota da segunda atividade: ");
        scanf("%f", &at2);
        printf("Digite a nota da terceira atividade: ");
        scanf("%f", &at3);
        float atividades = (at1 + at2 + at3) / 3;
        printf("Digite a nota da prova final: ");
        float provafinal;
        scanf("%f", &provafinal);
        float retur;
        retur = ((0.3 * atividades) + (0.7 * provafinal));
        return (retur);
    case 2:
        printf("Digite a nota das atividades: ");
        float atividade;
        scanf("%f", &atividade);
        printf("Digite a nota da prova final: ");
        float prova;
        scanf("%f", &prova);
        float re;
        re = ((0.4 * atividade) + (0.6 * prova));
        return (re);
    case 3:
        {
        float lab1, lab2, lab3, lab4, lab5, lab6;
        wprintf(L"Digite a nota do primeiro laboratório: ");
        scanf("%f", &lab1);
        wprintf(L"Digite a nota do segundo laboratório: ");
        scanf("%f", &lab2);
        wprintf(L"Digite a nota do terceiro laboratório: ");
        scanf("%f", &lab3);
        wprintf(L"Digite a nota do quarto laboratório: ");
        scanf("%f", &lab4);
        wprintf(L"Digite a nota do quinto laboratório: ");
        scanf("%f", &lab5);
        wprintf(L"Digite a nota do sexto laboratório: ");
        scanf("%f", &lab6);
        float labtotal = lab1 + lab2 + lab3 + lab4 + lab5 + lab6;
        float labs [6] = {lab1, lab2, lab3, lab4, lab5, lab6};
        // Achar a menor nota
        float menornota = labs[0];
        for (int i = 0; i < 6; i++) {
            if (labs[i] < menornota) {
                menornota = labs[i];
            }
        }
        float flab = 0.7 + 0.03 * ((labtotal - menornota)/(6 - 1));
        printf("Digite a nota do primeiro projeto: ");
        float proj1;
        scanf("%f", &proj1);
        printf("Digite a nota do segundo projeto: ");
        float proj2;
        scanf("%f", &proj2);
        printf("Digite a nota do terceiro projeto: ");
        float proj3;
        scanf("%f", &proj3);
        float proj = 0.2 * proj1 + 0.6 * proj2 + 0.2 * proj3;
        printf("Digite a nota da prova final: ");
        float prov;
        scanf("%f", &prov);
        float ret;
        ret = (sqrt(flab * proj * prov));
        return (ret);
        }
    case 4:
        printf("Digite a nota do projeto: ");
        float projeto;
        scanf("%f", &projeto);
        wprintf(L"Digite a nota das atividades de laboratório: ");
        float lab;
        scanf("%f", &lab);
        wprintf(L"Digite a nota do atividade teóricas: ");
        float ativ;
        scanf("%f", &ativ);
        printf("Digite a nota da prova final: ");
        float final;
        scanf("%f", &final);
        float reto;
        reto = ((0.2 * projeto) + (0.2 * lab) + (0.1 * ativ) + (0.5 * final));
        return (reto);
    case 5:
        printf("Digite a nota da primeira atividade: ");
        float ativ1;
        scanf("%f", &ativ1);
        printf("Digite a nota da segunda atividade: ");
        float ativ2;
        scanf("%f", &ativ2);
        printf("Digite a nota da terceira atividade: ");
        float ativ3;
        scanf("%f", &ativ3);
        float t = (ativ1 + ativ2 + ativ3) / 3;
        printf("Digite a nota da prova final: ");
        float prv;
        scanf("%f", &prv);
        float retor;
        retor = ((0.3 * t) + (0.7 * prv));
        return (retor);
    case 6:
        wprintf(L"Você fez o trabalho de extenção? (1 - Sim, 2 - Não) ");
        int f;
        scanf("%d", &f);
        float T;
        if (f == 1) {
            printf("Digite a nota do trabalho de extenção: ");
            scanf("%f", &T);
        }
        float e1, e2, e3, e4;
        printf("Digite a nota do primeiro exercicio: ");
        scanf("%f", &e1);
        printf("Digite a nota do segundo exercicio: ");
        scanf("%f", &e2);
        printf("Digite a nota do terceiro exercicio: ");
        scanf("%f", &e3);
        printf("Digite a nota do quarto exercicio: ");
        scanf("%f", &e4);
        float E = e1 + e2 + e3 + e4;
        float M = E * 0.4 + T * 0.6;
        float retorn;
        retorn = (M * f); 
        return (retorn);
    case 7:
        printf("Digite a nota da primeira atividade: ");
        float a1;
        scanf("%f", &a1);
        printf("Digite a nota da segunda atividade: ");
        float a2;
        scanf("%f", &a2);
        float A = (a1 + a2) / 2;
        printf("Digite a nota da prova final: ");
        float pf;
        scanf("%f", &pf);
        float retorno;
        retorno = ((0.3 * A) + (0.7 * pf));
        return (retorno);
    default:
        printf("Disciplina inválida\n");
        return 0;
        }
}

float max_float(float x, float y){
float max;
if (x > y){
    max = x;
} else if (x < y){
    max = y;
} else {
    max = 0;
}
return max;
}
float min_float(float x, float y){
float min;
if (x < y){
    min = x;
} else if (x > y){
    min = y;
} else {
    min = 0;
}
return min;
}

int sinal(float x){
int sin;
if (x < 0){
    sin = -1;
} else if (x > 0){
    sin = 1;
} else if (x == 0) {
    sin = 0;
}
return sin;
}

int acima_de(float valor, float limite){
int res;
if (valor > limite){
    res = 1;
} else if (valor <= limite){
    res = 0;
}
return res;
}
// Uma função que busca um valor em um vetor e retorna a posição do valor ou -1 se não encontrar
int busca(int valor, int valores[], int tamanho){
    int res;
    for (int i = 0; i < tamanho; i++){
        if (valores[i] == valor){
            res = i;
            break;
        } else {
            res = -1;
        }
    }
    return res;
}
// Uma função que calcula a média ponderada de um vetor de valores e um vetor de pesos
float mediaPonderada(float valores[], float pesos[], int tamanho){
    float soma = 0;
    float somapesos = 0;
    for (int i = 0; i < tamanho; i++){
        soma += valores[i] * pesos[i];
        somapesos += pesos[i];
    }
    return soma / somapesos;
}
// Uma função que retorna o tamanho de uma string
int tamanho(char string[]){
    int tam = strlen(string);
    return tam;
}
// Uma função que copia uma string para outra e retorna 1 se as strings são iguais e 0 se são diferentes
int copiaString(char string1[], char string2[]){
    strcpy(string2, string1);
    if (strcmp(string1, string2) == 0){
        return 1;
    } else {
        return 0;
    }
}
// uma função que funciona como a função input do Python (recebe uma string para imprimir e retorna uma string com o que foi lido do teclado)
char* python(char string[], char inpt[]){
    printf("%s", string);
    scanf("%s", inpt);
    return inpt;
}