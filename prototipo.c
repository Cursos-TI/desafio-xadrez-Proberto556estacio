#include <stdio.h>

// Movimento da Torre (para a direita) - Recursividade sem return
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Movimento da Rainha (para a esquerda) - Recursividade sem return
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Movimento do Bispo (recursividade + loops) sem return
void moverBispo(int movimentosRestantes, int i) {
    if (movimentosRestantes > 0) {

        // Loop aninhado simples
        for (int j = 0; j <= i; j++) {
            if (i == j) {
                printf("Cima Direita\n");
                movimentosRestantes--; // decrementa dentro da lógica
                break; // ainda usa break para controle do loop
            }
        }

        moverBispo(movimentosRestantes, i + 1);
    }
}

// Movimento do Cavalo em "L" (2 cima, 1 direita) usando loops com continue/break
void moverCavalo() {
    int movimentosRealizados = 0;

    for (int cima = 0; cima <= 2; cima++) {
        for (int direita = 0; direita <= 1; direita++) {

            // Verifica a condição exata do movimento em "L"
            if (cima == 2 && direita == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                movimentosRealizados = 1;
                break; // sai do loop interno
            }

            if (cima + direita < 3) {
                continue;
            }
        }

        if (movimentosRealizados) {
            break; // sai do loop externo
        }
    }
}

int main() {
    // Número total de movimentos desejados
    int movBispo = 5;     
    int movTorre = 5;
    int movRainha = 8;

    // Movimento do Bispo
    printf("Movimento do Bispo\n");
    moverBispo(movBispo, 0);
    printf("\n");

    // Movimento da Torre
    printf("Movimento da Torre\n");
    moverTorre(movTorre);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha\n");
    moverRainha(movRainha);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo (Movimento em L)\n");
    moverCavalo();
    printf("\n");

    return 0;
}
