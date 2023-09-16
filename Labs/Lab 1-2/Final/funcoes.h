#include "funcoes.c"

float media(float x, float y);

double distancia(float x1, float y1, float x2, float y2);

float nota();

float max_float(float x, float y);

float min_float(float x, float y);

int sinal(float x);

int acima_de(float valor, float limite);

int busca(int valor, int valores[], int tamanho);

float mediaPonderada(float valores[], float pesos[], int tamanho);

int tamanho(char string[]);

int copiaString(char string1[], char string2[]);
// uma função que funciona como a função input do Python (recebe uma string para imprimir e retorna uma string com o que foi lido do teclado)
char* python(char string[], char inpt[]);