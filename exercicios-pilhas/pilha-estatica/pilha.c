#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"
#define MAX 50

void inicializar(PilhaChar* p){
    p->topo = -1; // significa que  não há elementos
}

bool pushChar(PilhaChar* p, char c){
    if(p->topo >= 49){
        printf("\nPilha cheia!\n");
        return false;
    }

    p->topo++;
    p->dados[p->topo] = c;
    printf("\n %c alocado na posicao %d com sucesso", c, p->topo);

    return true;
}

char popChar(PilhaChar* p){
    if(p->topo == -1){
        printf("\nPilha Vazia! \n");
        return '\0';  // Retorna caractere nulo para indicar falha
    }

    char c =  p->dados[p->topo];
    p->topo--;

    printf ("\n '%c' removido da pilha.", c);

    return c;
}

char topChar(PilhaChar* p){
    if(p->topo == -1){
        printf("\nPilha Vazia! \n");
        return '\0';
    }

    char c = p->dados[p->topo];

    return c;
}


bool vazia(PilhaChar* p){
    if(p->topo == -1){
        printf("\n Pilha ja esta vazia! \n");
        return false;
    }


    while(p->topo != -1){
        printf("\n%c removido da pilha", p->dados[p->topo]);
        p->topo--;
    }

    printf("\n\nTodos os elementos da pilha foram removidos \n");
    return true;
}


void exibir(PilhaChar* p){
    if(p->topo == -1){
        printf("\nPilha vazia!");
        return;
    }

    for(int i = p->topo; i > -1; i--){
        printf("\nposicao: %d, elemento: %c", i, p->dados[i]);
    }

}
