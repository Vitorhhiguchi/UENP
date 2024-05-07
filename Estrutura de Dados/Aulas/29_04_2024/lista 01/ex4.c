/* Faça um programa utilizando calloc e struct que irá receber as notas de três avaliações
de n pessoas, armazene em um vetor e calcule a média final de cada provaa e apresente a maior nota. Use Malloc*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nota{
    float nota1;
    float nota2;
    float nota3;
    float media = 0;
    float maiorNota;
} nota;

int main(){
    nota * notas;

    int n;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);

    notas = (nota*) calloc(n, sizeof(nota));

    for(int i=0; i<n; i++){
        printf("Digite as 3 notas: ");
        scanf("%f%f%f", &notas[i].nota1, &notas[i].nota2, &notas[i].nota3);

        notas[i].media = notas[i].nota1+ notas[i].nota2 + notas[i].nota3 / 3;
    }


    free(notas);
    return 0;
}