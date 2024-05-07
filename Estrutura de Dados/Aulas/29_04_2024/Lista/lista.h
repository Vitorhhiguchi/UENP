struct lista {
    int info;
    struct lista* prox;
};
typedef struct lista Lista;

Lista* lst_cria(void);
Lista* lst_libera(Lista* lst);

Lista* lst_insere(Lista* lst, int val);
Lista* lst_retira(Lista* lst, int val);

int lst_vazia(Lista* lst);
Lista* lst_busca(Lista* lst, int val);
void lst_imprime(Lista* lst);
int lst_igual(Lista* lst1, Lista* lst2);
Lista* lst_insere_ordenado(Lista* lst, int val);

//Novas funções para implementar
Lista* lst_insere_no_final (Lista* lst, int val);