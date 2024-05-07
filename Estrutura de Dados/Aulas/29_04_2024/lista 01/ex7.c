/* Faça um programa que leia uma matriz quadrada de dimensão n de distâncias e
determine maior e menor distância . Use calloc.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int l;
    float **matriz;
    printf("Digite o tamanho da matriz:");
    scanf("%d", &l);
    matriz = (float **) malloc(l * sizeof(float *));
    for(int i=0; i<l; i++){
        matriz[i] = (float *) malloc(l * sizeof(float));
        for(int j=0; j<l; j++){
            printf("Digite o valor para [%d %d]: " i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    maiorValor = 0;
    menorValor = 10000000;

    for(int i=0; i<l; i++){
        for(int j=0; j<l; i++){
            if(matriz[i][j] < menorValor){
                menorValor = matriz[i][j];
            }
            if(matriz[i][j] > maiorValor){
                maiorValor = matriz[i][j];
            }
        }
    }

    printf("Maior valor: %f\n", maiorValor);
    printf("Menor valor: %f\n", menorValor);

    for(int i=0; i<1; i++){
        free(matriz[i]);
    }

    return 0;
}