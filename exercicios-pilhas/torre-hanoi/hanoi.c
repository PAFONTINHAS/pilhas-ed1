#include <stdio.h>
#include <stdbool.h>
#include "hanoi.h"


void inicializarHanoi(Hanoi* jogo, int n){
    if(n > MAX_DISCOS){
        printf("\nNumero maximo de discos eh %d\n", MAX_DISCOS);
        n = MAX_DISCOS;
        printf("\nInicializando jogo com %d discos", n);
    }

    jogo->num_discos = n;

    for(int i = 0; i < 3; i++){
        jogo->torre[i].topo = -1;
    }

    // Empilha os discos na torre 0 (A), do maior para o menor
    for(int disco = n; disco >= 1; disco--){
        jogo->torre[0].topo++;
        // A torre A recebe os discos que estão no topo da posicao A
        jogo->torre[0].dados[jogo->torre[0].topo] = disco;
    }


}

void exibirTorres(Hanoi* jogo) {
    for (int i = 0; i < 3; i++) {
        printf("%c: ", 'A' + i);
        for (int j = 0; j <= jogo->torre[i].topo; j++) {
            printf("%d ", jogo->torre[i].dados[j]);
        }
        printf("\n");
    }
    printf("----------------------\n");
}


bool moverDisco(Hanoi* jogo, int origem, int destino){
    if(jogo->torre[origem].topo == -1){
        printf("\nTorre de origem vazia!");
        return false;
    }

    int discoOrigem = jogo->torre[origem].dados[jogo->torre[origem].topo];

    if(jogo->torre[destino].topo != -1){
        int discoDestino = jogo->torre[destino].dados[jogo->torre[destino].topo];

        if(discoOrigem > discoDestino){
            printf("Movimento inválido: disco maior não pode ser colocado sobre disco menor.\n");
            return false;
        }
    }

    jogo->torre[origem].topo--;
    jogo->torre[destino].topo++;
    jogo->torre[destino].dados[jogo->torre[destino].topo] = discoOrigem;

    printf(GREEN "Move disco %d de %c para %c\n" RESET, discoOrigem, 'A' + origem, 'A' + destino);
    exibirTorres(jogo);
    return true;
}

void resolverHanoi(Hanoi* jogo, int n, int origem, int destino, int auxiliar){
    if(n == 1){
        moverDisco(jogo, origem, destino);
        return;
    }

    resolverHanoi(jogo, n - 1, origem, auxiliar, destino);
    moverDisco(jogo, origem, destino);
    resolverHanoi(jogo, n-1, auxiliar, destino, origem);


}




