#include "lista.h"
#include <iostream>
#include <string.h>

using namespace std;

lista *criar(aluno *dado) {
    lista *novo = new lista[1];
    if (novo!=NULL) {
        novo->dado = dado;
        novo->prox = NULL;
    }
    return novo;
}
int inserir(lista **cab, aluno *dado) {
    //inserir um novo no na lista
    //1) considerar sempre no inicio
    lista *novo = criar(dado);
    if (novo == NULL) return 0; //deu erro
    if (*cab == NULL) { //lista vazia
        *cab = novo;
    }
    else { //lista não vazia
        novo->prox = *cab;
        *cab = novo;
    }

    return 1;
}
aluno *buscar(lista *cab, char *criterio) {
    lista *tmp = cab;
    while (tmp != NULL) {
        if (tmp->dado != NULL)
            if (strcmp(tmp->dado->nome, criterio) == 0)
                return tmp->dado;
    }
    return NULL;
}

lista *buscarTodos(lista *cab, char *criterio) {
    lista *tmp = cab;
    lista *resp = NULL;
    while (tmp != NULL) {
        if (tmp->dado != NULL)
            if (strcmp(tmp->dado->nome, criterio) == 0)
                inserir(&resp, tmp->dado);
    }
    return resp;
}

void imprimir(lista *cab) {
    lista *tmp = cab;
    cout << "Na lista: " << endl;
    while (tmp != NULL) {
        if (tmp->dado != NULL)
            cout << tmp->dado->nome << ":" <<
                    tmp->dado->mat << endl;

        tmp = tmp->prox;
    }


}
