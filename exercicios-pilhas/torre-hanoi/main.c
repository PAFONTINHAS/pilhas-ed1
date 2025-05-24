#include <stdio.h>
#include "hanoi.h"


int main() {
    Hanoi jogo;
    int num_discos;

    printf(CYAN "==== Torre de Hanoi ====\n" RESET);
    printf("Digite o numero de discos: ");
    scanf("%d", &num_discos);

    inicializarHanoi(&jogo, num_discos);

    printf(YELLOW "\nEstado inicial:\n" RESET);
    exibirTorres(&jogo);

    printf(MAGENTA "\nResolvendo...\n" RESET);

    resolverHanoi(&jogo, num_discos, 0, 2, 1);

    printf(BLUE "\nTorre de Hanoi resolvida com sucesso!\n" RESET);

    return 0;
}
