#ifndef PILHA_ESTATICA_H
#define PILHA_ESTATICA_H
#include <stdbool.h>

typedef struct{
    char dados[50];
    int topo;

} PilhaChar;

void inicializar(PilhaChar* p);
bool pushChar(PilhaChar* p, char c);
char popChar(PilhaChar* p);
char topChar(PilhaChar* p);
bool vazia(PilhaChar* p);
void exibir(PilhaChar* p);

#endif
