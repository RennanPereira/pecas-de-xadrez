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

// função de movimento do cavalo
void movimentoDoCavalo() {
    int cavalo, cima;
    for (cavalo = 1; cavalo <= 1; cavalo++) {
        printf("\nCavalo para:\n");
        for (cima = 1; cima <= 2; cima++) {
            printf("Cima. \n");
        }
        printf("Direita. \n");
    }
    printf("Total de %d casas andando para cima e %d para direita.\n", cima-1, cavalo-1);

}

// função de movimento do bispo
void movimentoDoBispo(int numeroDeMovimentos) {
    if (numeroDeMovimentos > 0) {
        for (int cima = 1; cima <= 1; cima++) {
            printf("Cima. \n");
            for (int direita = 1; direita <= 1; direita++) {
                printf("Direita. \n");
            }
        }
        movimentoDoBispo(numeroDeMovimentos - 1);
    }

}

int main() {
    // Movimentos da torre
    movimentoDaTorre();

    // Movimentos do Bispo
    printf("\nBispo para: \n");
    movimentoDoBispo(5);
    printf("Total de 5 casas andando para a diagonal cima/direita.\n");

    // Movimentos da Rainha
    movimentoDaRainha();

    // Movimentos do Cavalo
    movimentoDoCavalo();

    return 0;
}