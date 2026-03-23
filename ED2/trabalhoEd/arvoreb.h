#include <stdio.h>
#include <stdlib.h>
#include "arvoreb.h"

ArvoreB criar_arvore(void) {
    return NULL;
}

ArvoreB criar_no(int folha) {

    NoB* novoNo = (NoB*) malloc(sizeof(NoB));

    if (novoNo == NULL) {
        printf("Erro ao alocar no\n");
        return NULL;
    }

    novoNo->n = 0;
    novoNo->folha = folha;

    for (int i = 0; i < ORDEM - 1; i++) {
        novoNo->chaves[i] = 0;
        novoNo->posicoes[i] = -1;
    }

    for (int i = 0; i < ORDEM; i++) {
        novoNo->filhos[i] = NULL;
    }

    return novoNo;
}

NoB *buscar(ArvoreB *arvoreB, int chave){
    
    if(arvoreB == NULL)
        return NULL;
    
    for (int i = 0; i < ORDEM; i++) {
        
        if(chave > chaves[i] ){
            if(arvoreB->chaves[i] == chave)
            return posicoes[i];
            
        }else{
            
        }
        
    }

    
    
}
