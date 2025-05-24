#ifndef TORRE_HANOI_H
#define TORRE_HANOI_H
#include <stdbool.h>
#define MAX_DISCOS 10
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

typedef struct{
    int dados[MAX_DISCOS];
    int topo;

} PilhaEstatica;

typedef struct
{
    PilhaEstatica torre[3];
    int num_discos;

} Hanoi;

void exibirTorres(Hanoi* jogo);
void inicializarHanoi(Hanoi* jogo, int n);
bool moverDisco(Hanoi* jogo, int origem, int destino);
void resolverHanoi(Hanoi* jogo, int n, int origem, int destino, int auxiliar);

#endif
