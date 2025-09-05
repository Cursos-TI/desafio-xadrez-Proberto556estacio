
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

#include <stdio.h>

// Movimento da Torre (para a direita) - Recursividade
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento da Rainha (para a esquerda) - Recursividade
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Bispo (recursividade + loops) 
void moverBispo(int movimentosRestantes, int i) {
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
    moverBispo(movimentosRestantes, i + 1);
}

// Movimento único do Cavalo em "L" (2 para cima, 1 para a direita) usando loops aninhados
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
                break; // Sai do loop interno
            }

            // Se não for o movimento certo, continua o loop
            if (cima + direita < 3) {
                continue;
            }
        }

        // Se o movimento já foi feito, sai do loop externo
        if (movimentosRealizados) {
            break;
        }
    }
}

int main() {

    // Número total de movimentos desejados
    int movBispo = 5;     
    int movTorre = 5;
    int movRainha = 8;

    // Movimento do Bispo - combinado (com 5 movimentos)
    printf("Movimento do Bispo)\n");
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

    // Movimento do Cavalo (único, com loops aninhados)
    printf("Movimento do Cavalo (Movimento em L)\n");
    moverCavalo();
    printf("\n");

    return 0;
}
