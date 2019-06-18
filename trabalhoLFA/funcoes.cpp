#include <iostream>
#include <cstring>
#include "funcoes.h"

using namespace std;

int aceita(string word, int qn, int i){


    if (qn == 0){
        if (word[i] == 'a'){
            i++;
            if (word[i] == '\00'){
                return 1;
            }

            return aceita (word, 1, i);
            return aceita (word, 2, i);
            return aceita (word, 3, i);
        }
    }
    if (qn == 1){
    //Estado final
        if (word[i] == 'b'){
            i++;
            return aceita (word, 4, i);
        }
        if (word[i] == 'c'){
            i++;
            return aceita (word, 2, i);
        }
    }
    if (qn == 2){
        if (word[i] == 'c'){
            i++;
            if (word[i] == '\00'){
                return 1;
            }
            return aceita (word, 2, i);
        }
        if (word[i] == 'b'){
            i++;
            return aceita (word, 4, i);
            return aceita (word, 5, i);
        }
    }
    if (qn == 3){
        if (word[i] == 'a'){
            i++;
            return aceita (word, 1, i);
            return aceita (word, 2, i);
            return aceita (word, 3, i);
        }
    }

    if (qn == 4){
        if (word[i] == 'b'){
            i++;
            return aceita (word, 5, i);
        }
    }
    //Estado final
    if (qn == 5){
        if (word[i] == '\00'){
            return 1;
        }
    }

    return 0;

}

int recebe(string word){
    int qn = 0;
    int i = 0;
    return aceita(word, qn, i);
}
