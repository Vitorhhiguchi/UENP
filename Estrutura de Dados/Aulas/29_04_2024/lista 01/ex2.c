/*Crie um programa utilizando struct e calloc que leia a informação de peso(N) e área da base (m2) 
de n objetos e calcule a pressão de cada objeto. Pressão = Força Peso(N)/Área(m2) */

#include <stdio.h>
#include <stdlib.h>

typedef struct pressaoDoObjeto {
    float peso;
    float area;
    float pressao;
} pressaoDoObjeto;


int main(){
    pressaoDoObjeto * pressaos;

    int n;

    printf("Digite a quantidade de objetos: ");
    scanf("%d", &n);

    pressaos = (pressaoDoObjeto*) calloc(n, sizeof(pressaoDoObjeto));

    for(int i=0; i<n; i++){
        printf("Digite o valor do peso do objeto: \n");
        scanf("%f", &pressaos[i].peso);

        printf("DIgite o valor da area do objeto: \n");
        scanf("%f", &pressaos[i].area);

        pressaos[i].pressao = pressaos[i].peso / pressaos[i].area;
    }

    for(int i=0; i<n; i++){
        printf("Informacoes do objeto:\n");
        printf("Peso: %.2f\n", pressaos[i].peso);
        printf("Area: %.2f\n", pressaos[i].area);
        printf("Pressao: %.2f\n\n", pressaos[i].pressao);
    }

    free(pressaos);

    return 0;
}