//Implemente as seguintes funções: 
// 1. int soma(int v[], int n); 
// que recebe um vetor de inteiros v e o seu tamanho n e retorna a soma dos elementos do vetor.
// 2. int multiplicacao(int valor, int v[], int tamanho);
// que recebe um valor inteiro e um vetor de inteiros v e o seu tamanho n e retorna a multiplicação do valor por cada elemento do vetor.
// 3. int maior(int v[], int tamanho);
// que recebe um vetor de inteiros v e o seu tamanho n e retorna o maior elemento do vetor.
// 4. int copia(int v[], int v2[], int tamanho);
// que recebe um vetor de inteiros v e o seu tamanho n e copia os elementos do vetor v para o vetor v2.
// 5. int exibe(int m[][], int linhas, int colunas);
// que recebe uma matriz de inteiros m, o número de linhas e o número de colunas e exibe a matriz.
// 6. int somaMatriz(int m[][], int m2[][], int r[][], int linhas, int colunas);
// que recebe duas matrizes de inteiros m e m2, o número de linhas e o número de colunas e retorna a soma das matrizes.

#include <stdio.h>
#include <locale.h>

int soma(int v[], int n){
     int conta;
        for (int i = 0; i < n; i++){
            conta += v[i];
        }
        return conta;
}

int multiplicacao(int valor, int v[], int tamanho){
    int conta;
    for (int i = 0; i < tamanho; i++){
        conta += valor * v[i];
    }
    return conta;
}

int maior(int v[], int tamanho){
    int maior = v[0];
    for (int i = 0; i < tamanho; i++){
        if (v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
}

int copia(int v[], int v2[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        v2[i] = v[i];
    }
    return v2;
}

int exibe(int m[][], int linhas, int colunas){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}

int somaMatriz(int m[][], int m2[][], int r[][], int linhas, int colunas){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            r[i][j] = m[i][j] + m2[i][j];
        }
    }
    return r;
}