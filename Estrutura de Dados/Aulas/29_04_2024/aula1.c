/*Faça um programa utilizando struct e malloc, que leia a informação do raio de n
círculos e calcule a circunferência e área. Circunferência = 2*pi*r , Área = pi*r*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

typedef struct circulo {
    float raio;
    float area;
    float cincunferencia;
} circulo;


int main(){
    circulo * circulos;

    int n;

    printf("Digite a quantidade de circulos: ");
    scanf("%d", &n);

    circulos = (circulo *) malloc (n*sizeof(circulo));

    for(int i=0; i<n; i++){
        printf("Digite o raio do circulo: ");
        scanf("%f", &circulos[i].raio);

        circulos[i].area = PI * circulos[i].raio * circulos[i].raio;
        circulos[i].cincunferencia = 2 * PI * circulos[i].raio;
    }

    for(int i=0; i<n; i++){
        printf("Informacaoes do circuito [%d]: \n", i);
        printf("Raio: %.2f\n", circulos[i].raio);
        printf("Area: %.2f\n", circulos[i].area);
        printf("Circunferencia: %.2f\n\n", circulos[i].cincunferencia);
    }

    free(circulos);
    return 0;
}