#include <stdio.h>
#include <stdlib.h>

typedef struct elemento{
    int conteudo;
    struct elemento *prox;
}Elem;

typedef struct fila{
    int quantidade;
    int maximo;
    struct elemento *inicio;
    struct elemento *fim;
}Fila;

Fila* cria_fila(){
    Fila* fi = (Fila*) malloc(sizeof(Fila));
    if(fi!=NULL){
        fi->quantidade = 0;
        fi->maximo = 5;
        fi->inicio = NULL;
        fi->fim = NULL;
    }
    return fi;
    
}

int enqueue(Fila* fi, int x){
    if(fi== NULL || fi->quantidade >= fi->maximo){
        return -1;
    }
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no ==NULL){
        return 0;
    }
    no->conteudo = x;
    no->prox = NULL;
    
    if(fi->quantidade==0){
        fi->inicio = no;
        fi->fim = no;
    }
    else{
        fi->fim->prox = no;
        fi->fim = no;
    }
    fi->quantidade++;
    
    return 1;
    
}


int main()
{
    printf("Hello World");

    return 0;
}
