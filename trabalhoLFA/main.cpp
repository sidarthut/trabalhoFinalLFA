#include <iostream>
#include <cstring>
#include "funcoes.h"

using namespace std;

int main(){

    string palavra;

    cout << "Insira a palavra da AFe: ";
    cin >>palavra;

        if ( recebe(palavra)){
        cout << "Palavra aceita!";
    }
    else {
        cout << "Palavra rejeitada!";
    }

    return 0;
}
