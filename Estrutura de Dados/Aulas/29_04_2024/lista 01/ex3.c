/* Faça um programa utilizando o comando malloc, que leia o peso de n pessoas, armazene em um vetor
e encontre a pessoa com o peso mais distante da média.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    float media=0, maisDistante = 0;

    float *peso;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);

    peso = (float *) malloc(n*sizeof(float));

    for(int i=0; i<n; i++){
        printf("Digite o peso: ");
        scanf("%f", &peso[i]);

        media += peso[i];
    }

    media = media / n;

    for(int i=0; i<n; i++){
        if(media > peso[i]){
            maisDistante = peso[i];
        }
    }

    printf("A media de pesos: %.2f\n", media);
    printf("O peso mais distante da media eh de: %.2f", maisDistante);

    free(peso);

    return 0;
}