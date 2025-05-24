#include <stdio.h>
#include "pilha.h"

int main(){

    PilhaChar* p;

    printf("\nInicializando pilha \n");
    inicializar(p);

    printf("Inserindo valores: \n");

    pushChar(p, 'A');
    pushChar(p, 'B');
    pushChar(p, 'C');
    pushChar(p, 'D');

    printf("\n\nExibindo elementos: \n ");
    exibir(p);

    printf("\n\nExibindo ultimo elemento adicionado: \n");
    topChar(p);

    printf("\n\nRemovendo ultimo elemento adicionado: \n");
    popChar(p);

    printf("\n\nExibindo elementos após a remocao: \n");
    exibir(p);

    printf("\nEsvaziando pilha");
    vazia(p);

}
