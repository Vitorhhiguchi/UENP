#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* lst_cria(void) {
    return NULL;
}

Lista* lst_insere(Lista* lst, int val){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = val;
    novo->prox = lst;
    return novo;
}

void lst_imprime(Lista* lst){
    Lista* p;
    for(p=lst; p!= NULL; p = p->prox)
        printf("info = %d\n", p->info);
}

int lst_vazia(Lista* lst){
    return (lst == NULL); 
    // Retorna 1 se estiver vazio
    // Retorna 0 se não estiver
}

Lista* lst_busca(Lista* lst, int val){
    Lista* p;
    for(p=lst; p!=NULL; p = p->prox){
        if(p->info == val)
            return p;
    }

    return NULL;
}

Lista* lst_retira(Lista* lst, int val){
    Lista* ant = NULL;
    Lista* p = lst;

    while(p != NULL && p->info != val){
        ant = p;
        p = p->prox;
    }

    if(p == NULL){
        printf("Valor não encontrado!\n");
        return lst;
    }
    if(ant == NULL){
        lst = p->prox;
    }else{
        ant->prox = p->prox;
    }
    free(p);
    printf("Valor retirado com sucesso!\n");
    return lst;
}

Lista* lst_libera(Lista* lst){ // Mudei a função de void para Lista*, para ocnseguirmos acessar o ponteiro
    Lista* t;
    Lista* p = lst;
    while(p!=NULL){
        t = p->prox;
        free(p);
        p = t;
    }
    return NULL; // E então retornamos o valor NULL para o 
    //LST, para que ele consiga saber que a lista esta vazia, sem lixo eletronico
}

Lista* lst_insere_ordenado(Lista* lst, int val){
    Lista* novo;
    Lista* ant = NULL; // ponteiro para elemento anterior
    Lista* p = lst; // ponteior para percorrer a lista

    while(p != NULL && p->info < val){
        ant = p; 
        p = p->prox;
    }

    novo = (Lista*) malloc(sizeof(Lista));
    novo->info = val;

    //Encadeia elemento
    if(ant == NULL){
        novo->prox = lst;
        lst = novo;
    }else{
        novo->prox = ant->prox;
        ant->prox = novo;
    }
    return lst;
}

int lst_igual(Lista* lst1, Lista* lst2){
    Lista* p1;
    Lista* p2;
    for(p1=lst1, p2=lst2; 
    p1 != NULL && p2 != NULL; 
    p1 = p1->prox, p2 = p2->prox)
    {
        if(p1->info != p2->info)
        return 0;
    }
    return p1==p2;
}

//Funções que eu estou implementando
Lista* lst_insere_no_final (Lista* lst, int val){
    Lista* final;
    Lista* aux;
    aux->info = val;

    for(Lista* i=lst; i!=NULL; i=i->prox){
        final->prox = i->prox;
    }

    
}


int main(){
    Lista* lst;
    Lista* aux;
    Lista* lst_remove;

    lst = lst_cria();

    lst = lst_insere(lst, 23);
    lst = lst_insere(lst, 45);
    lst = lst_insere(lst, 512);
    lst = lst_insere(lst, 78);
    lst = lst_insere(lst, 18);
    lst = lst_insere(lst, 90);
    lst = lst_insere(lst, 112);
    lst = lst_insere_ordenado(lst, 200);

    lst_imprime(lst);

    aux = lst_busca(lst, 512);

    printf("Busca: %d\n\n", aux->info);

    lst_remove = lst_retira(lst, 18);
    printf("Lista apos ser removido:\n");
    lst_imprime(lst_remove);

    lst = lst_libera(lst); 
    int teste = lst_vazia(lst);
    
    printf("%d", teste);


    return 0;
}