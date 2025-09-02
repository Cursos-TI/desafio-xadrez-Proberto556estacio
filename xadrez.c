#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    
    
    //Movimento Bispo (Diagonal) - Utilizando Estrutura Repetição While.

    //Declarando variáveis Bispo. 
    int movBispo = 5;
    int i = 0;

    printf("Movimento do Bispo\n");
    
    while (i < movBispo)
    {
        printf("Cima Direita\n");
        i++;
    }    
    printf("\n");
    
    
    
    //Movimento da Torre (Vertical/Horizontal) - Utilizando Estrutura Repetição For.

    //Declarando variáveis torre.
    int movTorre = 5;

    printf("Movimento da Torre\n");

    for (int i = 0; i < movTorre; i++)
    {
        printf("Direita\n");
    }
    printf("\n");

    
    //Movimento da Rainha (Qualquer movimento) - Utilizando Estrutura Repetição Do While.

    //Declarando variáveis Rainha.
    int movRainha = 8;
    int j = 0;

    printf("Movimento da Rainha\n");

    do
    {
        printf("Esquerda\n");
        j++;
    } while (j < movRainha);
             







    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
