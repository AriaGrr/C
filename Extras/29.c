#include <stdio.h>
#include <stdlib.h>
// // Elaborar um programa cuja entrada são 3 números reais e cuja saída apresenta esses números em ordem crescente. Utilize estrutura, dupla precisão e 4 casas depois da vírgula.

double crescente(double a,double b,double c){
    double primeiro, segundo, terceiro;
    if (a < b && a < c){
        primeiro = a;
        if (b < c){
            segundo = b;
            terceiro = c;
        } else {
            segundo = c;
            terceiro = b;
        }
    } else if (b < a && b < c){
        primeiro = b;
        if (a < c){
            segundo = a;
            terceiro = c;
        } else {
            segundo = c;
            terceiro = a;
        }
    } else if (c < a && c < b){
        primeiro = c;
        if (a < b){
            segundo = a;
            terceiro = b;
        } else {
            segundo = b;
            terceiro = a;
        }
    }
    printf("%.lf %.lf %.lf",   primeiro, segundo, terceiro);
    return 0;
}

int main (){
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    crescente(a, b, c);
    return 0;
}