#include <stdio.h>

// Função que recebe 2 valores em ponto flutuante e retorne a média
float media() {
    float a, b;
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    return (a + b) / 2;
}

// Função que recebe os valores x e y de dois pontos e calcula a distância entre estes pontos 
// float distancia (float x1, float y1, float x2, float y2) {
//     return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
// }
float distancia () {
    float x1, y1, x2, y2;
    printf("Digite o valor de x1: ");
    scanf("%f", &x1);
    printf("Digite o valor de y1: ");
    scanf("%f", &y1);
    printf("Digite o valor de x2: ");
    scanf("%f", &x2);
    printf("Digite o valor de y2: ");
    scanf("%f", &y2);
    float dx = x2 - x1;
    float dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}
// float distancia (float x1, float y1, float x2, float y2) {
//     float dx = x2 - x1;
//     float dy = y2 - y1;
//     return sqrt(pow(dx, 2) + pow(dy, 2));
// }

// Função que implemente o cálculo da média para cada disciplica que estou cursando neste semestre: Se M >= 5 aprovado, se não reprovado.
// Cálculo I: M = 0,3A + 0,7P
// Cálculo II: M = 0,4A + 0,6P
// Desenvolvimento de algoritimos: M = raiz(f * proj * prova) f = 0,7 + 0,03 * ((somanota - menornota)/(labtotal - 1)), proj = 0,2 * proj1 + 0,6 * proj2 + 0,2 * proj3
// Física básica: M = 0,2T + 0,2P + 0,1L + 0,5F
// Geometria analítica: M = 0,3T + 0,7P T = (P1 + P2 + P3) / 3
// Filosofia: M = [E*(0,4) + T*(0,6)]*f
// Teoria de grafos: M = 0,3T + 0,7P T = (P1 + P2 ) / 2

float nota(){
printf("Escolha a disciplina que deseja calcular a média: \n");
printf("1 - Cálculo I\n");
printf("2 - Cálculo II\n");
printf("3 - Desenvolvimento de algoritimos\n");
printf("4 - Física básica\n");
printf("5 - Geometria analítica\n");
printf("6 - Filosofia\n");
printf("7 - Teoria de grafos\n");
int disciplina;
scanf("%d", &disciplina);
switch (disciplina) {
    case 1:
        printf("Digite a nota das atividades ");
        float at1, at2, at3;
        printf("Digite a nota da primeira atividade: ");
        scanf("%f", &at1);
        printf("Digite a nota da segunda atividade: ");
        scanf("%f", &at2);
        printf("Digite a nota da terceira atividade: ");
        scanf("%f", &at3);
        float atividades = (at1 + at2 + at3) / 3;
        printf("Digite a nota da prova final: ");
        float prova;
        scanf("%f", &prova);
        return (0.3 * atividades + 0.7 * prova);
    case 2:
        printf("Digite a nota das atividades: ");
        float atividades;
        scanf("%f", &atividades);
        printf("Digite a nota da prova final: ");
        float prova;
        scanf("%f", &prova);
        return (0.4 * atividades + 0.6 * prova);
    case 3:
        printf("Digite a nota dos laboratórios: ");
        float lab1, lab2, lab3, lab4, lab5, lab6;
        printf("Digite a nota do primeiro laboratório: ");
        scanf("%f", &lab1);
        printf("Digite a nota do segundo laboratório: ");
        scanf("%f", &lab2);
        printf("Digite a nota do terceiro laboratório: ");
        scanf("%f", &lab3);
        printf("Digite a nota do quarto laboratório: ");
        scanf("%f", &lab4);
        printf("Digite a nota do quinto laboratório: ");
        scanf("%f", &lab5);
        printf("Digite a nota do sexto laboratório: ");
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
        float prova;
        scanf("%f", &prova);
        return (sqrt(flab * proj * prova));
    case 4:
        printf("Digite a nota do projeto: ");
        float projeto;
        scanf("%f", &projeto);
        printf("Digite a nota das atividades de laboratório: ");
        float lab;
        scanf("%f", &lab);
        printf("Digite a nota do atividade teóricas: ");
        float ativ;
        scanf("%f", &ativ);
        printf("Digite a nota da prova final: ");
        float final;
        scanf("%f", &final);
        return (0.2 * projeto + 0.2 * lab + 0.1 * ativ + 0.5 * final);
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
        float prova;
        scanf("%f", &prova);
        return (0.3 * t + 0.7 * prova);
    case 6:
        printf("Você fez o trabalho de extenção? (1 - Sim, 2 - Não) ");
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
        return (M * f);
    case 7:
        printf("Digite a nota da primeira atividade: ");
        float a1;
        scanf("%f", &a1);
        printf("Digite a nota da segunda atividade: ");
        float a2;
        scanf("%f", &a2);
        float A = (a1 + a2) / 2;
        printf("Digite a nota da prova final: ");
        float prova;
        scanf("%f", &prova);
        return (0.3 * A + 0.7 * prova);
    default:
        printf("Disciplina inválida\n");
        return 0;}
}
