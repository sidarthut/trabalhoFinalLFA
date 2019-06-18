#include <iostream>
#include "lista.h"
#include "aluno.h"

using namespace std;

int main() {
    lista *elementos = NULL;
    aluno *tmp;

    while (1) {
        tmp = new aluno[1];
        cin >> tmp->nome >> tmp->mat;
        inserir(&elementos, tmp);
        imprimir(elementos);
    }
}
