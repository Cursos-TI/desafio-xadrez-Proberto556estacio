#include <stdio.h>

// Movimento da Torre (para a direita) - recursivo
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento da Rainha (para a esquerda) - recursivo
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Bispo (recursividade + loops) com exatamente 5 movimentos
void moverBispoCombinado(int movimentosRestantes, int i) {
    if (movimentosRestantes <= 0) return;

    // Loop aninhado simples
    for (int j = 0; j <= i; j++) {
        if (i == j) {
            printf("Cima Direita\n");
            movimentosRestantes--;
            break; // imprime uma vez por chamada recursiva
        }
    }

    // Próxima chamada recursiva
    moverBispoCombinado(movimentosRestantes, i + 1);
}

// Movimento único do Cavalo em "L"
void moverCavalo() {
    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n");
}

int main() {
    int movBispo = 5;     // Número total de movimentos desejado
    int movTorre = 5;
    int movRainha = 8;

    // Movimento do Bispo - combinado (com 5 movimentos)
    printf("Movimento do Bispo (Recursividade + Loops Aninhados)\n");
    moverBispoCombinado(movBispo, 0);
    printf("\n");

    // Movimento da Torre
    printf("Movimento da Torre\n");
    moverTorre(movTorre);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha\n");
    moverRainha(movRainha);
    printf("\n");

    // Movimento do Cavalo (único)
    printf("Movimento do Cavalo (Movimento em L único)\n");
    moverCavalo();
    printf("\n");

    return 0;
}


