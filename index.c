#include <stdio.h>

// função de movimento da torre
void movimentoDaTorre() {
    int torre;
    printf("Torre para:\n");
    for (torre = 1; torre <= 5; torre++) {
        printf("Direita.\n");
    }
    printf("total de %d casas andando para a esquerda.\n", torre - 1);
}

// função de movimento da rainha
void movimentoDaRainha() {
    int rainha = 1;
    printf("\nRainha para:\n");
    do {
        printf("Esquerda.\n");
        rainha++;
    } while (rainha <= 8);
    printf("total de %d casas andando para a esquerda.\n", rainha - 1);
}


void movimentoDoCavalo(int numeroDeMovimentos) {
    int cima, direita;
    if (numeroDeMovimentos > 0) {
        printf("\nCavalo para:\n");
        for (cima = 1; cima <= 2; cima++) {
            printf("Cima. \n");
            for (direita = 1; direita <= 1 && cima != 1; direita++) {
                printf("Direita. \n");
            }
        }
    printf("Total de %d casas andando para cima e %d para direita.\n", cima - 1, direita - 1);

        movimentoDoCavalo(numeroDeMovimentos - 1);
    }

}

// função de movimento do bispo
void movimentoDoBispo(int numeroDeMovimentos) {
    int cima, direita;
    if (numeroDeMovimentos > 0) {
        for (cima = 2; cima <= 2; cima++) {
            printf("Cima. \n");
            for (direita = 1; direita < cima; direita++) {
                printf("Direita. \n");
            }
        }

        movimentoDoBispo(numeroDeMovimentos - 1);

    }

}

int main() {
    // Movimentos da torre
    movimentoDaTorre();

    // Movimentos da Rainha
    movimentoDaRainha();

    // Movimentos do Cavalo
    movimentoDoCavalo(1);

    // Movimentos do Bispo
     printf("\nBispo para: \n");
    movimentoDoBispo(5);
     printf("Total de 5 casas andando para a diagonal cima/direita.\n");

    return 0;
}
