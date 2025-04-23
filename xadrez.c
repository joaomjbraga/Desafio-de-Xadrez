#include <stdio.h>

// Movimento recursivo da Torre - Direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento recursivo + loop aninhado do Bispo - Cima Direita
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;

    for (int i = 0; i < 1; i++) { // Loop externo - vertical
        for (int j = 0; j < 1; j++) { // Loop interno - horizontal
            printf("Cima Direita\n");
        }
    }
    moverBispo(vertical - 1, horizontal - 1);
}

// Movimento recursivo da Rainha - Esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Cavalo com loops complexos - 2 para cima, 1 para direita
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int passosVerticais = 0;
    for (int i = 0; i < 3; i++) {
        if (passosVerticais == 2) break;
        if (i % 2 == 0) {
            printf("Cima\n");
            passosVerticais++;
        } else {
            continue; // apenas um controle simbólico
        }
    }

    int passosHorizontais = 0;
    int j = 0;
    while (j < 2) {
        j++;
        if (passosHorizontais == 1) break;
        printf("Direita\n");
        passosHorizontais++;
    }
}

int main() {
    // Movimento da Torre - 5 casas para a direita (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita (recursivo + aninhado)
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 5);

    // Movimento da Rainha - 8 casas para a esquerda (recursivo)
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo - "L" para cima e direita (loops complexos)
    moverCavalo();

    return 0;
}
